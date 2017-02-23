DESCRIPTION = "Microsoft Azure Data Lake Management Namespace Package"

PV = "1.0.0"
PR = "r1"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "d79f0884668a1c561b45c1e2a23e7f8845509271"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/*.py \
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/*.pyc \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_datalake_nspkg-* \
"

SRC_DIR = "azure-mgmt-datalake-nspkg"
