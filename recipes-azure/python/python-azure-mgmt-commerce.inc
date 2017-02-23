DESCRIPTION = "Microsoft Azure Commerce Client Library for Python"

PV = "0.30.0rc6"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "3632007c401ab7ce1ed8faf6742298f050856a97"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/commerce/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_commerce-* \
"

SRC_DIR = "azure-mgmt-commerce"
