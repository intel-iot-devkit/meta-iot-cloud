SUMMARY = "An object oriented API for Open IoT Service Platform"
AUTHOR = "Ali Rasim Kocal"
HOMEPAGE = "https://github.com/Open-IoT-Service-Platform/oisp-sdk-python"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://setup.py;beginline=1;endline=26;md5=de80b0f7718e1ddbed2ace2fe1f1c8ff"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-cbor \
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-termcolor \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-netclient \
"

PR = "r0"

SRC_URI[md5sum] = "43e6bfc02bda09c67eb338de8651a7fc"
SRC_URI[sha256sum] = "4a74d2b2974c1c78932a60b4cf1583a53016222bac46f4361007244fbb463cda"
