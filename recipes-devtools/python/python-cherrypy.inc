DESCRIPTION = "Object-Oriented HTTP framework"
HOMEPAGE = "http://www.cherrypy.org/"
AUTHOR = "CherryPy Team"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=7c3ce8ced2013f1e06ade270c344f4f8"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-six \
	${PYTHON_PN}-cheroot \
	${PYTHON_PN}-portend \
	${PYTHON_PN}-simplejson \
	${PYTHON_PN}-routes \
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-memcached \
"

RPROVIDES_${PN} += "cherrypy"
RREPLACES_${PN} += "cherrypy"
RCONFLICTS_${PN} += "cherrypy"

SRC_URI = "git://github.com/cherrypy/cherrypy.git;tag=v${PV}"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
