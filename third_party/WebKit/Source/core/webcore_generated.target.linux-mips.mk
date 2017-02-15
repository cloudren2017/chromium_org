# This file is generated by gyp; do not edit.

include $(CLEAR_VARS)

LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := third_party_WebKit_Source_core_webcore_generated_gyp
LOCAL_MODULE_SUFFIX := .a
LOCAL_MODULE_TARGET_ARCH := $(TARGET_$(GYP_VAR_PREFIX)ARCH)
gyp_intermediate_dir := $(call local-intermediates-dir,,$(GYP_VAR_PREFIX))
gyp_shared_intermediate_dir := $(call intermediates-dir-for,GYP,shared,,,$(GYP_VAR_PREFIX))

# Make sure our deps are built first.
GYP_TARGET_DEPENDENCIES := \
	$(call intermediates-dir-for,GYP,third_party_WebKit_Source_core_webcore_prerequisites_gyp,,,$(GYP_VAR_PREFIX))/webcore_prerequisites.stamp \
	$(call intermediates-dir-for,GYP,third_party_WebKit_Source_core_make_core_generated_gyp,,,$(GYP_VAR_PREFIX))/make_core_generated.stamp \
	$(call intermediates-dir-for,GYP,third_party_WebKit_Source_core_inspector_protocol_sources_gyp,,,$(GYP_VAR_PREFIX))/inspector_protocol_sources.stamp \
	$(call intermediates-dir-for,GYP,third_party_WebKit_Source_core_inspector_instrumentation_sources_gyp,,,$(GYP_VAR_PREFIX))/inspector_instrumentation_sources.stamp \
	$(call intermediates-dir-for,GYP,third_party_WebKit_Source_bindings_core_v8_bindings_core_v8_generated_gyp,,,$(GYP_VAR_PREFIX))/bindings_core_v8_generated.stamp \
	$(call intermediates-dir-for,GYP,third_party_WebKit_Source_bindings_modules_modules_event_generated_gyp,,,$(GYP_VAR_PREFIX))/modules_event_generated.stamp \
	$(call intermediates-dir-for,GYP,third_party_WebKit_Source_bindings_modules_v8_bindings_modules_v8_generated_gyp,,,$(GYP_VAR_PREFIX))/bindings_modules_v8_generated.stamp \
	$(call intermediates-dir-for,GYP,third_party_WebKit_Source_platform_make_platform_generated_gyp,,,$(GYP_VAR_PREFIX))/make_platform_generated.stamp \
	$(call intermediates-dir-for,GYP,skia_skia_gyp,,,$(GYP_VAR_PREFIX))/skia.stamp \
	$(call intermediates-dir-for,STATIC_LIBRARIES,skia_skia_library_gyp,,,$(GYP_VAR_PREFIX))/skia_skia_library_gyp.a \
	$(call intermediates-dir-for,GYP,third_party_libwebp_libwebp_gyp,,,$(GYP_VAR_PREFIX))/webp.stamp \
	$(call intermediates-dir-for,GYP,third_party_npapi_npapi_gyp,,,$(GYP_VAR_PREFIX))/npapi.stamp \
	$(call intermediates-dir-for,GYP,v8_tools_gyp_v8_gyp,,,$(GYP_VAR_PREFIX))/v8.stamp

GYP_GENERATED_OUTPUTS :=

# Make sure our deps and generated files are built first.
LOCAL_ADDITIONAL_DEPENDENCIES := $(GYP_TARGET_DEPENDENCIES) $(GYP_GENERATED_OUTPUTS)

