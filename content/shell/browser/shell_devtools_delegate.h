// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_SHELL_BROWSER_SHELL_DEVTOOLS_DELEGATE_H_
#define CONTENT_SHELL_BROWSER_SHELL_DEVTOOLS_DELEGATE_H_

#include "base/basictypes.h"
#include "base/compiler_specific.h"
#include "content/public/browser/devtools_http_handler_delegate.h"
#include "content/public/browser/devtools_manager_delegate.h"

namespace content {

class BrowserContext;
class DevToolsHttpHandler;

class ShellDevToolsDelegate : public DevToolsHttpHandlerDelegate {
 public:
  explicit ShellDevToolsDelegate(BrowserContext* browser_context);
  virtual ~ShellDevToolsDelegate();

  // Stops http server.
  void Stop();

  // DevToolsHttpHandlerDelegate implementation.
  virtual std::string GetDiscoveryPageHTML() OVERRIDE;
  virtual bool BundlesFrontendResources() OVERRIDE;
  virtual base::FilePath GetDebugFrontendDir() OVERRIDE;
  virtual scoped_ptr<net::StreamListenSocket> CreateSocketForTethering(
      net::StreamListenSocket::Delegate* delegate,
      std::string* name) OVERRIDE;

  DevToolsHttpHandler* devtools_http_handler() {
    return devtools_http_handler_;
  }

 private:
  BrowserContext* browser_context_;
  DevToolsHttpHandler* devtools_http_handler_;

  DISALLOW_COPY_AND_ASSIGN(ShellDevToolsDelegate);
};

class ShellDevToolsManagerDelegate : public DevToolsManagerDelegate {
 public:
  explicit ShellDevToolsManagerDelegate(BrowserContext* browser_context);
  virtual ~ShellDevToolsManagerDelegate();

  // DevToolsManagerDelegate implementation.
  virtual void Inspect(BrowserContext* browser_context,
                       DevToolsAgentHost* agent_host) OVERRIDE {}
  virtual void DevToolsAgentStateChanged(DevToolsAgentHost* agent_host,
                                         bool attached) OVERRIDE {}
  virtual base::DictionaryValue* HandleCommand(
      DevToolsAgentHost* agent_host,
      base::DictionaryValue* command) OVERRIDE;
  virtual scoped_ptr<DevToolsTarget> CreateNewTarget(const GURL& url) OVERRIDE;
  virtual void EnumerateTargets(TargetCallback callback) OVERRIDE;
  virtual std::string GetPageThumbnailData(const GURL& url) OVERRIDE;

 private:
  BrowserContext* browser_context_;

  DISALLOW_COPY_AND_ASSIGN(ShellDevToolsManagerDelegate);
};

}  // namespace content

#endif  // CONTENT_SHELL_BROWSER_SHELL_DEVTOOLS_DELEGATE_H_
