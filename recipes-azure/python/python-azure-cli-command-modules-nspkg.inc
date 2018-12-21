DESCRIPTION = "Microsoft Azure CLI Command modules Namespace Package"

PV = "2.0.1"
PR = "r0"

RDEPENDS_${PN} = "\
    ${PYTHON_PN}-azure-cli-nspkg \
"

SRCREV = "adf3276cc8e756317b3a15c67d8ea4d81e162ea3"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/cli/command_modules/*.py \
    ${PYTHON_SITEPACKAGES_DIR}/azure/cli/command_modules/*.pyc \
    ${PYTHON_SITEPACKAGES_DIR}/azure_cli_command_modules_nspkg-* \
"

SRC_DIR = "src/azure-cli-command_modules-nspkg"
