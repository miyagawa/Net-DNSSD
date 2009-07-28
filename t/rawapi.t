use strict;
use Net::DNSSD ':constants';
use Test::More;
use AnyEvent;

{
    my $sd   = Net::DNSSD::DNSServiceBrowse(0, 0, "_daap._tcp", undef, sub { ok $_[3], $_[3] });
    my $sock = Net::DNSSD::DNSServiceRefSockFD($sd);

    my $io = AnyEvent->io(fh => $sock, poll => 'r', cb => sub { Net::DNSSD::DNSServiceProcessResult($sd) });

    my $cv = AnyEvent->condvar;
    my $t  = AnyEvent->timer(after => 2, cb => $cv);

    diag "wait for 2 secs";
    $cv->recv;
}

{
    my $sd = Net::DNSSD::DNSServiceBrowse(0, 0, "_daap._xxx", undef, sub { });
    is $sd, undef;
}

{
    my $sd   = Net::DNSSD::DNSServiceRegister(0, 0, "My web server", "_http._tcp", undef, undef, 9090, 0, undef, sub { ok $_[2], $_[2] });
    my $sock = Net::DNSSD::DNSServiceRefSockFD($sd);

    my $io = AnyEvent->io(fh => $sock, poll => 'r', cb => sub { Net::DNSSD::DNSServiceProcessResult($sd) });
    my $cv = AnyEvent->condvar;
    my $t  = AnyEvent->timer(after => 2, cb => $cv);

    diag "wait for 2 secs";
    $cv->recv;
}

{
    my $sd   = Net::DNSSD::DNSServiceRegister(0, 0, "Test", "_test._tcp", undef, undef, 9090, 0, undef, sub { ok $_[2], $_[2] });
    my $sock = Net::DNSSD::DNSServiceRefSockFD($sd);

    my @svc;
    my $sdc   = Net::DNSSD::DNSServiceBrowse(0, 0, "_test._tcp", undef, sub { push @svc, \@_ });
    my $sockc = Net::DNSSD::DNSServiceRefSockFD($sdc);

    my $io  = AnyEvent->io(fh => $sock,  poll => 'r', cb => sub { Net::DNSSD::DNSServiceProcessResult($sd)  });
    my $io2 = AnyEvent->io(fh => $sockc, poll => 'r', cb => sub { Net::DNSSD::DNSServiceProcessResult($sdc) });

    my $cv = AnyEvent->condvar;
    my $t  = AnyEvent->timer(after => 2, cb => $cv);

    diag "wait for 2 secs";
    $cv->recv;

    for my $svc (@svc) {
        my $cv = AnyEvent->condvar;
        my $sd = Net::DNSSD::DNSServiceResolve(@$svc[0,1,3,4,5], $cv);
        my $io = AnyEvent->io(fh => Net::DNSSD::DNSServiceRefSockFD($sd), poll => 'r',
                              cb => sub { Net::DNSSD::DNSServiceProcessResult($sd) });
        my @r = $cv->recv;
        like $r[3], qr/^Test\./;
        is $r[5], 9090;
    }
}

done_testing;
