DESCRIPTION = "More routines for operating on iterables, beyond itertools"
HOMEPAGE = "https://github.com/erikrose/more-itertools"
AUTHOR = "Erik Rose"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7c3ce8ced2013f1e06ade270c344f4f8"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-six \
"

SRC_URI = "git://github.com/erikrose/more-itertools.git;tag=${PV}"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
