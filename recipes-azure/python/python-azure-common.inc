DESCRIPTION = "Microsoft Azure Client Library for Python (Common)"

PV = "1.1.4"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-nspkg \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-msrest \
"

SRCREV = "71ebc5c5968f486dcc171c76eb6fe2f852c7afc0"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/common/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_common-* \
"

SRC_DIR = "azure-common"