$(gyp_intermediate_dir)/V8GeneratedCoreBindings01.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings01.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings02.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings02.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings03.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings03.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings04.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings04.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings05.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings05.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings06.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings06.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings07.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings07.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings08.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings08.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings09.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings09.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings10.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings10.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings11.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings11.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings12.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings12.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings13.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings13.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings14.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings14.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings15.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings15.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings16.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings16.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings17.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings17.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings18.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings18.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/V8GeneratedCoreBindings19.cpp: $(gyp_shared_intermediate_dir)/blink/bindings/core/v8/V8GeneratedCoreBindings19.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/CSSPropertyNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/CSSPropertyNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/CSSValueKeywords.cpp: $(gyp_shared_intermediate_dir)/blink/core/CSSValueKeywords.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/Event.cpp: $(gyp_shared_intermediate_dir)/blink/core/Event.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/EventNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/EventNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/EventTargetNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/EventTargetNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/EventTypeNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/EventTypeNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/FetchInitiatorTypeNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/FetchInitiatorTypeNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/HTMLElementFactory.cpp: $(gyp_shared_intermediate_dir)/blink/core/HTMLElementFactory.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/HTMLElementLookupTrie.cpp: $(gyp_shared_intermediate_dir)/blink/core/HTMLElementLookupTrie.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/HTMLNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/HTMLNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/HTMLTokenizerNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/HTMLTokenizerNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/InputTypeNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/InputTypeNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/MathMLNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/MathMLNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/SVGNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/SVGNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/UserAgentStyleSheetsData.cpp: $(gyp_shared_intermediate_dir)/blink/core/UserAgentStyleSheetsData.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/XLinkNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/XLinkNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/XMLNSNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/XMLNSNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/XMLNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/XMLNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/HTMLEntityTable.cpp: $(gyp_shared_intermediate_dir)/blink/core/HTMLEntityTable.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/MediaFeatureNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/MediaFeatureNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/MediaTypeNames.cpp: $(gyp_shared_intermediate_dir)/blink/core/MediaTypeNames.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/CSSTokenizer.cpp: $(gyp_shared_intermediate_dir)/blink/core/CSSTokenizer.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/BisonCSSParser.cpp: $(gyp_shared_intermediate_dir)/blink/core/BisonCSSParser.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/HTMLMetaElement.cpp: $(gyp_shared_intermediate_dir)/blink/core/HTMLMetaElement.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/CSSGrammar.cpp: $(gyp_shared_intermediate_dir)/blink/core/CSSGrammar.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/XPathGrammar.cpp: $(gyp_shared_intermediate_dir)/blink/core/XPathGrammar.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/InspectorFrontend.cpp: $(gyp_shared_intermediate_dir)/blink/core/InspectorFrontend.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/InspectorBackendDispatcher.cpp: $(gyp_shared_intermediate_dir)/blink/core/InspectorBackendDispatcher.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/InspectorTypeBuilder.cpp: $(gyp_shared_intermediate_dir)/blink/core/InspectorTypeBuilder.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/InspectorInstrumentationImpl.cpp: $(gyp_shared_intermediate_dir)/blink/core/InspectorInstrumentationImpl.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/SVGElementFactory.cpp: $(gyp_shared_intermediate_dir)/blink/core/SVGElementFactory.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/StylePropertyShorthand.cpp: $(gyp_shared_intermediate_dir)/blink/core/StylePropertyShorthand.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/StyleBuilder.cpp: $(gyp_shared_intermediate_dir)/blink/core/StyleBuilder.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/StyleBuilderFunctions.cpp: $(gyp_shared_intermediate_dir)/blink/core/StyleBuilderFunctions.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/CSSPropertyMetadata.cpp: $(gyp_shared_intermediate_dir)/blink/core/CSSPropertyMetadata.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/FontFaceDescriptors.cpp: $(gyp_shared_intermediate_dir)/blink/core/css/FontFaceDescriptors.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/DOMPointInit.cpp: $(gyp_shared_intermediate_dir)/blink/core/dom/DOMPointInit.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/MutationObserverInit.cpp: $(gyp_shared_intermediate_dir)/blink/core/dom/MutationObserverInit.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/ScrollOptions.cpp: $(gyp_shared_intermediate_dir)/blink/core/frame/ScrollOptions.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/HitRegionOptions.cpp: $(gyp_shared_intermediate_dir)/blink/core/html/canvas/HitRegionOptions.cpp
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/EventSourceInit.cpp: $(gyp_shared_intermediate_dir)/blink/core/page/EventSourceInit.cpp
	mkdir -p $(@D); cp $< $@
