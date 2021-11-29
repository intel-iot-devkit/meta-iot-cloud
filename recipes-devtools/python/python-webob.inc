DESCRIPTION = "WSGI request and response object"
HOMEPAGE = "http://webob.org/"
AUTHOR = "Pylons Project"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://docs/license.txt;md5=8ed3584bcc78c16da363747ccabc5af5"

PR = "r0"

SRC_URI = "git://github.com/Pylons/webob.git;protocol=https;branch=1.7-branch"
SRCREV = "c4cee625e5b0b0f410e22ca60f701eff98f288d0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
