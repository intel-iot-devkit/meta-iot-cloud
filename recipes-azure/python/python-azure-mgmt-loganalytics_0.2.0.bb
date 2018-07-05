inherit setuptools
require python-azure-mgmt-loganalytics.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"
