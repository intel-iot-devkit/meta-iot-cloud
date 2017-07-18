DESCRIPTION = "Microsoft Azure Cognitive Services Client Library for Python"

PV = "1.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "62773f2bf252233e2aff8eb9e83321d6f04ae3a3"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/cognitiveservices/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_cognitiveservices-* \
"

SRC_DIR = "azure-mgmt-cognitiveservices"
