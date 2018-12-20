DESCRIPTION = "Pure python memcached client"
HOMEPAGE = "https://github.com/linsomniac/python-memcached"
AUTHOR = "Sean Reifschneider"
SECTION = "devel/python"
LICENSE = "Python-2.0"
LIC_FILES_CHKSUM = "file://${WORKDIR}/${PN}-${PV}-license;md5=7dd786e8594f1e787da94a946557b40e"

PYPI_PACKAGE = "python-memcached"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-doctest \
    ${PYTHON_PN}-io \
"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-six \
"

PR = "r0"

SRC_URI[md5sum] = "fe5a7c66da01b0c4f5223a4db8cb8659"
SRC_URI[sha256sum] = "a2e28637be13ee0bf1a8b6843e7490f9456fd3f2a4cb60471733c7b5d5557e4f"

SRC_URI += "https://github.com/linsomniac/${PYPI_PACKAGE}/raw/${PV}/PSF.LICENSE;name=license;downloadfilename=${PN}-${PV}-license"
SRC_URI[license.md5sum] = "7dd786e8594f1e787da94a946557b40e"
SRC_URI[license.sha256sum] = "b3e6e40afa4c7b8a1bf71fe56051326c1a287f16c543a0b94d0acbe5899d8ab1"
