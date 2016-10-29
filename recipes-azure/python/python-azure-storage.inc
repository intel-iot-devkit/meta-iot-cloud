DESCRIPTION = "Microsoft Azure Storage Client Library for Python"
HOMEPAGE = "https://github.com/Azure/azure-storage-python"
AUTHOR = "Microsoft Corporation"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=34f8c1142fd6208a8be89399cb521df9"

PR = "r2"

PACKAGES = "${PN} ${PN}-nspkg"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-nspkg \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-cryptography \
	${PYTHON_PN}-dateutil \
	${PYTHON_PN}-requests \
"

SRC_NAME = "azure-storage-python"

SRC_URI = "git://github.com/Azure/${SRC_NAME}.git"
SRCREV = "717f616809c82b6cbf3e258f3d94303e6fabe411"

S = "${WORKDIR}/git"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/storage/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_storage-* \
"

FILES_${PN}-nspkg = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/*.py \
	${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc \
"
