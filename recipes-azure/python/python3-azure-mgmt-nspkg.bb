inherit setuptools3
require python-azure-mgmt-nspkg.inc
require azure-sdk-common.inc

FILES_${PN} += "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/__pycache__ \
"
