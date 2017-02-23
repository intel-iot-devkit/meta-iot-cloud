DESCRIPTION = "Microsoft Azure Resource Management Namespace Package"

PV = "1.0.0"
PR = "r0"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-azure-nspkg \
"

SRCREV = "5f9a6d994ee2d76daa4fb105b6b54d82bc64a201"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.py \
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.pyc \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_nspkg-* \
"

SRC_DIR = "azure-mgmt-nspkg"
