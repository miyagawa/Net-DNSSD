use strict;
use Net::DNSSD;
use Test::More;
use AnyEvent;

my $sd   = Net::DNSSD::DNSServiceBrowse("_daap._tcp", sub { ok $_[0], $_[0] });
my $sock = Net::DNSSD::DNSServiceRefSockFD($sd);

my $io = AnyEvent->io(fh => $sock, poll => 'r', cb => sub { Net::DNSSD::DNSServiceProcessResult($sd) });

my $cv = AnyEvent->condvar;
my $t  = AnyEvent->timer(after => 2, cb => $cv);

diag "wait for 2 secs";
$cv->recv;

done_testing;
