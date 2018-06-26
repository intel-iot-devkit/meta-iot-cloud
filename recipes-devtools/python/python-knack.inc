DESCRIPTION = "A Python command line interface framework"
HOMEPAGE = "https://github.com/microsoft/knack"
AUTHOR = "Microsoft Corporation"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${WORKDIR}/LICENSE;md5=bbfbc44677c93751d972e8b36751a695"

PR = "r0"

SRC_URI += "https://github.com/Microsoft/knack/raw/${PV}/LICENSE;name=license"
SRC_URI[md5sum] = "a5096a7df315ae563f7a0eb9fe81498f"
SRC_URI[sha256sum] = "ba45fd69c2faf91fd3d6e95cec1c0ef7e0f4362e33c59bf5a260216ffcb859a0"
SRC_URI[license.md5sum] = "bbfbc44677c93751d972e8b36751a695"
SRC_URI[license.sha256sum] = "b9e1c9b3b348a58186dd4fc69c994cf26c0ded0d91ebe4bd201e6f7d05ead8ec"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-distutils \
	${PYTHON_PN}-json \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-unixadmin \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argcomplete \
	${PYTHON_PN}-colorama \
	${PYTHON_PN}-jmespath \
	${PYTHON_PN}-pygments \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-six \
	${PYTHON_PN}-tabulate \
"