LOCAL_GENERATED_SOURCES := \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings01.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings02.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings03.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings04.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings05.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings06.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings07.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings08.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings09.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings10.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings11.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings12.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings13.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings14.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings15.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings16.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings17.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings18.cpp \
	$(gyp_intermediate_dir)/V8GeneratedCoreBindings19.cpp \
	$(gyp_intermediate_dir)/CSSPropertyNames.cpp \
	$(gyp_intermediate_dir)/CSSValueKeywords.cpp \
	$(gyp_intermediate_dir)/Event.cpp \
	$(gyp_intermediate_dir)/EventNames.cpp \
	$(gyp_intermediate_dir)/EventTargetNames.cpp \
	$(gyp_intermediate_dir)/EventTypeNames.cpp \
	$(gyp_intermediate_dir)/FetchInitiatorTypeNames.cpp \
	$(gyp_intermediate_dir)/HTMLElementFactory.cpp \
	$(gyp_intermediate_dir)/HTMLElementLookupTrie.cpp \
	$(gyp_intermediate_dir)/HTMLNames.cpp \
	$(gyp_intermediate_dir)/HTMLTokenizerNames.cpp \
	$(gyp_intermediate_dir)/InputTypeNames.cpp \
	$(gyp_intermediate_dir)/MathMLNames.cpp \
	$(gyp_intermediate_dir)/SVGNames.cpp \
	$(gyp_intermediate_dir)/UserAgentStyleSheetsData.cpp \
	$(gyp_intermediate_dir)/XLinkNames.cpp \
	$(gyp_intermediate_dir)/XMLNSNames.cpp \
	$(gyp_intermediate_dir)/XMLNames.cpp \
	$(gyp_intermediate_dir)/HTMLEntityTable.cpp \
	$(gyp_intermediate_dir)/MediaFeatureNames.cpp \
	$(gyp_intermediate_dir)/MediaTypeNames.cpp \
	$(gyp_intermediate_dir)/CSSTokenizer.cpp \
	$(gyp_intermediate_dir)/BisonCSSParser.cpp \
	$(gyp_intermediate_dir)/HTMLMetaElement.cpp \
	$(gyp_intermediate_dir)/CSSGrammar.cpp \
	$(gyp_intermediate_dir)/XPathGrammar.cpp \
	$(gyp_intermediate_dir)/InspectorFrontend.cpp \
	$(gyp_intermediate_dir)/InspectorBackendDispatcher.cpp \
	$(gyp_intermediate_dir)/InspectorTypeBuilder.cpp \
	$(gyp_intermediate_dir)/InspectorInstrumentationImpl.cpp \
	$(gyp_intermediate_dir)/SVGElementFactory.cpp \
	$(gyp_intermediate_dir)/StylePropertyShorthand.cpp \
	$(gyp_intermediate_dir)/StyleBuilder.cpp \
	$(gyp_intermediate_dir)/StyleBuilderFunctions.cpp \
	$(gyp_intermediate_dir)/CSSPropertyMetadata.cpp \
	$(gyp_intermediate_dir)/FontFaceDescriptors.cpp \
	$(gyp_intermediate_dir)/DOMPointInit.cpp \
	$(gyp_intermediate_dir)/MutationObserverInit.cpp \
	$(gyp_intermediate_dir)/ScrollOptions.cpp \
	$(gyp_intermediate_dir)/HitRegionOptions.cpp \
	$(gyp_intermediate_dir)/EventSourceInit.cpp

GYP_COPIED_SOURCE_ORIGIN_DIRS := \
	$(gyp_shared_intermediate_dir)/blink/bindings/core/v8 \
	$(gyp_shared_intermediate_dir)/blink/core \
	$(gyp_shared_intermediate_dir)/blink/core/css \
	$(gyp_shared_intermediate_dir)/blink/core/dom \
	$(gyp_shared_intermediate_dir)/blink/core/frame \
	$(gyp_shared_intermediate_dir)/blink/core/html/canvas \
	$(gyp_shared_intermediate_dir)/blink/core/page

