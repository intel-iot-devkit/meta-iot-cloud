SUMMARY = "Objects and routines pertaining to date and time"
AUTHOR = "Jason R. Coombs"
HOMEPAGE = "https://github.com/jaraco/tempora"
LICENSE = "CLOSED"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-pytz \
"

PR = "r0"

SRC_URI = "git://github.com/jaraco/tempora.git;tag=${PV}"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
