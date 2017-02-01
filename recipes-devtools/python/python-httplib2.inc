DESCRIPTION = "A comprehensive HTTP client library."
AUTHOR = "Joe Gregorio"
HOMEPAGE = "https://github.com/jcgregorio/httplib2"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=56e5e931172b6164b62dc7c4aba6c8cf"

SRC_NAME = "httplib2"

SRC_URI = "git://github.com/jcgregorio/${SRC_NAME}.git"
SRCREV = "cf631a73e2f3f43897b65206127ced82382d35f5"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
