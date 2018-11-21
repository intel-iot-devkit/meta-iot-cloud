inherit setuptools3
require python-azure-cli-command-modules-nspkg.inc
require azure-cli.inc

FILES_${PN} += "\
	${PYTHON_SITEPACKAGES_DIR}/azure/cli/command_modules/__pycache__ \
"
