DESCRIPTION = "A Python command line interface framework"
HOMEPAGE = "https://github.com/microsoft/knack"
AUTHOR = "Microsoft Corporation"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${WORKDIR}/${BPN}-${PV}-license;md5=261d8686a7cf1ce9570cdc99746659f8"

PR = "r0"

SRC_URI += "https://github.com/Microsoft/knack/raw/${PV}/LICENSE;downloadfilename=${BPN}-${PV}-license;name=license"
SRC_URI[md5sum] = "a5096a7df315ae563f7a0eb9fe81498f"
SRC_URI[sha256sum] = "ba45fd69c2faf91fd3d6e95cec1c0ef7e0f4362e33c59bf5a260216ffcb859a0"
SRC_URI[license.md5sum] = "261d8686a7cf1ce9570cdc99746659f8"
SRC_URI[license.sha256sum] = "a096a435e19bb6b631da46992c011a39be563e97ce7366879ad516c772904632"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-distutils \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-unixadmin \
"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-argcomplete \
    ${PYTHON_PN}-colorama \
    ${PYTHON_PN}-jmespath \
    ${PYTHON_PN}-pygments \
    ${PYTHON_PN}-pyyaml \
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-tabulate \
"
