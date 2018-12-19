inherit setuptools3
require python-azure-cli-nspkg.inc
require azure-cli.inc

FILES_${PN} += "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/cli/__pycache__ \
"
