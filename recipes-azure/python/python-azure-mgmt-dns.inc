DESCRIPTION = "Microsoft Azure DNS Client Library for Python"

PV = "1.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "1f9af67cd02ada67beb0d7700a0376b420b42914"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/dns/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_dns-* \
"

SRC_DIR = "azure-mgmt-dns"
