package Net::DNSSD;

use 5.008001;
use strict;
use warnings;
use Carp;

our $VERSION = '0.01';

require Exporter;
use AutoLoader;

our @ISA = qw(Exporter);
our %EXPORT_TAGS = ( 'constants' => [ qw(
	kDNSServiceClass_IN
	kDNSServiceErr_AlreadyRegistered
	kDNSServiceErr_BadFlags
	kDNSServiceErr_BadInterfaceIndex
	kDNSServiceErr_BadKey
	kDNSServiceErr_BadParam
	kDNSServiceErr_BadReference
	kDNSServiceErr_BadSig
	kDNSServiceErr_BadState
	kDNSServiceErr_BadTime
	kDNSServiceErr_DoubleNAT
	kDNSServiceErr_Firewall
	kDNSServiceErr_Incompatible
	kDNSServiceErr_Invalid
	kDNSServiceErr_NATPortMappingDisabled
	kDNSServiceErr_NATPortMappingUnsupported
	kDNSServiceErr_NATTraversal
	kDNSServiceErr_NameConflict
	kDNSServiceErr_NoAuth
	kDNSServiceErr_NoError
	kDNSServiceErr_NoMemory
	kDNSServiceErr_NoSuchKey
	kDNSServiceErr_NoSuchName
	kDNSServiceErr_NoSuchRecord
	kDNSServiceErr_NotInitialized
	kDNSServiceErr_Refused
	kDNSServiceErr_ServiceNotRunning
	kDNSServiceErr_Transient
	kDNSServiceErr_Unknown
	kDNSServiceErr_Unsupported
	kDNSServiceFlagsAdd
	kDNSServiceFlagsAllowRemoteQuery
	kDNSServiceFlagsBrowseDomains
	kDNSServiceFlagsDefault
	kDNSServiceFlagsForce
	kDNSServiceFlagsForceMulticast
	kDNSServiceFlagsLongLivedQuery
	kDNSServiceFlagsMoreComing
	kDNSServiceFlagsNoAutoRename
	kDNSServiceFlagsRegistrationDomains
	kDNSServiceFlagsReturnCNAME
	kDNSServiceFlagsReturnIntermediates
	kDNSServiceFlagsShareConnection
	kDNSServiceFlagsShared
	kDNSServiceFlagsUnique
	kDNSServiceInterfaceIndexAny
	kDNSServiceInterfaceIndexLocalOnly
	kDNSServiceInterfaceIndexUnicast
	kDNSServiceMaxDomainName
	kDNSServiceMaxServiceName
	kDNSServiceProtocol_IPv4
	kDNSServiceProtocol_IPv6
	kDNSServiceProtocol_TCP
	kDNSServiceProtocol_UDP
	kDNSServiceType_A
	kDNSServiceType_A6
	kDNSServiceType_AAAA
	kDNSServiceType_AFSDB
	kDNSServiceType_ANY
	kDNSServiceType_APL
	kDNSServiceType_ATMA
	kDNSServiceType_AXFR
	kDNSServiceType_CERT
	kDNSServiceType_CNAME
	kDNSServiceType_DHCID
	kDNSServiceType_DNAME
	kDNSServiceType_DNSKEY
	kDNSServiceType_DS
	kDNSServiceType_EID
	kDNSServiceType_GPOS
	kDNSServiceType_HINFO
	kDNSServiceType_IPSECKEY
	kDNSServiceType_ISDN
	kDNSServiceType_IXFR
	kDNSServiceType_KEY
	kDNSServiceType_KX
	kDNSServiceType_LOC
	kDNSServiceType_MAILA
	kDNSServiceType_MAILB
	kDNSServiceType_MB
	kDNSServiceType_MD
	kDNSServiceType_MF
	kDNSServiceType_MG
	kDNSServiceType_MINFO
	kDNSServiceType_MR
	kDNSServiceType_MX
	kDNSServiceType_NAPTR
	kDNSServiceType_NIMLOC
	kDNSServiceType_NS
	kDNSServiceType_NSAP
	kDNSServiceType_NSAP_PTR
	kDNSServiceType_NSEC
	kDNSServiceType_NULL
	kDNSServiceType_NXT
	kDNSServiceType_OPT
	kDNSServiceType_PTR
	kDNSServiceType_PX
	kDNSServiceType_RP
	kDNSServiceType_RRSIG
	kDNSServiceType_RT
	kDNSServiceType_SIG
	kDNSServiceType_SINK
	kDNSServiceType_SOA
	kDNSServiceType_SRV
	kDNSServiceType_SSHFP
	kDNSServiceType_TKEY
	kDNSServiceType_TSIG
	kDNSServiceType_TXT
	kDNSServiceType_WKS
	kDNSServiceType_X25
	DNSServiceAddRecord
	DNSServiceBrowse
	DNSServiceConstructFullName
	DNSServiceCreateConnection
	DNSServiceEnumerateDomains
	DNSServiceGetAddrInfo
	DNSServiceGetProperty
	DNSServiceNATPortMappingCreate
	DNSServiceProcessResult
	DNSServiceQueryRecord
	DNSServiceReconfirmRecord
	DNSServiceRefDeallocate
	DNSServiceRefSockFD
	DNSServiceRegister
	DNSServiceRegisterRecord
	DNSServiceRemoveRecord
	DNSServiceResolve
	DNSServiceUpdateRecord
	TXTRecordContainsKey
	TXTRecordCreate
	TXTRecordDeallocate
	TXTRecordGetBytesPtr
	TXTRecordGetCount
	TXTRecordGetItemAtIndex
	TXTRecordGetLength
	TXTRecordGetValuePtr
	TXTRecordRemoveValue
	TXTRecordSetValue
) ] );

our @EXPORT_OK = ( @{ $EXPORT_TAGS{constants} } );

