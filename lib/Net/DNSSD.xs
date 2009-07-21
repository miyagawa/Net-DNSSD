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

static void replyCallback(
                   DNSServiceRef sdRef,
                   DNSServiceFlags flags,
                   uint32_t interfaceIndex,
                   DNSServiceErrorType errorCode,
                   const char *serviceName,
                   const char *regtype,
                   const char *replyDomain,
                   void *context) {
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

MODULE = Net::DNSSD  PACKAGE = Net::DNSSD

DNSServiceRef
DNSServiceBrowse(char *type, SV *callback)
CODE:
{
    DNSServiceRef sdRef;
    DNSServiceBrowse(
                     &sdRef,
                     0, /* flags */
                     0, /* interface */
                     type,
                     NULL, /* domain */
                     replyCallback,
                     newSVsv(callback) /* context */
                     );

    RETVAL = sdRef;
}
OUTPUT: RETVAL

int
DNSServiceRefSockFD(DNSServiceRef sdRef)
CODE: 
    RETVAL = DNSServiceRefSockFD(sdRef);
OUTPUT: RETVAL

DNSServiceErrorType
DNSServiceProcessResult(DNSServiceRef sdRef)
CODE:
    RETVAL = DNSServiceProcessResult(sdRef);
OUTPUT: RETVAL

void
DNSServiceRefDeallocate(DNSServiceRef sdRef)
CODE:
    DNSServiceRefDeallocate(sdRef);
