SUMMARY = "Objects and routines pertaining to date and time"
AUTHOR = "Jason R. Coombs"
HOMEPAGE = "https://github.com/jaraco/tempora"
LICENSE = "CLOSED"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-six \
	${PYTHON_PN}-pytz \
"

PR = "r0"

SRC_URI = "git://github.com/jaraco/tempora.git"
SRCREV = "e6315354770482bb93134399a651fda3d2593a03"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
