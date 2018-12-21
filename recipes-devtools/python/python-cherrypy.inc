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

SRC_URI = "git://github.com/cherrypy/cherrypy.git"
SRCREV = "5af46f1848d9a5c60c6b2978f31309b2b81ba697"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