LOCAL_SRC_FILES := \
	third_party/WebKit/Source/bindings/core/v8/custom/V8ArrayBufferCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8ArrayBufferViewCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8BlobCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8BlobCustomHelpers.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8CSSRuleCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8CSSStyleDeclarationCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8CSSValueCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8CanvasRenderingContext2DCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8CustomEventCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8CustomXPathNSResolver.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8DataViewCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8DedicatedWorkerGlobalScopeCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8DocumentCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8ElementCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8ErrorEventCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8EventCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8EventTargetCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8FileCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8FileReaderCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8HTMLAllCollectionCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8HTMLCanvasElementCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8HTMLDocumentCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8HTMLOptionsCollectionCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8HTMLPlugInElementCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8HistoryCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8InjectedScriptHostCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8InjectedScriptManager.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8InspectorFrontendHostCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8JavaScriptCallFrameCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8LocationCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8MessageChannelCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8MessageEventCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8MessagePortCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8MutationObserverCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8PopStateEventCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8TrackEventCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8WebGLRenderingContextCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8WindowCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8WorkerCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8WorkerGlobalScopeCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8XMLHttpRequestCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/custom/V8XSLTProcessorCustom.cpp \
	third_party/WebKit/Source/bindings/core/v8/ActiveDOMCallback.cpp \
	third_party/WebKit/Source/bindings/core/v8/ArrayValue.cpp \
	third_party/WebKit/Source/bindings/core/v8/BindingSecurity.cpp \
	third_party/WebKit/Source/bindings/core/v8/CustomElementBinding.cpp \
	third_party/WebKit/Source/bindings/core/v8/CustomElementConstructorBuilder.cpp \
	third_party/WebKit/Source/bindings/core/v8/DOMDataStore.cpp \
	third_party/WebKit/Source/bindings/core/v8/DOMWrapperWorld.cpp \
	third_party/WebKit/Source/bindings/core/v8/Dictionary.cpp \
	third_party/WebKit/Source/bindings/core/v8/DictionaryHelperForCore.cpp \
	third_party/WebKit/Source/bindings/core/v8/ExceptionMessages.cpp \
	third_party/WebKit/Source/bindings/core/v8/ExceptionState.cpp \
	third_party/WebKit/Source/bindings/core/v8/ExceptionStatePlaceholder.cpp \
	third_party/WebKit/Source/bindings/core/v8/ModuleProxy.cpp \
	third_party/WebKit/Source/bindings/core/v8/NPV8Object.cpp \
	third_party/WebKit/Source/bindings/core/v8/PageScriptDebugServer.cpp \
	third_party/WebKit/Source/bindings/core/v8/PrivateScriptRunner.cpp \
	third_party/WebKit/Source/bindings/core/v8/RetainedDOMInfo.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScheduledAction.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptCallStackFactory.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptController.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptDebugServer.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptEventListener.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptFunction.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptFunctionCall.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptGCEvent.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptHeapSnapshot.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptPreprocessor.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptProfiler.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptPromise.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptPromiseResolver.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptPromisePropertyBase.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptRegexp.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptState.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptStreamer.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptStreamerThread.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptString.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptValue.cpp \
	third_party/WebKit/Source/bindings/core/v8/ScriptWrappable.cpp \
	third_party/WebKit/Source/bindings/core/v8/SerializedScriptValue.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8AbstractEventListener.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8Binding.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8CustomElementLifecycleCallbacks.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8DOMActivityLogger.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8DOMConfiguration.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8DOMWrapper.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8ErrorHandler.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8EventListener.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8EventListenerList.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8GCController.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8GCForContextDispose.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8HiddenValue.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8Initializer.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8LazyEventListener.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8MutationCallback.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8NPObject.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8NPUtils.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8NodeFilterCondition.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8ObjectConstructor.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8PerContextData.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8PerIsolateData.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8RecursionScope.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8ScriptRunner.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8StringResource.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8ThrowException.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8ValueCache.cpp \
	third_party/WebKit/Source/bindings/core/v8/V8WorkerGlobalScopeEventListener.cpp \
	third_party/WebKit/Source/bindings/core/v8/WindowProxy.cpp \
	third_party/WebKit/Source/bindings/core/v8/WorkerScriptController.cpp \
	third_party/WebKit/Source/bindings/core/v8/WorkerScriptDebugServer.cpp \
	third_party/WebKit/Source/bindings/core/v8/npruntime.cpp


# Flags passed to both C and C++ files.
MY_CFLAGS_Debug := \
	-fstack-protector \
	--param=ssp-buffer-size=4 \
	 \
	-fno-strict-aliasing \
	-Wall \
	-Wno-unused-parameter \
	-Wno-missing-field-initializers \
	-fvisibility=hidden \
	-pipe \
	-fPIC \
	-Wno-unused-local-typedefs \
	-ffunction-sections \
	-funwind-tables \
	-g \
	-fstack-protector \
	-fno-short-enums \
	-finline-limit=64 \
	-Wa,--noexecstack \
	-U_FORTIFY_SOURCE \
	-Wno-extra \
	-Wno-ignored-qualifiers \
	-Wno-type-limits \
	-Wno-unused-but-set-variable \
	-Os \
	-g \
	-gdwarf-4 \
	-fdata-sections \
	-ffunction-sections \
	-fomit-frame-pointer \
	-funwind-tables

