DESCRIPTION = "Highly-optimized, pure-python HTTP server"
HOMEPAGE = "https://github.com/cherrypy/cheroot"
AUTHOR = "CherryPy Team"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=82081d9171472874bfecb75fc7973d88"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-six \
    ${PYTHON_PN}-more-itertools \
"

SRC_URI = "git://github.com/cherrypy/cheroot.git;tag=v${PV}"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
