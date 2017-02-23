SUMMARY = "SCP module for Paramiko"
HOMEPAGE = "https://github.com/jbardin/scp.py"
AUTHOR = "James Bardin"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=fc264c65fb17b7db5237cf7ce1780769"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-paramiko \
"

PR = "r0"

SRC_URI = "git://github.com/jbardin/scp.py.git"
SRCREV = "9fab6a1e7b228249c606aad3c0993cb273de169a"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
