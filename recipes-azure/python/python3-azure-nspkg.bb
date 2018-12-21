inherit setuptools3
require python-azure-nspkg.inc
require azure-sdk.inc

FILES_${PN}-nspkg += "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/__pycache__ \
"
