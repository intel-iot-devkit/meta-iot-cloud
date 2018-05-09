SUMMARY = "Extensions to the standard Python datetime module"
AUTHOR = "Paul Ganssle, Yaron de Leeuw"
HOMEPAGE = "https://dateutil.readthedocs.org"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=51430b33c900f45f999c459ee29ca493"

PR = "r0"

SRC_URI = "git://github.com/dateutil/dateutil.git"
SRCREV = "c8f112b1226f377907306115e29eccd20d9174f8"

S = "${WORKDIR}/git"

DEPENDS += "\
	${PYTHON_PN}-six \
"

BBCLASSEXTEND = "native nativesdk"
