DESCRIPTION = "Microsoft Azure Batch Client Library for Python"

PV = "4.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-azure-common \
"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/batch/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_batch-* \
"

SRC_DIR = "azure-batch"

SRCREV = "c801fad45ce3b089aa9037bc9270f754ea2815fa"
