DESCRIPTION = "Python Client for Stackdriver Error Reporting"

PV = "0.22.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
	${PYTHON_PN}-google-cloud-logging \
"

SRC_DIR = "error_reporting"