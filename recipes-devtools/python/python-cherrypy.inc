DESCRIPTION = "Object-Oriented HTTP framework"
HOMEPAGE = "http://www.cherrypy.org/"
AUTHOR = "CherryPy Team"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=7c3ce8ced2013f1e06ade270c344f4f8"

RDEPENDS_${PN} = " \
	${PYTHON_PN}-six \
	${PYTHON_PN}-cheroot \
	${PYTHON_PN}-portend \
"

RDEPENDS_${PN} = " \
	${PYTHON_PN}-simplejson \
	${PYTHON_PN}-routes \
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-memcached \
"

SRC_URI = "git://github.com/cherrypy/cherrypy.git"
SRCREV = "46c670e69b7c9620e11999f84b9bcdf57d806649"

PR = "r0"

S = "${WORKDIR}/git"

do_compile_prepend() {
	# Fix up setup script for older versions of setuptools
	sed -i '87 d' ${S}/setup.py
}

BBCLASSEXTEND = "native nativesdk"
