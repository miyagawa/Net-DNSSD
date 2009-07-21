use strict;
use Module::Build;

Module::Build->new(
    module_name => "Net::DNSSD",
    license     => 'perl',
    build_requires => {
        'Test::More' => 0,
    },
    create_makefile_pl => 'passthrough',
)->create_build_script;
