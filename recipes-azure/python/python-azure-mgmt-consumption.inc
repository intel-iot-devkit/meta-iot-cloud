DESCRIPTION = "Microsoft Azure Consumption Management Client Library for Python"

PV = "0.1.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "5870a4f451eb22835471c415918c47e5e91acf70"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/consumption/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_consumption-* \
"

SRC_DIR = "azure-mgmt-consumption"
