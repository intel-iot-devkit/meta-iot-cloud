DESCRIPTION = "Microsoft Azure ServerManager Management Client Library for Python"

PV = "1.1.0"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "f915ead25757e1623e20a150e4dec36987fde056"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/servermanager/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_servermanager-* \
"

SRC_DIR = "azure-mgmt-servermanager"
