DESCRIPTION = "Microsoft Azure PowerBI Embedded Client Library for Python"

PV = "0.30.0rc6"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "cf9b2f30901f7adb6c661ec32e3a5875dbf79add"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/powerbiembedded/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_powerbiembedded-* \
"

SRC_DIR = "azure-mgmt-powerbiembedded"
