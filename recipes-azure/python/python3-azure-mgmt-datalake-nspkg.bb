inherit setuptools3
require python-azure-mgmt-datalake-nspkg.inc
require azure-mgmt-common.inc

FILES_${PN} += "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/__pycache__ \
"
