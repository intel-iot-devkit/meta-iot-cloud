DESCRIPTION = "Routing Recognition and Generation Tools"
HOMEPAGE = "http://python-requests.org"
AUTHOR = "Ben Bangert"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=90976c1a0e3029278f882cfe2e84a6ae"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-six \
	${PYTHON_PN}-repoze-lru \
"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-webob \
"

RPROVIDES_${PN} = "routes"

PR = "r1"

SRC_URI = "git://github.com/bbangert/routes.git"
SRCREV = "0900d346e5569018644dcee850d679de3c915efb"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
