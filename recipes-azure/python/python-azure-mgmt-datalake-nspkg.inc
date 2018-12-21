DESCRIPTION = "Microsoft Azure Data Lake Management Namespace Package"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} = "\
    ${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "bff2a6e39c1f8d0e12199e1970f5feeb783733eb"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/*.py \
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/*.pyc \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_datalake_nspkg-* \
"

SRC_DIR = "azure-mgmt-datalake-nspkg"
