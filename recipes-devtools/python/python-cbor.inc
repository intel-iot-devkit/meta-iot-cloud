DESCRIPTION = "RFC 7049 - Concise Binary Object Representation"
AUTHOR = "Brian Olson"
HOMEPAGE = "https://bitbucket.org/bodhisnarkva/cbor"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://setup.py;beginline=2;endline=14;md5=1298a5e04a7217757186fe28ea9d603c"

PR = "r0"

RDEPENDS_${PN} = "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-math \
"

SRC_URI[md5sum] = "22b03b59784fd78cb6c27aa498af0db6"
SRC_URI[sha256sum] = "13225a262ddf5615cbd9fd55a76a0d53069d18b07d2e9f19c39e6acb8609bbb6"
