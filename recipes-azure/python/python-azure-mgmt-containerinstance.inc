DESCRIPTION = "Microsoft Azure Container Instance Client Library for Python"

PV = "0.1.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "4dea39222004f72225938fa6356bfbdd2696aa1b"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/containerinstance/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_containerinstance-* \
"

SRC_DIR = "azure-mgmt-containerinstance"
