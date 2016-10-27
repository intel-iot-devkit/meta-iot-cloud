DESCRIPTION = "Python HTTP for Humans."
HOMEPAGE = "http://python-requests.org"
AUTHOR = "Kenneth Reitz"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d9bb3515869c0f426cb8441c899ae7f5"

PR = "r0"

SRC_NAME = "requests"

SRC_URI = "git://github.com/kennethreitz/${SRC_NAME}.git"
SRCREV = "532756803d3b2b7155c31a57f1d5e3cf31224b5d"

S = "${WORKDIR}/git"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-email \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-netserver \
    ${PYTHON_PN}-ndg-httpsclient \
    ${PYTHON_PN}-pyasn1 \
    ${PYTHON_PN}-pyopenssl \
    ${PYTHON_PN}-pysocks \
"

BBCLASSEXTEND = "native nativesdk"
