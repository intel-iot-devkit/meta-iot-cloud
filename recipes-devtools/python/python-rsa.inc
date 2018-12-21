SUMMARY = "Pure-Python RSA implementation"
AUTHOR = "Sybren A. Stuvel"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=c403f6882d4f97a9cd927df987d55634"

PR = "r1"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-pyasn1 \
"

SRC_NAME = "rsa"

SRC_URI = "https://pypi.python.org/packages/source/r/${SRC_NAME}/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "b315f47882c24030ee6b5aad628cccdb"
SRC_URI[sha256sum] = "25df4e10c263fb88b5ace923dd84bf9aa7f5019687b5e55382ffcdb8bede9db5"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
