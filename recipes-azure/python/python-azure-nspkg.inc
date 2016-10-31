DESCRIPTION = "Microsoft Azure Namespace Package"

PR = "r0"

FILES_${PN}-nspkg = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/*.py \
	${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc \
	${PYTHON_SITEPACKAGES_DIR}/azure_nspkg-* \
"

SRC_DIR = "azure-nspkg"
SRCREV = "5f9a6d994ee2d76daa4fb105b6b54d82bc64a201"