MY_DEFS_Debug := \
	'-DV8_DEPRECATION_WARNINGS' \
	'-D_FILE_OFFSET_BITS=64' \
	'-DNO_TCMALLOC' \
	'-DDISABLE_NACL' \
	'-DCHROMIUM_BUILD' \
	'-DUSE_LIBJPEG_TURBO=1' \
	'-DENABLE_WEBRTC=1' \
	'-DUSE_PROPRIETARY_CODECS' \
	'-DENABLE_BROWSER_CDMS' \
	'-DENABLE_CONFIGURATION_POLICY' \
	'-DDISCARDABLE_MEMORY_ALWAYS_SUPPORTED_NATIVELY' \
	'-DSYSTEM_NATIVELY_SIGNALS_MEMORY_PRESSURE' \
	'-DENABLE_EGLIMAGE=1' \
	'-DCLD_VERSION=1' \
	'-DENABLE_PRINTING=1' \
	'-DENABLE_MANAGED_USERS=1' \
	'-DDATA_REDUCTION_FALLBACK_HOST="http://compress.googlezip.net:80/"' \
	'-DDATA_REDUCTION_DEV_HOST="https://proxy-dev.googlezip.net:443/"' \
	'-DDATA_REDUCTION_DEV_FALLBACK_HOST="http://proxy-dev.googlezip.net:80/"' \
	'-DSPDY_PROXY_AUTH_ORIGIN="https://proxy.googlezip.net:443/"' \
	'-DDATA_REDUCTION_PROXY_PROBE_URL="http://check.googlezip.net/connect"' \
	'-DDATA_REDUCTION_PROXY_WARMUP_URL="http://www.gstatic.com/generate_204"' \
	'-DVIDEO_HOLE=1' \
	'-DENABLE_LOAD_COMPLETION_HACKS=1' \
	'-DBLINK_IMPLEMENTATION=1' \
	'-DINSIDE_BLINK' \
	'-DENABLE_SVG_FONTS=1' \
	'-DWTF_USE_CONCATENATED_IMPULSE_RESPONSES=1' \
	'-DWTF_USE_WEBAUDIO_OPENMAX_DL_FFT=1' \
	'-DENABLE_WEB_AUDIO=1' \
	'-DENABLE_OPENTYPE_VERTICAL=1' \
	'-DU_USING_ICU_NAMESPACE=0' \
	'-DU_ENABLE_DYLOAD=0' \
	'-DSK_ENABLE_INST_COUNT=0' \
	'-DSK_SUPPORT_GPU=1' \
	'-DGR_GL_CUSTOM_SETUP_HEADER="GrGLConfig_chrome.h"' \
	'-DSK_ENABLE_LEGACY_API_ALIASING=1' \
	'-DSK_ATTR_DEPRECATED=SK_NOTHING_ARG1' \
	'-DGR_GL_IGNORE_ES3_MSAA=0' \
	'-DSK_WILL_NEVER_DRAW_PERSPECTIVE_TEXT' \
	'-DSK_SUPPORT_LEGACY_TEXTRENDERMODE' \
	'-DSK_BUILD_FOR_ANDROID' \
	'-DSK_USE_POSIX_THREADS' \
	'-DSK_DEFERRED_CANVAS_USES_FACTORIES=1' \
	'-DSK_FM_NEW_MATCH_FAMILY_STYLE_CHARACTER=1' \
	'-DCHROME_PNG_WRITE_SUPPORT' \
	'-DPNG_USER_CONFIG' \
	'-DCHROME_PNG_READ_PACK_SUPPORT' \
	'-DLIBXML_STATIC' \
	'-DLIBXSLT_STATIC' \
	'-DUSE_OPENSSL=1' \
	'-DUSE_OPENSSL_CERTS=1' \
	'-D__STDC_CONSTANT_MACROS' \
	'-D__STDC_FORMAT_MACROS' \
	'-DANDROID' \
	'-D__GNU_SOURCE=1' \
	'-DUSE_STLPORT=1' \
	'-D_STLP_USE_PTR_SPECIALIZATIONS=1' \
	'-DCHROME_BUILD_ID=""' \
	'-DDYNAMIC_ANNOTATIONS_ENABLED=1' \
	'-DWTF_USE_DYNAMIC_ANNOTATIONS=1' \
	'-D_DEBUG'