sub AUTOLOAD {
    my $constname;
    our $AUTOLOAD;
    ($constname = $AUTOLOAD) =~ s/.*:://;
    croak "&Net::DNSSD::constant not defined" if $constname eq 'constant';
    my ($error, $val) = constant($constname);
    if ($error) { croak $error; }
    {
	no strict 'refs';
        *$AUTOLOAD = sub { $val };
    }
    goto &$AUTOLOAD;
}

require XSLoader;
XSLoader::load('Net::DNSSD', $VERSION);

1;
__END__

=head1 NAME

Net::DNSSD - DNS Service Discovery (aka Bonjour)

=head1 SYNOPSIS

  use Net::DNSSD;

=head1 DESCRIPTION

Net::DNSSD is an XS binding for DNS Service Discovery via C<dns_sd.h>
API, available on Mac OS X with the name Bonjour and other platforms
using Avahi's compatible layer.

=head1 METHODS

=head1 Exportable constants

  kDNSServiceClass_IN
  kDNSServiceErr_AlreadyRegistered
  kDNSServiceErr_BadFlags
  kDNSServiceErr_BadInterfaceIndex
  kDNSServiceErr_BadKey
  kDNSServiceErr_BadParam
  kDNSServiceErr_BadReference
  kDNSServiceErr_BadSig
  kDNSServiceErr_BadState
  kDNSServiceErr_BadTime
  kDNSServiceErr_DoubleNAT
  kDNSServiceErr_Firewall
  kDNSServiceErr_Incompatible
  kDNSServiceErr_Invalid
  kDNSServiceErr_NATPortMappingDisabled
  kDNSServiceErr_NATPortMappingUnsupported
  kDNSServiceErr_NATTraversal
  kDNSServiceErr_NameConflict
  kDNSServiceErr_NoAuth
  kDNSServiceErr_NoError
  kDNSServiceErr_NoMemory
  kDNSServiceErr_NoSuchKey
  kDNSServiceErr_NoSuchName
  kDNSServiceErr_NoSuchRecord
  kDNSServiceErr_NotInitialized
  kDNSServiceErr_Refused
  kDNSServiceErr_ServiceNotRunning
  kDNSServiceErr_Transient
  kDNSServiceErr_Unknown
  kDNSServiceErr_Unsupported
  kDNSServiceFlagsAdd
  kDNSServiceFlagsAllowRemoteQuery
  kDNSServiceFlagsBrowseDomains
  kDNSServiceFlagsDefault
  kDNSServiceFlagsForce
  kDNSServiceFlagsForceMulticast
  kDNSServiceFlagsLongLivedQuery
  kDNSServiceFlagsMoreComing
  kDNSServiceFlagsNoAutoRename
  kDNSServiceFlagsRegistrationDomains
  kDNSServiceFlagsReturnCNAME
  kDNSServiceFlagsReturnIntermediates
  kDNSServiceFlagsShareConnection
  kDNSServiceFlagsShared
  kDNSServiceFlagsUnique
  kDNSServiceInterfaceIndexAny
  kDNSServiceInterfaceIndexLocalOnly
  kDNSServiceInterfaceIndexUnicast
  kDNSServiceMaxDomainName
  kDNSServiceMaxServiceName
  kDNSServiceProtocol_IPv4
  kDNSServiceProtocol_IPv6
  kDNSServiceProtocol_TCP
  kDNSServiceProtocol_UDP
  kDNSServiceType_A
  kDNSServiceType_A6
  kDNSServiceType_AAAA
  kDNSServiceType_AFSDB
  kDNSServiceType_ANY
  kDNSServiceType_APL
  kDNSServiceType_ATMA
  kDNSServiceType_AXFR
  kDNSServiceType_CERT
  kDNSServiceType_CNAME
  kDNSServiceType_DHCID
  kDNSServiceType_DNAME
  kDNSServiceType_DNSKEY
  kDNSServiceType_DS
  kDNSServiceType_EID
  kDNSServiceType_GPOS
  kDNSServiceType_HINFO
  kDNSServiceType_IPSECKEY
  kDNSServiceType_ISDN
  kDNSServiceType_IXFR
  kDNSServiceType_KEY
  kDNSServiceType_KX
  kDNSServiceType_LOC
  kDNSServiceType_MAILA
  kDNSServiceType_MAILB
  kDNSServiceType_MB
  kDNSServiceType_MD
  kDNSServiceType_MF
  kDNSServiceType_MG
  kDNSServiceType_MINFO
  kDNSServiceType_MR
  kDNSServiceType_MX
  kDNSServiceType_NAPTR
  kDNSServiceType_NIMLOC
  kDNSServiceType_NS
  kDNSServiceType_NSAP
  kDNSServiceType_NSAP_PTR
  kDNSServiceType_NSEC
  kDNSServiceType_NULL
  kDNSServiceType_NXT
  kDNSServiceType_OPT
  kDNSServiceType_PTR
  kDNSServiceType_PX
  kDNSServiceType_RP
  kDNSServiceType_RRSIG
  kDNSServiceType_RT
  kDNSServiceType_SIG
  kDNSServiceType_SINK
  kDNSServiceType_SOA
  kDNSServiceType_SRV
  kDNSServiceType_SSHFP
  kDNSServiceType_TKEY
  kDNSServiceType_TSIG
  kDNSServiceType_TXT
  kDNSServiceType_WKS
  kDNSServiceType_X25

=head1 AUTHOR

Tatsuhiko Miyagawa E<lt>miyagawa@bulknews.netE<gt>

=head1 LICENSE

This library is free software; you can redistribute it and/or modify
it under the same terms as Perl itself.

=head1 SEE ALSO

L<Net::Bonjour>, L<Net::Rendezvous::Publisher>

=cut
