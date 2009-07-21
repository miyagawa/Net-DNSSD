package Net::DNSSD;

use strict;
use 5.008_001;
our $VERSION = '0.01';

use XSLoader;
XSLoader::load __PACKAGE__;

1;
__END__

=encoding utf-8

=for stopwords

=head1 NAME

Net::DNSSD -

=head1 SYNOPSIS

  use Net::DNSSD;

=head1 DESCRIPTION

Net::DNSSD is

=head1 AUTHOR

Tatsuhiko Miyagawa E<lt>miyagawa@bulknews.netE<gt>

=head1 LICENSE

This library is free software; you can redistribute it and/or modify
it under the same terms as Perl itself.

=head1 SEE ALSO

L<http://developer.apple.com/documentation/networking/Reference/DNSServiceDiscovery_CRef/dns_sd/index.html>

=cut
