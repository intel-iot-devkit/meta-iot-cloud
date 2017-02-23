DESCRIPTION = "Microsoft Azure Search Management Client Library for Python"

PV = "1.1.1"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "e4438725a879cb50e246a7940a141ec334ef902a"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/search/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_search-* \
"

SRC_DIR = "azure-mgmt-search"