# Include paths placed before CFLAGS/CPPFLAGS
LOCAL_C_INCLUDES_Debug := \
	$(gyp_shared_intermediate_dir)/shim_headers/icuuc/target \
	$(gyp_shared_intermediate_dir)/shim_headers/icui18n/target \
	$(gyp_shared_intermediate_dir) \
	$(LOCAL_PATH)/third_party/WebKit/Source \
	$(gyp_shared_intermediate_dir)/blink \
	$(LOCAL_PATH)/third_party/openmax_dl \
	$(LOCAL_PATH) \
	$(LOCAL_PATH)/skia/config \
	$(LOCAL_PATH)/third_party/khronos \
	$(LOCAL_PATH)/gpu \
	$(LOCAL_PATH)/third_party/angle/include \
	$(LOCAL_PATH)/third_party/WebKit \
	$(LOCAL_PATH)/third_party/ots/include \
	$(LOCAL_PATH)/third_party/zlib \
	$(PWD)/external/icu/icu4c/source/common \
	$(PWD)/external/icu/icu4c/source/i18n \
	$(LOCAL_PATH)/third_party/skia/src/core \
	$(LOCAL_PATH)/third_party/skia/include/core \
	$(LOCAL_PATH)/third_party/skia/include/effects \
	$(LOCAL_PATH)/third_party/skia/include/pdf \
	$(LOCAL_PATH)/third_party/skia/include/gpu \
	$(LOCAL_PATH)/third_party/skia/include/lazy \
	$(LOCAL_PATH)/third_party/skia/include/pathops \
	$(LOCAL_PATH)/third_party/skia/include/pipe \
	$(LOCAL_PATH)/third_party/skia/include/ports \
	$(LOCAL_PATH)/third_party/skia/include/utils \
	$(LOCAL_PATH)/skia/ext \
	$(LOCAL_PATH)/third_party/iccjpeg \
	$(LOCAL_PATH)/third_party/libpng \
	$(LOCAL_PATH)/third_party/libwebp \
	$(LOCAL_PATH)/third_party/libxml/linux/include \
	$(LOCAL_PATH)/third_party/libxml/src/include \
	$(LOCAL_PATH)/third_party/libxslt \
	$(LOCAL_PATH)/third_party/npapi \
	$(LOCAL_PATH)/third_party/npapi/bindings \
	$(LOCAL_PATH)/third_party/qcms/src \
	$(LOCAL_PATH)/third_party/sqlite \
	$(LOCAL_PATH)/v8/include \
	$(PWD)/frameworks/wilhelm/include \
	$(PWD)/bionic \
	$(PWD)/external/stlport/stlport


# Flags passed to only C++ (and not C) files.
LOCAL_CPPFLAGS_Debug := \
	-fno-exceptions \
	-fno-rtti \
	-fno-threadsafe-statics \
	-fvisibility-inlines-hidden \
	-Wsign-compare \
	-Wno-c++0x-compat \
	-Wno-uninitialized \
	-std=gnu++11 \
	-Wno-narrowing \
	-Wno-literal-suffix \
	-Wno-non-virtual-dtor \
	-Wno-sign-promo


# Flags passed to both C and C++ files.
MY_CFLAGS_Release := \
	-fstack-protector \
	--param=ssp-buffer-size=4 \
	 \
	-fno-strict-aliasing \
	-Wall \
	-Wno-unused-parameter \
	-Wno-missing-field-initializers \
	-fvisibility=hidden \
	-pipe \
	-fPIC \
	-Wno-unused-local-typedefs \
	-ffunction-sections \
	-funwind-tables \
	-g \
	-fstack-protector \
	-fno-short-enums \
	-finline-limit=64 \
	-Wa,--noexecstack \
	-U_FORTIFY_SOURCE \
	-Wno-extra \
	-Wno-ignored-qualifiers \
	-Wno-type-limits \
	-Wno-unused-but-set-variable \
	-Os \
	-fno-ident \
	-fdata-sections \
	-ffunction-sections \
	-fomit-frame-pointer \
	-funwind-tables

