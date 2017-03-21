DESCRIPTION = "Highly-optimized, pure-python HTTP server"
HOMEPAGE = "https://github.com/cherrypy/cheroot"
AUTHOR = "CherryPy Team"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=7c3ce8ced2013f1e06ade270c344f4f8"

RDEPENDS_${PN} = " \
	${PYTHON_PN}-six \
"

SRC_URI = "git://github.com/cherrypy/cheroot.git"
SRCREV = "7a4fcd0ea8b653ae46a90ecd2205078cab5d3d32"

S = "${WORKDIR}/git"

do_compile_prepend() {
	# Fix up setup script for older versions of setuptools
	sed -i '33 d' ${S}/setup.py
}

BBCLASSEXTEND = "native nativesdk"
