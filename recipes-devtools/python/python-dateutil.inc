SUMMARY = "Extensions to the standard Python datetime module"
AUTHOR = "Paul Ganssle, Yaron de Leeuw"
HOMEPAGE = "https://dateutil.readthedocs.org"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=51430b33c900f45f999c459ee29ca493"

PR = "r2"

SRC_URI = "git://github.com/dateutil/dateutil.git;branch=2.5.x"
SRCREV = "b73ee4f9fb1ce2246c4136901eaf3a406f3ebfc0"

S = "${WORKDIR}/git"

DEPENDS += "\
	${PYTHON_PN}-six-native \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-six \
"

BBCLASSEXTEND = "native nativesdk"
