SUMMARY = "An object oriented API for Open IoT Service Platform"
AUTHOR = "Ali Rasim Kocal"
HOMEPAGE = "https://github.com/Open-IoT-Service-Platform/oisp-sdk-python"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=f4d5fbca362eddeaf9833496925325f7"

SRC_URI = "git://github.com/Open-IoT-Service-Platform/oisp-sdk-python.git;protocol=https"
SRCREV = "c3c4aa4f86fd16d9705add953b19b350be0dbe9e"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-dateutil \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-netclient \
"

PR = "r0"

S = "${WORKDIR}/git"
