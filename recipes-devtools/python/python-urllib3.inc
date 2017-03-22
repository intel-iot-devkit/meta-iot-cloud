SUMMARY = "Python HTTP library with thread-safe connection pooling, file post support, sanity friendly, and more"
HOMEPAGE = "https://github.com/shazow/urllib3"
AUTHOR = "Andrey Petrov"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=ea114851ad9a8c311aac8728a681a067"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-email \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-threading \
    ${PYTHON_PN}-pyopenssl \
    ${PYTHON_PN}-ndg-httpsclient \
    ${PYTHON_PN}-pyasn1 \
    ${PYTHON_PN}-certifi \
    ${PYTHON_PN}-pysocks \
"

SRC_URI = "git://github.com/shazow/urllib3.git;branch=release"
SRCREV = "52463752d3a79790b43e23182bcc750d6bb53554"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
