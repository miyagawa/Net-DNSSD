#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"
#include "ppport.h"

#include <stdlib.h>
#include <stdio.h>
#include <netinet/in.h>
#include <dns_sd.h>
#include <sys/time.h>
#include <fcntl.h>

static void browseReplyCallback(
    DNSServiceRef sdRef,
    DNSServiceFlags flags,
    uint32_t interfaceIndex,
    DNSServiceErrorType errorCode,
    const char *serviceName,
    const char *regtype,
    const char *replyDomain,
    void *context
) {
    dSP;
    ENTER;
    SAVETMPS;
    PUSHMARK(SP);
    XPUSHs(sv_2mortal(newSVpv(serviceName, 0)));
    XPUSHs(sv_2mortal(newSVpv(regtype, 0)));
    XPUSHs(sv_2mortal(newSVpv(replyDomain, 0)));
    PUTBACK;
    call_sv(context, G_DISCARD);
    FREETMPS;
    LEAVE;
}

static void registerReplyCallback(
    DNSServiceRef sdRef,
    DNSServiceFlags flags,
    DNSServiceErrorType errorCode,
    const char *name,
    const char *regtype,
    const char *domain,
    void *context
) {
    dSP;
    ENTER;
    SAVETMPS;
    PUSHMARK(SP);
    XPUSHs(sv_2mortal(newSVpv(name, 0)));
    XPUSHs(sv_2mortal(newSVpv(regtype, 0)));
    XPUSHs(sv_2mortal(newSVpv(domain, 0)));
    PUTBACK;
    call_sv(context, G_DISCARD);
    FREETMPS;
    LEAVE;
}

MODULE = Net::DNSSD  PACKAGE = Net::DNSSD

DNSServiceRef
DNSServiceBrowse(SV *type, SV *domain, SV *callback)
CODE:
{
    DNSServiceRef sdRef;
    DNSServiceErrorType res;
    res = DNSServiceBrowse(
        &sdRef,
        0, /* flags */
        0, /* interface */
        SvOK(type)   ? SvPV_nolen(type)   : NULL,
        SvOK(domain) ? SvPV_nolen(domain) : NULL,
        browseReplyCallback,
        newSVsv(callback)
    );
    
    if (res != kDNSServiceErr_NoError) {
        XSRETURN_UNDEF;
    }

    RETVAL = sdRef;
}
OUTPUT: RETVAL

DNSServiceRef
DNSServiceRegister(SV *name, SV *regtype, SV *domain, int port, SV *callback)
CODE:
{
    DNSServiceRef sdRef;
    DNSServiceErrorType res;
    res = DNSServiceRegister(
        &sdRef,
        0, /* flags */
        0, /* interface */
        SvOK(name)    ? SvPV_nolen(name)    : NULL,
        SvOK(regtype) ? SvPV_nolen(regtype) : NULL,
        SvOK(domain)  ? SvPV_nolen(domain) : NULL,
        NULL, /* host */
        htons(port),
        0, /* txtLen */
        NULL, /* txtRecord */
        registerReplyCallback,
        newSVsv(callback)
    );
    
    if (res != kDNSServiceErr_NoError) {
        XSRETURN_UNDEF;
    }

    RETVAL = sdRef;
}
OUTPUT: RETVAL

int
DNSServiceRefSockFD(DNSServiceRef sdRef)

DNSServiceErrorType
DNSServiceProcessResult(DNSServiceRef sdRef)

void
DNSServiceRefDeallocate(DNSServiceRef sdRef)
