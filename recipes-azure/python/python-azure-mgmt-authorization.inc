DESCRIPTION = "Microsoft Azure Authorization Resource Management Client Library for Python"

PV = "0.30.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "83ae4ba1bfa972da5258e92672c6a580b021f0ad"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/authorization/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_authorization-* \
"

SRC_DIR = "azure-mgmt-authorization"
