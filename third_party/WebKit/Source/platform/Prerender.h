/*
 * Copyright (C) 2012 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef Prerender_h
#define Prerender_h

#include "platform/PlatformExport.h"
#include "platform/weborigin/KURL.h"
#include "platform/weborigin/ReferrerPolicy.h"
#include "wtf/OwnPtr.h"
#include "wtf/PassOwnPtr.h"
#include "wtf/PassRefPtr.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/text/WTFString.h"

namespace blink {

class PrerenderClient;

class PLATFORM_EXPORT Prerender : public RefCounted<Prerender> {
    WTF_MAKE_NONCOPYABLE(Prerender);
public:
    class ExtraData : public RefCounted<ExtraData> {
    public:
        virtual ~ExtraData() { }
    };

    static PassRefPtr<Prerender> create(PrerenderClient*, const KURL&, unsigned relTypes, const String& referrer, ReferrerPolicy);
    ~Prerender();

    void removeClient();

    void add();
    void cancel();
    void abandon();

    const KURL& url() const { return m_url; }
    unsigned relTypes() const { return m_relTypes; }
    const String& referrer() const { return m_referrer; }
    ReferrerPolicy referrerPolicy() const { return m_referrerPolicy; }

    void setExtraData(PassRefPtr<ExtraData> extraData) { m_extraData = extraData; }
    ExtraData* extraData() { return m_extraData.get(); }

    void didStartPrerender();
    void didStopPrerender();
    void didSendLoadForPrerender();
    void didSendDOMContentLoadedForPrerender();

private:
    Prerender(PrerenderClient*, const KURL&, unsigned relTypes, const String& referrer, ReferrerPolicy);

    PrerenderClient* m_client;

    const KURL m_url;
    const unsigned m_relTypes;
    const String m_referrer;
    const ReferrerPolicy m_referrerPolicy;

    RefPtr<ExtraData> m_extraData;
};

}

#endif // Prerender_h
