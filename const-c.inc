#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_18 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     kDNSServiceType_A6 kDNSServiceType_DS kDNSServiceType_KX
     kDNSServiceType_MB kDNSServiceType_MD kDNSServiceType_MF
     kDNSServiceType_MG kDNSServiceType_MR kDNSServiceType_MX
     kDNSServiceType_NS kDNSServiceType_PX kDNSServiceType_RP
     kDNSServiceType_RT */
  /* Offset 17 gives the best switch position.  */
  switch (name[17]) {
  case '6':
    if (memEQ(name, "kDNSServiceType_A", 17)) {
    /*                                6      */
      *iv_return = kDNSServiceType_A6;
      return PERL_constant_ISIV;
    }
    break;
  case 'B':
    if (memEQ(name, "kDNSServiceType_M", 17)) {
    /*                                B      */
      *iv_return = kDNSServiceType_MB;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "kDNSServiceType_M", 17)) {
    /*                                D      */
      *iv_return = kDNSServiceType_MD;
      return PERL_constant_ISIV;
    }
    break;
  case 'F':
    if (memEQ(name, "kDNSServiceType_M", 17)) {
    /*                                F      */
      *iv_return = kDNSServiceType_MF;
      return PERL_constant_ISIV;
    }
    break;
  case 'G':
    if (memEQ(name, "kDNSServiceType_M", 17)) {
    /*                                G      */
      *iv_return = kDNSServiceType_MG;
      return PERL_constant_ISIV;
    }
    break;
  case 'P':
    if (memEQ(name, "kDNSServiceType_R", 17)) {
    /*                                P      */
      *iv_return = kDNSServiceType_RP;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "kDNSServiceType_M", 17)) {
    /*                                R      */
      *iv_return = kDNSServiceType_MR;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "kDNSServiceType_D", 17)) {
    /*                                S      */
      *iv_return = kDNSServiceType_DS;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "kDNSServiceType_N", 17)) {
    /*                                S      */
      *iv_return = kDNSServiceType_NS;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "kDNSServiceType_R", 17)) {
    /*                                T      */
      *iv_return = kDNSServiceType_RT;
      return PERL_constant_ISIV;
    }
    break;
  case 'X':
    if (memEQ(name, "kDNSServiceType_K", 17)) {
    /*                                X      */
      *iv_return = kDNSServiceType_KX;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "kDNSServiceType_M", 17)) {
    /*                                X      */
      *iv_return = kDNSServiceType_MX;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "kDNSServiceType_P", 17)) {
    /*                                X      */
      *iv_return = kDNSServiceType_PX;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_19 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     kDNSServiceClass_IN kDNSServiceFlagsAdd kDNSServiceType_ANY
     kDNSServiceType_APL kDNSServiceType_EID kDNSServiceType_KEY
     kDNSServiceType_LOC kDNSServiceType_NXT kDNSServiceType_OPT
     kDNSServiceType_PTR kDNSServiceType_SIG kDNSServiceType_SOA
     kDNSServiceType_SRV kDNSServiceType_TXT kDNSServiceType_WKS
     kDNSServiceType_X25 */
  /* Offset 18 gives the best switch position.  */
  switch (name[18]) {
  case '5':
    if (memEQ(name, "kDNSServiceType_X2", 18)) {
    /*                                 5      */
      *iv_return = kDNSServiceType_X25;
      return PERL_constant_ISIV;
    }
    break;
  case 'A':
    if (memEQ(name, "kDNSServiceType_SO", 18)) {
    /*                                 A      */
      *iv_return = kDNSServiceType_SOA;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "kDNSServiceType_LO", 18)) {
    /*                                 C      */
      *iv_return = kDNSServiceType_LOC;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "kDNSServiceType_EI", 18)) {
    /*                                 D      */
      *iv_return = kDNSServiceType_EID;
      return PERL_constant_ISIV;
    }
    break;
  case 'G':
    if (memEQ(name, "kDNSServiceType_SI", 18)) {
    /*                                 G      */
      *iv_return = kDNSServiceType_SIG;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "kDNSServiceType_AP", 18)) {
    /*                                 L      */
      *iv_return = kDNSServiceType_APL;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "kDNSServiceClass_I", 18)) {
    /*                                 N      */
      *iv_return = kDNSServiceClass_IN;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "kDNSServiceType_PT", 18)) {
    /*                                 R      */
      *iv_return = kDNSServiceType_PTR;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "kDNSServiceType_WK", 18)) {
    /*                                 S      */
      *iv_return = kDNSServiceType_WKS;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "kDNSServiceType_NX", 18)) {
    /*                                 T      */
      *iv_return = kDNSServiceType_NXT;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "kDNSServiceType_OP", 18)) {
    /*                                 T      */
      *iv_return = kDNSServiceType_OPT;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "kDNSServiceType_TX", 18)) {
    /*                                 T      */
      *iv_return = kDNSServiceType_TXT;
      return PERL_constant_ISIV;
    }
    break;
  case 'V':
    if (memEQ(name, "kDNSServiceType_SR", 18)) {
    /*                                 V      */
      *iv_return = kDNSServiceType_SRV;
      return PERL_constant_ISIV;
    }
    break;
  case 'Y':
    if (memEQ(name, "kDNSServiceType_AN", 18)) {
    /*                                 Y      */
      *iv_return = kDNSServiceType_ANY;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "kDNSServiceType_KE", 18)) {
    /*                                 Y      */
      *iv_return = kDNSServiceType_KEY;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "kDNSServiceFlagsAd", 18)) {
    /*                                 d      */
      *iv_return = kDNSServiceFlagsAdd;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_20 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     kDNSServiceType_AAAA kDNSServiceType_ATMA kDNSServiceType_AXFR
     kDNSServiceType_CERT kDNSServiceType_GPOS kDNSServiceType_ISDN
     kDNSServiceType_IXFR kDNSServiceType_NSAP kDNSServiceType_NSEC
     kDNSServiceType_NULL kDNSServiceType_SINK kDNSServiceType_TKEY
     kDNSServiceType_TSIG */
  /* Offset 19 gives the best switch position.  */
  switch (name[19]) {
  case 'A':
    if (memEQ(name, "kDNSServiceType_AAA", 19)) {
    /*                                  A      */
      *iv_return = kDNSServiceType_AAAA;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "kDNSServiceType_ATM", 19)) {
    /*                                  A      */
      *iv_return = kDNSServiceType_ATMA;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "kDNSServiceType_NSE", 19)) {
    /*                                  C      */
      *iv_return = kDNSServiceType_NSEC;
      return PERL_constant_ISIV;
    }
    break;
  case 'G':
    if (memEQ(name, "kDNSServiceType_TSI", 19)) {
    /*                                  G      */
      *iv_return = kDNSServiceType_TSIG;
      return PERL_constant_ISIV;
    }
    break;
  case 'K':
    if (memEQ(name, "kDNSServiceType_SIN", 19)) {
    /*                                  K      */
      *iv_return = kDNSServiceType_SINK;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "kDNSServiceType_NUL", 19)) {
    /*                                  L      */
      *iv_return = kDNSServiceType_NULL;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "kDNSServiceType_ISD", 19)) {
    /*                                  N      */
      *iv_return = kDNSServiceType_ISDN;
      return PERL_constant_ISIV;
    }
    break;
  case 'P':
    if (memEQ(name, "kDNSServiceType_NSA", 19)) {
    /*                                  P      */
      *iv_return = kDNSServiceType_NSAP;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "kDNSServiceType_AXF", 19)) {
    /*                                  R      */
      *iv_return = kDNSServiceType_AXFR;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "kDNSServiceType_IXF", 19)) {
    /*                                  R      */
      *iv_return = kDNSServiceType_IXFR;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "kDNSServiceType_GPO", 19)) {
    /*                                  S      */
      *iv_return = kDNSServiceType_GPOS;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "kDNSServiceType_CER", 19)) {
    /*                                  T      */
      *iv_return = kDNSServiceType_CERT;
      return PERL_constant_ISIV;
    }
    break;
  case 'Y':
    if (memEQ(name, "kDNSServiceType_TKE", 19)) {
    /*                                  Y      */
      *iv_return = kDNSServiceType_TKEY;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_21 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     kDNSServiceErr_BadKey kDNSServiceErr_BadSig kDNSServiceErr_NoAuth
     kDNSServiceFlagsForce kDNSServiceType_AFSDB kDNSServiceType_CNAME
     kDNSServiceType_DHCID kDNSServiceType_DNAME kDNSServiceType_HINFO
     kDNSServiceType_MAILA kDNSServiceType_MAILB kDNSServiceType_MINFO
     kDNSServiceType_NAPTR kDNSServiceType_RRSIG kDNSServiceType_SSHFP */
  /* Offset 20 gives the best switch position.  */
  switch (name[20]) {
  case 'A':
    if (memEQ(name, "kDNSServiceType_MAIL", 20)) {
    /*                                   A      */
      *iv_return = kDNSServiceType_MAILA;
      return PERL_constant_ISIV;
    }
    break;
  case 'B':
    if (memEQ(name, "kDNSServiceType_AFSD", 20)) {
    /*                                   B      */
      *iv_return = kDNSServiceType_AFSDB;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "kDNSServiceType_MAIL", 20)) {
    /*                                   B      */
      *iv_return = kDNSServiceType_MAILB;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "kDNSServiceType_DHCI", 20)) {
    /*                                   D      */
      *iv_return = kDNSServiceType_DHCID;
      return PERL_constant_ISIV;
    }
    break;
  case 'E':
    if (memEQ(name, "kDNSServiceType_CNAM", 20)) {
    /*                                   E      */
      *iv_return = kDNSServiceType_CNAME;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "kDNSServiceType_DNAM", 20)) {
    /*                                   E      */
      *iv_return = kDNSServiceType_DNAME;
      return PERL_constant_ISIV;
    }
    break;
  case 'G':
    if (memEQ(name, "kDNSServiceType_RRSI", 20)) {
    /*                                   G      */
      *iv_return = kDNSServiceType_RRSIG;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "kDNSServiceType_HINF", 20)) {
    /*                                   O      */
      *iv_return = kDNSServiceType_HINFO;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "kDNSServiceType_MINF", 20)) {
    /*                                   O      */
      *iv_return = kDNSServiceType_MINFO;
      return PERL_constant_ISIV;
    }
    break;
  case 'P':
    if (memEQ(name, "kDNSServiceType_SSHF", 20)) {
    /*                                   P      */
      *iv_return = kDNSServiceType_SSHFP;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "kDNSServiceType_NAPT", 20)) {
    /*                                   R      */
      *iv_return = kDNSServiceType_NAPTR;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "kDNSServiceFlagsForc", 20)) {
    /*                                   e      */
      *iv_return = kDNSServiceFlagsForce;
      return PERL_constant_ISIV;
    }
    break;
  case 'g':
    if (memEQ(name, "kDNSServiceErr_BadSi", 20)) {
    /*                                   g      */
      *iv_return = kDNSServiceErr_BadSig;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "kDNSServiceErr_NoAut", 20)) {
    /*                                   h      */
      *iv_return = kDNSServiceErr_NoAuth;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "kDNSServiceErr_BadKe", 20)) {
    /*                                   y      */
      *iv_return = kDNSServiceErr_BadKey;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_22 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     kDNSServiceErr_BadTime kDNSServiceErr_Invalid kDNSServiceErr_NoError
     kDNSServiceErr_Refused kDNSServiceErr_Unknown kDNSServiceFlagsShared
     kDNSServiceFlagsUnique kDNSServiceType_DNSKEY kDNSServiceType_NIMLOC */
  /* Offset 17 gives the best switch position.  */
  switch (name[17]) {
  case 'E':
    if (memEQ(name, "kDNSServiceErr_NoError", 22)) {
    /*                                ^           */
      *iv_return = kDNSServiceErr_NoError;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "kDNSServiceType_NIMLOC", 22)) {
    /*                                ^           */
      *iv_return = kDNSServiceType_NIMLOC;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "kDNSServiceType_DNSKEY", 22)) {
    /*                                ^           */
      *iv_return = kDNSServiceType_DNSKEY;
      return PERL_constant_ISIV;
    }
    break;
  case 'd':
    if (memEQ(name, "kDNSServiceErr_BadTime", 22)) {
    /*                                ^           */
      *iv_return = kDNSServiceErr_BadTime;
      return PERL_constant_ISIV;
    }
    break;
  case 'f':
    if (memEQ(name, "kDNSServiceErr_Refused", 22)) {
    /*                                ^           */
      *iv_return = kDNSServiceErr_Refused;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "kDNSServiceFlagsShared", 22)) {
    /*                                ^           */
      *iv_return = kDNSServiceFlagsShared;
      return PERL_constant_ISIV;
    }
    break;
  case 'k':
    if (memEQ(name, "kDNSServiceErr_Unknown", 22)) {
    /*                                ^           */
      *iv_return = kDNSServiceErr_Unknown;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "kDNSServiceFlagsUnique", 22)) {
    /*                                ^           */
      *iv_return = kDNSServiceFlagsUnique;
      return PERL_constant_ISIV;
    }
    break;
  case 'v':
    if (memEQ(name, "kDNSServiceErr_Invalid", 22)) {
    /*                                ^           */
      *iv_return = kDNSServiceErr_Invalid;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_23 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     kDNSServiceErr_BadFlags kDNSServiceErr_BadParam kDNSServiceErr_BadState
     kDNSServiceErr_Firewall kDNSServiceErr_NoMemory kDNSServiceFlagsDefault
     kDNSServiceProtocol_TCP kDNSServiceProtocol_UDP */
  /* Offset 22 gives the best switch position.  */
  switch (name[22]) {
  case 'P':
    if (memEQ(name, "kDNSServiceProtocol_TC", 22)) {
    /*                                     P      */
      *iv_return = kDNSServiceProtocol_TCP;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "kDNSServiceProtocol_UD", 22)) {
    /*                                     P      */
      *iv_return = kDNSServiceProtocol_UDP;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "kDNSServiceErr_BadStat", 22)) {
    /*                                     e      */
      *iv_return = kDNSServiceErr_BadState;
      return PERL_constant_ISIV;
    }
    break;
  case 'l':
    if (memEQ(name, "kDNSServiceErr_Firewal", 22)) {
    /*                                     l      */
      *iv_return = kDNSServiceErr_Firewall;
      return PERL_constant_ISIV;
    }
    break;
  case 'm':
    if (memEQ(name, "kDNSServiceErr_BadPara", 22)) {
    /*                                     m      */
      *iv_return = kDNSServiceErr_BadParam;
      return PERL_constant_ISIV;
    }
    break;
  case 's':
    if (memEQ(name, "kDNSServiceErr_BadFlag", 22)) {
    /*                                     s      */
      *iv_return = kDNSServiceErr_BadFlags;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "kDNSServiceFlagsDefaul", 22)) {
    /*                                     t      */
      *iv_return = kDNSServiceFlagsDefault;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "kDNSServiceErr_NoMemor", 22)) {
    /*                                     y      */
      *iv_return = kDNSServiceErr_NoMemory;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_24 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     kDNSServiceErr_DoubleNAT kDNSServiceErr_NoSuchKey kDNSServiceErr_Transient
     kDNSServiceMaxDomainName kDNSServiceProtocol_IPv4 kDNSServiceProtocol_IPv6
     kDNSServiceType_IPSECKEY kDNSServiceType_NSAP_PTR */
  /* Offset 23 gives the best switch position.  */
  switch (name[23]) {
  case '4':
    if (memEQ(name, "kDNSServiceProtocol_IPv", 23)) {
    /*                                      4      */
      *iv_return = kDNSServiceProtocol_IPv4;
      return PERL_constant_ISIV;
    }
    break;
  case '6':
    if (memEQ(name, "kDNSServiceProtocol_IPv", 23)) {
    /*                                      6      */
      *iv_return = kDNSServiceProtocol_IPv6;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "kDNSServiceType_NSAP_PT", 23)) {
    /*                                      R      */
      *iv_return = kDNSServiceType_NSAP_PTR;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "kDNSServiceErr_DoubleNA", 23)) {
    /*                                      T      */
      *iv_return = kDNSServiceErr_DoubleNAT;
      return PERL_constant_ISIV;
    }
    break;
  case 'Y':
    if (memEQ(name, "kDNSServiceType_IPSECKE", 23)) {
    /*                                      Y      */
      *iv_return = kDNSServiceType_IPSECKEY;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "kDNSServiceMaxDomainNam", 23)) {
    /*                                      e      */
      *iv_return = kDNSServiceMaxDomainName;
      return PERL_constant_ISIV;
    }
    break;
  case 't':
    if (memEQ(name, "kDNSServiceErr_Transien", 23)) {
    /*                                      t      */
      *iv_return = kDNSServiceErr_Transient;
      return PERL_constant_ISIV;
    }
    break;
  case 'y':
    if (memEQ(name, "kDNSServiceErr_NoSuchKe", 23)) {
    /*                                      y      */
      *iv_return = kDNSServiceErr_NoSuchKey;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_27 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     kDNSServiceErr_BadReference kDNSServiceErr_Incompatible
     kDNSServiceErr_NATTraversal kDNSServiceErr_NameConflict
     kDNSServiceErr_NoSuchRecord kDNSServiceFlagsReturnCNAME */
  /* Offset 20 gives the best switch position.  */
  switch (name[20]) {
  case 'a':
    if (memEQ(name, "kDNSServiceErr_NATTraversal", 27)) {
    /*                                   ^             */
      *iv_return = kDNSServiceErr_NATTraversal;
      return PERL_constant_ISIV;
    }
    break;
  case 'f':
    if (memEQ(name, "kDNSServiceErr_BadReference", 27)) {
    /*                                   ^             */
      *iv_return = kDNSServiceErr_BadReference;
      return PERL_constant_ISIV;
    }
    break;
  case 'h':
    if (memEQ(name, "kDNSServiceErr_NoSuchRecord", 27)) {
    /*                                   ^             */
      *iv_return = kDNSServiceErr_NoSuchRecord;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "kDNSServiceErr_NameConflict", 27)) {
    /*                                   ^             */
      *iv_return = kDNSServiceErr_NameConflict;
      return PERL_constant_ISIV;
    }
    break;
  case 'p':
    if (memEQ(name, "kDNSServiceErr_Incompatible", 27)) {
    /*                                   ^             */
      *iv_return = kDNSServiceErr_Incompatible;
      return PERL_constant_ISIV;
    }
    break;
  case 'r':
    if (memEQ(name, "kDNSServiceFlagsReturnCNAME", 27)) {
    /*                                   ^             */
      *iv_return = kDNSServiceFlagsReturnCNAME;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_32 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     kDNSServiceErr_AlreadyRegistered kDNSServiceErr_BadInterfaceIndex
     kDNSServiceErr_ServiceNotRunning kDNSServiceFlagsAllowRemoteQuery
     kDNSServiceInterfaceIndexUnicast */
  /* Offset 19 gives the best switch position.  */
  switch (name[19]) {
  case 'a':
    if (memEQ(name, "kDNSServiceErr_AlreadyRegistered", 32)) {
    /*                                  ^                   */
      *iv_return = kDNSServiceErr_AlreadyRegistered;
      return PERL_constant_ISIV;
    }
    break;
  case 'e':
    if (memEQ(name, "kDNSServiceInterfaceIndexUnicast", 32)) {
    /*                                  ^                   */
      *iv_return = kDNSServiceInterfaceIndexUnicast;
      return PERL_constant_ISIV;
    }
    break;
  case 'i':
    if (memEQ(name, "kDNSServiceErr_ServiceNotRunning", 32)) {
    /*                                  ^                   */
      *iv_return = kDNSServiceErr_ServiceNotRunning;
      return PERL_constant_ISIV;
    }
    break;
  case 'n':
    if (memEQ(name, "kDNSServiceErr_BadInterfaceIndex", 32)) {
    /*                                  ^                   */
      *iv_return = kDNSServiceErr_BadInterfaceIndex;
      return PERL_constant_ISIV;
    }
    break;
  case 'o':
    if (memEQ(name, "kDNSServiceFlagsAllowRemoteQuery", 32)) {
    /*                                  ^                   */
      *iv_return = kDNSServiceFlagsAllowRemoteQuery;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!perl -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(kDNSServiceClass_IN kDNSServiceErr_AlreadyRegistered
	       kDNSServiceErr_BadFlags kDNSServiceErr_BadInterfaceIndex
	       kDNSServiceErr_BadKey kDNSServiceErr_BadParam
	       kDNSServiceErr_BadReference kDNSServiceErr_BadSig
	       kDNSServiceErr_BadState kDNSServiceErr_BadTime
	       kDNSServiceErr_DoubleNAT kDNSServiceErr_Firewall
	       kDNSServiceErr_Incompatible kDNSServiceErr_Invalid
	       kDNSServiceErr_NATPortMappingDisabled
	       kDNSServiceErr_NATPortMappingUnsupported
	       kDNSServiceErr_NATTraversal kDNSServiceErr_NameConflict
	       kDNSServiceErr_NoAuth kDNSServiceErr_NoError
	       kDNSServiceErr_NoMemory kDNSServiceErr_NoSuchKey
	       kDNSServiceErr_NoSuchName kDNSServiceErr_NoSuchRecord
	       kDNSServiceErr_NotInitialized kDNSServiceErr_Refused
	       kDNSServiceErr_ServiceNotRunning kDNSServiceErr_Transient
	       kDNSServiceErr_Unknown kDNSServiceErr_Unsupported
	       kDNSServiceFlagsAdd kDNSServiceFlagsAllowRemoteQuery
	       kDNSServiceFlagsBrowseDomains kDNSServiceFlagsDefault
	       kDNSServiceFlagsForce kDNSServiceFlagsForceMulticast
	       kDNSServiceFlagsLongLivedQuery kDNSServiceFlagsMoreComing
	       kDNSServiceFlagsNoAutoRename kDNSServiceFlagsRegistrationDomains
	       kDNSServiceFlagsReturnCNAME kDNSServiceFlagsReturnIntermediates
	       kDNSServiceFlagsShareConnection kDNSServiceFlagsShared
	       kDNSServiceFlagsUnique kDNSServiceInterfaceIndexAny
	       kDNSServiceInterfaceIndexLocalOnly
	       kDNSServiceInterfaceIndexUnicast kDNSServiceMaxDomainName
	       kDNSServiceMaxServiceName kDNSServiceProtocol_IPv4
	       kDNSServiceProtocol_IPv6 kDNSServiceProtocol_TCP
	       kDNSServiceProtocol_UDP kDNSServiceType_A kDNSServiceType_A6
	       kDNSServiceType_AAAA kDNSServiceType_AFSDB kDNSServiceType_ANY
	       kDNSServiceType_APL kDNSServiceType_ATMA kDNSServiceType_AXFR
	       kDNSServiceType_CERT kDNSServiceType_CNAME kDNSServiceType_DHCID
	       kDNSServiceType_DNAME kDNSServiceType_DNSKEY kDNSServiceType_DS
	       kDNSServiceType_EID kDNSServiceType_GPOS kDNSServiceType_HINFO
	       kDNSServiceType_IPSECKEY kDNSServiceType_ISDN
	       kDNSServiceType_IXFR kDNSServiceType_KEY kDNSServiceType_KX
	       kDNSServiceType_LOC kDNSServiceType_MAILA kDNSServiceType_MAILB
	       kDNSServiceType_MB kDNSServiceType_MD kDNSServiceType_MF
	       kDNSServiceType_MG kDNSServiceType_MINFO kDNSServiceType_MR
	       kDNSServiceType_MX kDNSServiceType_NAPTR kDNSServiceType_NIMLOC
	       kDNSServiceType_NS kDNSServiceType_NSAP kDNSServiceType_NSAP_PTR
	       kDNSServiceType_NSEC kDNSServiceType_NULL kDNSServiceType_NXT
	       kDNSServiceType_OPT kDNSServiceType_PTR kDNSServiceType_PX
	       kDNSServiceType_RP kDNSServiceType_RRSIG kDNSServiceType_RT
	       kDNSServiceType_SIG kDNSServiceType_SINK kDNSServiceType_SOA
	       kDNSServiceType_SRV kDNSServiceType_SSHFP kDNSServiceType_TKEY
	       kDNSServiceType_TSIG kDNSServiceType_TXT kDNSServiceType_WKS
	       kDNSServiceType_X25));

print constant_types(); # macro defs
foreach (C_constant ("Net::DNSSD", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "#### XS Section:\n";
print XS_constant ("Net::DNSSD", $types);
__END__
   */

  switch (len) {
  case 17:
    if (memEQ(name, "kDNSServiceType_A", 17)) {
      *iv_return = kDNSServiceType_A;
      return PERL_constant_ISIV;
    }
    break;
  case 18:
    return constant_18 (aTHX_ name, iv_return);
    break;
  case 19:
    return constant_19 (aTHX_ name, iv_return);
    break;
  case 20:
    return constant_20 (aTHX_ name, iv_return);
    break;
  case 21:
    return constant_21 (aTHX_ name, iv_return);
    break;
  case 22:
    return constant_22 (aTHX_ name, iv_return);
    break;
  case 23:
    return constant_23 (aTHX_ name, iv_return);
    break;
  case 24:
    return constant_24 (aTHX_ name, iv_return);
    break;
  case 25:
    /* Names all of length 25.  */
    /* kDNSServiceErr_NoSuchName kDNSServiceMaxServiceName */
    /* Offset 16 gives the best switch position.  */
    switch (name[16]) {
    case 'o':
      if (memEQ(name, "kDNSServiceErr_NoSuchName", 25)) {
      /*                               ^               */
        *iv_return = kDNSServiceErr_NoSuchName;
        return PERL_constant_ISIV;
      }
      break;
    case 'r':
      if (memEQ(name, "kDNSServiceMaxServiceName", 25)) {
      /*                               ^               */
        *iv_return = kDNSServiceMaxServiceName;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 26:
    /* Names all of length 26.  */
    /* kDNSServiceErr_Unsupported kDNSServiceFlagsMoreComing */
    /* Offset 11 gives the best switch position.  */
    switch (name[11]) {
    case 'E':
      if (memEQ(name, "kDNSServiceErr_Unsupported", 26)) {
      /*                          ^                     */
        *iv_return = kDNSServiceErr_Unsupported;
        return PERL_constant_ISIV;
      }
      break;
    case 'F':
      if (memEQ(name, "kDNSServiceFlagsMoreComing", 26)) {
      /*                          ^                     */
        *iv_return = kDNSServiceFlagsMoreComing;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 27:
    return constant_27 (aTHX_ name, iv_return);
    break;
  case 28:
    /* Names all of length 28.  */
    /* kDNSServiceFlagsNoAutoRename kDNSServiceInterfaceIndexAny */
    /* Offset 15 gives the best switch position.  */
    switch (name[15]) {
    case 'r':
      if (memEQ(name, "kDNSServiceInterfaceIndexAny", 28)) {
      /*                              ^                   */
        *iv_return = kDNSServiceInterfaceIndexAny;
        return PERL_constant_ISIV;
      }
      break;
    case 's':
      if (memEQ(name, "kDNSServiceFlagsNoAutoRename", 28)) {
      /*                              ^                   */
        *iv_return = kDNSServiceFlagsNoAutoRename;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 29:
    /* Names all of length 29.  */
    /* kDNSServiceErr_NotInitialized kDNSServiceFlagsBrowseDomains */
    /* Offset 11 gives the best switch position.  */
    switch (name[11]) {
    case 'E':
      if (memEQ(name, "kDNSServiceErr_NotInitialized", 29)) {
      /*                          ^                        */
        *iv_return = kDNSServiceErr_NotInitialized;
        return PERL_constant_ISIV;
      }
      break;
    case 'F':
      if (memEQ(name, "kDNSServiceFlagsBrowseDomains", 29)) {
      /*                          ^                        */
        *iv_return = kDNSServiceFlagsBrowseDomains;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 30:
    /* Names all of length 30.  */
    /* kDNSServiceFlagsForceMulticast kDNSServiceFlagsLongLivedQuery */
    /* Offset 22 gives the best switch position.  */
    switch (name[22]) {
    case 'u':
      if (memEQ(name, "kDNSServiceFlagsForceMulticast", 30)) {
      /*                                     ^              */
        *iv_return = kDNSServiceFlagsForceMulticast;
        return PERL_constant_ISIV;
      }
      break;
    case 'v':
      if (memEQ(name, "kDNSServiceFlagsLongLivedQuery", 30)) {
      /*                                     ^              */
        *iv_return = kDNSServiceFlagsLongLivedQuery;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 31:
    if (memEQ(name, "kDNSServiceFlagsShareConnection", 31)) {
      *iv_return = kDNSServiceFlagsShareConnection;
      return PERL_constant_ISIV;
    }
    break;
  case 32:
    return constant_32 (aTHX_ name, iv_return);
    break;
  case 34:
    if (memEQ(name, "kDNSServiceInterfaceIndexLocalOnly", 34)) {
      *iv_return = kDNSServiceInterfaceIndexLocalOnly;
      return PERL_constant_ISIV;
    }
    break;
  case 35:
    /* Names all of length 35.  */
    /* kDNSServiceFlagsRegistrationDomains kDNSServiceFlagsReturnIntermediates
       */
    /* Offset 20 gives the best switch position.  */
    switch (name[20]) {
    case 'r':
      if (memEQ(name, "kDNSServiceFlagsReturnIntermediates", 35)) {
      /*                                   ^                     */
        *iv_return = kDNSServiceFlagsReturnIntermediates;
        return PERL_constant_ISIV;
      }
      break;
    case 's':
      if (memEQ(name, "kDNSServiceFlagsRegistrationDomains", 35)) {
      /*                                   ^                     */
        *iv_return = kDNSServiceFlagsRegistrationDomains;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 37:
    if (memEQ(name, "kDNSServiceErr_NATPortMappingDisabled", 37)) {
      *iv_return = kDNSServiceErr_NATPortMappingDisabled;
      return PERL_constant_ISIV;
    }
    break;
  case 40:
    if (memEQ(name, "kDNSServiceErr_NATPortMappingUnsupported", 40)) {
      *iv_return = kDNSServiceErr_NATPortMappingUnsupported;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

