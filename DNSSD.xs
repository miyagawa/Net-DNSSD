#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"
#include "ppport.h"

#include <dns_sd.h>

#include "const-c.inc"

#define PREPARE_CALLBACK  dSP; ENTER; SAVETMPS; PUSHMARK(SP)
#define RUN_CALLBACK(c)   PUTBACK; call_sv(c, G_DISCARD); FREETMPS; LEAVE

static void BrowseReplyCallback(
    DNSServiceRef sdRef,
    DNSServiceFlags flags,
    uint32_t interfaceIndex,
    DNSServiceErrorType errorCode,
    const char *serviceName,
    const char *regtype,
    const char *replyDomain,
    void *context
) {
    PREPARE_CALLBACK;
    XPUSHs(sv_2mortal(newSVuv(flags)));
    XPUSHs(sv_2mortal(newSVuv(interfaceIndex)));
    XPUSHs(sv_2mortal(newSViv(errorCode)));
    XPUSHs(sv_2mortal(newSVpv(serviceName, 0)));
    XPUSHs(sv_2mortal(newSVpv(regtype, 0)));
    XPUSHs(sv_2mortal(newSVpv(replyDomain, 0)));
    RUN_CALLBACK(context);
}

static void RegisterReplyCallback(
    DNSServiceRef sdRef,
    DNSServiceFlags flags,
    DNSServiceErrorType errorCode,
    const char *name,
    const char *regtype,
    const char *domain,
    void *context
) {
    PREPARE_CALLBACK;
    XPUSHs(sv_2mortal(newSVuv(flags)));
    XPUSHs(sv_2mortal(newSViv(errorCode)));
    XPUSHs(sv_2mortal(newSVpv(name, 0)));
    XPUSHs(sv_2mortal(newSVpv(regtype, 0)));
    XPUSHs(sv_2mortal(newSVpv(domain, 0)));
    RUN_CALLBACK(context);
}

static void ResolveReplyCallback(
    DNSServiceRef sdRef,
    DNSServiceFlags flags,
    uint32_t interfaceIndex,
    DNSServiceErrorType errorCode,
    const char *fullname,
    const char *hosttarget,
    uint16_t port,
    uint16_t txtLen,
    const unsigned char *txtRecord,
    void *context
) {
    PREPARE_CALLBACK;
    XPUSHs(sv_2mortal(newSVuv(flags)));
    XPUSHs(sv_2mortal(newSVuv(interfaceIndex)));
    XPUSHs(sv_2mortal(newSViv(errorCode)));
    XPUSHs(sv_2mortal(newSVpv(fullname, 0)));
    XPUSHs(sv_2mortal(newSVpv(hosttarget, 0)));
    XPUSHs(sv_2mortal(newSVuv(port)));
    XPUSHs(sv_2mortal(newSVpv(txtRecord, 0)));
    RUN_CALLBACK(context);
}                                 

MODULE = Net::DNSSD		PACKAGE = Net::DNSSD		

INCLUDE: const-xs.inc
PROTOTYPES: DISABLE

DNSServiceRef
DNSServiceBrowse(flags, interfaceIndex, regtype, domain, context)
	DNSServiceFlags	flags
	uint32_t	interfaceIndex
	SV *	regtype
	SV *	domain
	SV *	context
CODE:
    DNSServiceRef sdRef;
    DNSServiceBrowse(
        &sdRef,
        flags,
        interfaceIndex,
        SvOK(regtype) ? SvPV_nolen(regtype) : NULL,
        SvOK(domain) ? SvPV_nolen(domain) : NULL,
        BrowseReplyCallback, newSVsv(context));
    RETVAL = sdRef;
OUTPUT:
    RETVAL

DNSServiceErrorType
DNSServiceProcessResult(sdRef)
	DNSServiceRef	sdRef

void
DNSServiceRefDeallocate(sdRef)
	DNSServiceRef	sdRef

int
DNSServiceRefSockFD(sdRef)
	DNSServiceRef	sdRef

DNSServiceRef
DNSServiceRegister(flags, interfaceIndex, name, regtype, domain, host, port, txtLen, txtRecord, context)
	DNSServiceFlags	flags
	uint32_t	interfaceIndex
        SV *	name
	SV *	regtype
	SV *	domain
	SV *	host
	uint16_t	port
	SV *	txtRecord
	SV *	context
CODE:
    DNSServiceRef sdRef;
    uint16_t txtLen = 0;
    DNSServiceRegister(
        &sdRef,
        flags,
        interfaceIndex,
        SvOK(name) ? SvPV_nolen(name) : NULL,
        SvOK(regtype) ? SvPV_nolen(regtype) : NULL,
        SvOK(domain) ? SvPV_nolen(domain) : NULL,
        SvOK(host) ? SvPV_nolen(host) : NULL,
        port,
        txtLen,
        SvOK(txtRecord) ? SvPV_nolen(txtRecord) : NULL,
        RegisterReplyCallback, newSVsv(context));
    RETVAL = sdRef;
OUTPUT:
    RETVAL

DNSServiceRef
DNSServiceResolve (flags, interfaceIndex, name, regtype, domain, context)
         DNSServiceFlags flags
         uint32_t interfaceIndex
         char *name
         char *regtype
         char *domain
         SV * context
CODE:
    DNSServiceRef sdRef;
    DNSServiceResolve(&sdRef, flags, interfaceIndex, name, regtype, domain, ResolveReplyCallback, newSVsv(context));
    RETVAL = sdRef;
OUTPUT:
    RETVAL
