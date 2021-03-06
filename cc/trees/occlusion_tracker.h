// Copyright 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_TREES_OCCLUSION_TRACKER_H_
#define CC_TREES_OCCLUSION_TRACKER_H_

#include <vector>

#include "base/basictypes.h"
#include "cc/base/cc_export.h"
#include "cc/base/simple_enclosed_region.h"
#include "cc/layers/layer_iterator.h"
#include "cc/trees/occlusion.h"
#include "ui/gfx/rect.h"

namespace cc {
class LayerImpl;
class Region;
class RenderSurfaceImpl;
class Layer;
class RenderSurface;

// This class is used to track occlusion of layers while traversing them in a
// front-to-back order. As each layer is visited, one of the methods in this
// class is called to notify it about the current target surface. Then,
// occlusion in the content space of the current layer may be queried, via
// Occlusion from GetCurrentOcclusionForLayer(). If the current layer owns a
// RenderSurfaceImpl, then occlusion on that RenderSurfaceImpl may also be
// queried via surfaceOccluded() and surfaceUnoccludedContentRect(). Finally,
// once finished with the layer, occlusion behind the layer should be marked by
// calling MarkOccludedBehindLayer().
template <typename LayerType>
class CC_EXPORT OcclusionTracker {
 public:
  explicit OcclusionTracker(const gfx::Rect& screen_space_clip_rect);
  ~OcclusionTracker();

  // Return an occlusion that retains the current state of the tracker
  // and can be used outside of a layer walk to check occlusion.
  Occlusion GetCurrentOcclusionForLayer(
      const gfx::Transform& draw_transform) const;

  // Called at the beginning of each step in the LayerIterator's front-to-back
  // traversal.
  void EnterLayer(const LayerIteratorPosition<LayerType>& layer_iterator);
  // Called at the end of each step in the LayerIterator's front-to-back
  // traversal.
  void LeaveLayer(const LayerIteratorPosition<LayerType>& layer_iterator);

  // Gives an unoccluded sub-rect of |content_rect| in the content space of the
  // render_target owned by the layer. Used when considering occlusion for a
  // contributing surface that is rendering into another target.
  gfx::Rect UnoccludedContributingSurfaceContentRect(
      const gfx::Rect& content_rect,
      const gfx::Transform& draw_transform) const;

  // Gives the region of the screen that is not occluded by something opaque.
  Region ComputeVisibleRegionInScreen() const;

  void set_minimum_tracking_size(const gfx::Size& size) {
    minimum_tracking_size_ = size;
  }

  // The following is used for visualization purposes.
  void set_occluding_screen_space_rects_container(
      std::vector<gfx::Rect>* rects) {
    occluding_screen_space_rects_ = rects;
  }
  void set_non_occluding_screen_space_rects_container(
      std::vector<gfx::Rect>* rects) {
    non_occluding_screen_space_rects_ = rects;
  }

 protected:
  struct StackObject {
    StackObject() : target(0) {}
    explicit StackObject(const LayerType* target) : target(target) {}
    const LayerType* target;
    SimpleEnclosedRegion occlusion_from_outside_target;
    SimpleEnclosedRegion occlusion_from_inside_target;
  };

  // The stack holds occluded regions for subtrees in the
  // RenderSurfaceImpl-Layer tree, so that when we leave a subtree we may apply
  // a mask to it, but not to the parts outside the subtree.
  // - The first time we see a new subtree under a target, we add that target to
  // the top of the stack. This can happen as a layer representing itself, or as
  // a target surface.
  // - When we visit a target surface, we apply its mask to its subtree, which
  // is at the top of the stack.
  // - When we visit a layer representing itself, we add its occlusion to the
  // current subtree, which is at the top of the stack.
  // - When we visit a layer representing a contributing surface, the current
  // target will never be the top of the stack since we just came from the
  // contributing surface.
  // We merge the occlusion at the top of the stack with the new current
  // subtree. This new target is pushed onto the stack if not already there.
  std::vector<StackObject> stack_;

 private:
  // Called when visiting a layer representing itself. If the target was not
  // already current, then this indicates we have entered a new surface subtree.
  void EnterRenderTarget(const LayerType* new_target);

  // Called when visiting a layer representing a target surface. This indicates
  // we have visited all the layers within the surface, and we may perform any
  // surface-wide operations.
  void FinishedRenderTarget(const LayerType* finished_target);

  // Called when visiting a layer representing a contributing surface. This
  // indicates that we are leaving our current surface, and entering the new
  // one. We then perform any operations required for merging results from the
  // child subtree into its parent.
  void LeaveToRenderTarget(const LayerType* new_target);

  // Add the layer's occlusion to the tracked state.
  void MarkOccludedBehindLayer(const LayerType* layer);

  gfx::Rect screen_space_clip_rect_;
  gfx::Size minimum_tracking_size_;

  // This is used for visualizing the occlusion tracking process.
  std::vector<gfx::Rect>* occluding_screen_space_rects_;
  std::vector<gfx::Rect>* non_occluding_screen_space_rects_;

  DISALLOW_COPY_AND_ASSIGN(OcclusionTracker);
};

#if !defined(COMPILER_MSVC)
extern template class OcclusionTracker<Layer>;
extern template class OcclusionTracker<LayerImpl>;
#endif

}  // namespace cc

#endif  // CC_TREES_OCCLUSION_TRACKER_H_