MY_DEFS_Release := \
	'-DV8_DEPRECATION_WARNINGS' \
	'-D_FILE_OFFSET_BITS=64' \
	'-DNO_TCMALLOC' \
	'-DDISABLE_NACL' \
	'-DCHROMIUM_BUILD' \
	'-DUSE_LIBJPEG_TURBO=1' \
	'-DENABLE_WEBRTC=1' \
	'-DUSE_PROPRIETARY_CODECS' \
	'-DENABLE_BROWSER_CDMS' \
	'-DENABLE_CONFIGURATION_POLICY' \
	'-DDISCARDABLE_MEMORY_ALWAYS_SUPPORTED_NATIVELY' \
	'-DSYSTEM_NATIVELY_SIGNALS_MEMORY_PRESSURE' \
	'-DENABLE_EGLIMAGE=1' \
	'-DCLD_VERSION=1' \
	'-DENABLE_PRINTING=1' \
	'-DENABLE_MANAGED_USERS=1' \
	'-DDATA_REDUCTION_FALLBACK_HOST="http://compress.googlezip.net:80/"' \
	'-DDATA_REDUCTION_DEV_HOST="https://proxy-dev.googlezip.net:443/"' \
	'-DDATA_REDUCTION_DEV_FALLBACK_HOST="http://proxy-dev.googlezip.net:80/"' \
	'-DSPDY_PROXY_AUTH_ORIGIN="https://proxy.googlezip.net:443/"' \
	'-DDATA_REDUCTION_PROXY_PROBE_URL="http://check.googlezip.net/connect"' \
	'-DDATA_REDUCTION_PROXY_WARMUP_URL="http://www.gstatic.com/generate_204"' \
	'-DVIDEO_HOLE=1' \
	'-DENABLE_LOAD_COMPLETION_HACKS=1' \
	'-DBLINK_IMPLEMENTATION=1' \
	'-DINSIDE_BLINK' \
	'-DENABLE_SVG_FONTS=1' \
	'-DWTF_USE_CONCATENATED_IMPULSE_RESPONSES=1' \
	'-DWTF_USE_WEBAUDIO_OPENMAX_DL_FFT=1' \
	'-DENABLE_WEB_AUDIO=1' \
	'-DENABLE_OPENTYPE_VERTICAL=1' \
	'-DU_USING_ICU_NAMESPACE=0' \
	'-DU_ENABLE_DYLOAD=0' \
	'-DSK_ENABLE_INST_COUNT=0' \
	'-DSK_SUPPORT_GPU=1' \
	'-DGR_GL_CUSTOM_SETUP_HEADER="GrGLConfig_chrome.h"' \
	'-DSK_ENABLE_LEGACY_API_ALIASING=1' \
	'-DSK_ATTR_DEPRECATED=SK_NOTHING_ARG1' \
	'-DGR_GL_IGNORE_ES3_MSAA=0' \
	'-DSK_WILL_NEVER_DRAW_PERSPECTIVE_TEXT' \
	'-DSK_SUPPORT_LEGACY_TEXTRENDERMODE' \
	'-DSK_BUILD_FOR_ANDROID' \
	'-DSK_USE_POSIX_THREADS' \
	'-DSK_DEFERRED_CANVAS_USES_FACTORIES=1' \
	'-DSK_FM_NEW_MATCH_FAMILY_STYLE_CHARACTER=1' \
	'-DCHROME_PNG_WRITE_SUPPORT' \
	'-DPNG_USER_CONFIG' \
	'-DCHROME_PNG_READ_PACK_SUPPORT' \
	'-DLIBXML_STATIC' \
	'-DLIBXSLT_STATIC' \
	'-DUSE_OPENSSL=1' \
	'-DUSE_OPENSSL_CERTS=1' \
	'-D__STDC_CONSTANT_MACROS' \
	'-D__STDC_FORMAT_MACROS' \
	'-DANDROID' \
	'-D__GNU_SOURCE=1' \
	'-DUSE_STLPORT=1' \
	'-D_STLP_USE_PTR_SPECIALIZATIONS=1' \
	'-DCHROME_BUILD_ID=""' \
	'-DNDEBUG' \
	'-DNVALGRIND' \
	'-DDYNAMIC_ANNOTATIONS_ENABLED=0' \
	'-D_FORTIFY_SOURCE=2'


