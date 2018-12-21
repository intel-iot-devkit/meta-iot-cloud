DESCRIPTION = "Microsoft Azure CLI Namespace Package"

PV = "3.0.1"
PR = "r0"

RDEPENDS_${PN} = "\
    ${PYTHON_PN}-azure-nspkg \
"

SRCREV = "216af18c1e8cca686b554043d9683602e55fc8bd"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/cli/*.py \
    ${PYTHON_SITEPACKAGES_DIR}/azure/cli/*.pyc \
    ${PYTHON_SITEPACKAGES_DIR}/azure_cli_nspkg-* \
"

SRC_DIR = "src/azure-cli-nspkg"
