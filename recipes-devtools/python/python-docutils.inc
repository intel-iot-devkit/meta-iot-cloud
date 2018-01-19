SUMMARY = "Python Documentation Utilities"
AUTHOR = "David Goodger"
HOMEPAGE = "http://docutils.sourceforge.net"
LICENSE = "PSFv2|BSD-2-Clause|GPLv3"
LIC_FILES_CHKSUM = "file://COPYING.txt;md5=f94ec770d4d332701846920ae55151f2"

PR = "r0"

SRC_URI = "git://repo.or.cz/docutils.git"
SRCREV = "58beff416ecdf41d2b503ad51c11600dde8723a0"

S = "${WORKDIR}/git/docutils"

BBCLASSEXTEND = "native"
