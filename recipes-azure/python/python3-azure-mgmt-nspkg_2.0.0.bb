inherit setuptools3
require python-azure-mgmt-nspkg.inc

FILES_${PN} += "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/__pycache__ \
"