# Include paths placed before CFLAGS/CPPFLAGS
LOCAL_C_INCLUDES_Release := \
	$(gyp_shared_intermediate_dir)/shim_headers/icuuc/target \
	$(gyp_shared_intermediate_dir)/shim_headers/icui18n/target \
	$(gyp_shared_intermediate_dir) \
	$(LOCAL_PATH)/third_party/WebKit/Source \
	$(gyp_shared_intermediate_dir)/blink \
	$(LOCAL_PATH)/third_party/openmax_dl \
	$(LOCAL_PATH) \
	$(LOCAL_PATH)/skia/config \
	$(LOCAL_PATH)/third_party/khronos \
	$(LOCAL_PATH)/gpu \
	$(LOCAL_PATH)/third_party/angle/include \
	$(LOCAL_PATH)/third_party/WebKit \
	$(LOCAL_PATH)/third_party/ots/include \
	$(LOCAL_PATH)/third_party/zlib \
	$(PWD)/external/icu/icu4c/source/common \
	$(PWD)/external/icu/icu4c/source/i18n \
	$(LOCAL_PATH)/third_party/skia/src/core \
	$(LOCAL_PATH)/third_party/skia/include/core \
	$(LOCAL_PATH)/third_party/skia/include/effects \
	$(LOCAL_PATH)/third_party/skia/include/pdf \
	$(LOCAL_PATH)/third_party/skia/include/gpu \
	$(LOCAL_PATH)/third_party/skia/include/lazy \
	$(LOCAL_PATH)/third_party/skia/include/pathops \
	$(LOCAL_PATH)/third_party/skia/include/pipe \
	$(LOCAL_PATH)/third_party/skia/include/ports \
	$(LOCAL_PATH)/third_party/skia/include/utils \
	$(LOCAL_PATH)/skia/ext \
	$(LOCAL_PATH)/third_party/iccjpeg \
	$(LOCAL_PATH)/third_party/libpng \
	$(LOCAL_PATH)/third_party/libwebp \
	$(LOCAL_PATH)/third_party/libxml/linux/include \
	$(LOCAL_PATH)/third_party/libxml/src/include \
	$(LOCAL_PATH)/third_party/libxslt \
	$(LOCAL_PATH)/third_party/npapi \
	$(LOCAL_PATH)/third_party/npapi/bindings \
	$(LOCAL_PATH)/third_party/qcms/src \
	$(LOCAL_PATH)/third_party/sqlite \
	$(LOCAL_PATH)/v8/include \
	$(PWD)/frameworks/wilhelm/include \
	$(PWD)/bionic \
	$(PWD)/external/stlport/stlport


# Flags passed to only C++ (and not C) files.
LOCAL_CPPFLAGS_Release := \
	-fno-exceptions \
	-fno-rtti \
	-fno-threadsafe-statics \
	-fvisibility-inlines-hidden \
	-Wsign-compare \
	-Wno-c++0x-compat \
	-Wno-uninitialized \
	-std=gnu++11 \
	-Wno-narrowing \
	-Wno-literal-suffix \
	-Wno-non-virtual-dtor \
	-Wno-sign-promo


LOCAL_CFLAGS := $(MY_CFLAGS_$(GYP_CONFIGURATION)) $(MY_DEFS_$(GYP_CONFIGURATION))
LOCAL_C_INCLUDES := $(GYP_COPIED_SOURCE_ORIGIN_DIRS) $(LOCAL_C_INCLUDES_$(GYP_CONFIGURATION))
LOCAL_CPPFLAGS := $(LOCAL_CPPFLAGS_$(GYP_CONFIGURATION))
LOCAL_ASFLAGS := $(LOCAL_CFLAGS)
### Rules for final target.

LOCAL_SHARED_LIBRARIES := \
	libstlport \
	libdl

# Add target alias to "gyp_all_modules" target.
.PHONY: gyp_all_modules
gyp_all_modules: third_party_WebKit_Source_core_webcore_generated_gyp

# Alias gyp target name.
.PHONY: webcore_generated
webcore_generated: third_party_WebKit_Source_core_webcore_generated_gyp

include $(BUILD_STATIC_LIBRARY)
