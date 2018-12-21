DESCRIPTION = "Microsoft Azure Namespace Package"

PV = "1.0.0"
PR = "r0"

SRCREV = "5f9a6d994ee2d76daa4fb105b6b54d82bc64a201"

FILES_${PN}-nspkg = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/*.py \
    ${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc \
    ${PYTHON_SITEPACKAGES_DIR}/azure_nspkg-* \
"

SRC_DIR = "azure-nspkg"
