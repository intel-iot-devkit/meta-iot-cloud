DESCRIPTION = "Microsoft Azure Authorization Resource Management Client Library for Python"

PV = "0.30.0rc6"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
"

SRCREV = "5f9a6d994ee2d76daa4fb105b6b54d82bc64a201"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/authorization/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_authorization-* \
"

SRC_DIR = "azure-mgmt-authorization"
