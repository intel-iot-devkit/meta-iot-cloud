DESCRIPTION = "Parser of the C language, written in pure Python"
HOMEPAGE = "https://github.com/eliben/pycparser"
AUTHOR = "Eli Bendersky"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d0cfca7bbc0610f849707d9e4fd82eac"

SRC_NAME = "pycparser"

SRC_URI = "git://github.com/eliben/${SRC_NAME}.git"
SRCREV = "f2275a68ed2204636b53685887c995d8d307b6c0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
