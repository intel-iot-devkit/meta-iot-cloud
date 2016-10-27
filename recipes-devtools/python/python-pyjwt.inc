DESCRIPTION = "JSON Web Token implementation in Python"
AUTHOR = "José Padilla"
HOMEPAGE = "https://github.com/jpadilla/pyjwt"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=68626705a7b513ca8d5f44a3e200ed0c"

SRC_NAME = "pyjwt"

SRC_URI = "git://github.com/jpadilla/${SRC_NAME}.git"
SRCREV = "b35d522135044ba10ac41e7db5b95348cb4c4707"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
