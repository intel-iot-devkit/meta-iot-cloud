DESCRIPTION = "Microsoft Azure DNS Client Library for Python"

PV = "1.0.0"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "618f1768eac9a8b31f7ffdeea01fb21f7f0fe698"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/dns/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_dns-* \
"

SRC_DIR = "azure-mgmt-dns"
