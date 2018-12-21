DESCRIPTION = "Highly-optimized, pure-python HTTP server"
HOMEPAGE = "https://github.com/cherrypy/cheroot"
AUTHOR = "CherryPy Team"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=7c3ce8ced2013f1e06ade270c344f4f8"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-six \
"

SRC_URI = "git://github.com/cherrypy/cheroot.git"
SRCREV = "f7751bff2d935427a9ec653bb682379b1f3d8dce"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
