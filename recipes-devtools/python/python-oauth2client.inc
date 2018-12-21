DESCRIPTION = "OAuth 2.0 client library"
AUTHOR = "Google Inc."
HOMEPAGE = "http://github.com/google/oauth2client/"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=038e1390e94fe637991fa5569daa62bc"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-httplib2 \
    ${PYTHON_PN}-pyasn1 \
    ${PYTHON_PN}-pyasn1-modules \
    ${PYTHON_PN}-rsa \
    ${PYTHON_PN}-six \
"

SRC_NAME = "oauth2client"

SRC_URI = "git://github.com/google/${SRC_NAME}.git"
SRCREV = "a731be362014d61630044c46495c5b750437ab88"

PR = "r0"

CLEANBROKEN = "1"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
