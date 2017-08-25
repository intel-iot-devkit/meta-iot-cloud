SUMMARY = "Python HTTP library with thread-safe connection pooling, file post support, sanity friendly, and more"
HOMEPAGE = "https://github.com/shazow/urllib3"
AUTHOR = "Andrey Petrov"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=ea114851ad9a8c311aac8728a681a067"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-email \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-cryptography \
	${PYTHON_PN}-idna \
	${PYTHON_PN}-certifi \
	${PYTHON_PN}-pysocks \
"

SRC_URI = "git://github.com/shazow/urllib3.git;branch=release"
SRCREV = "bce03aa7f06669254e63baef54fb6278e7fa6728"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
