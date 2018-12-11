#
# Helper class for azure-* recipes
#

HOMEPAGE = "https://github.com/Azure/azure-sdk-for-python"
AUTHOR = "Microsoft Azure"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${WORKDIR}/${PN}-${PV}-LICENSE;md5=7f7cc56311d298677f304d0ffce374d8"

SRC_URI += "https://github.com/Azure/azure-sdk-for-python/raw/${PYPI_PACKAGE}_${PV}/LICENSE.txt;downloadfilename=${PN}-${PV}-LICENSE;name=license"
SRC_URI[license.md5sum] = "7f7cc56311d298677f304d0ffce374d8"
SRC_URI[license.sha256sum] = "7b7c80bf1253f5dabfe692633bd7908b6a44d1caba1ab2a776911b224e93f0fd"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-nspkg \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
}

distutils3_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
	rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__pycache__
}
