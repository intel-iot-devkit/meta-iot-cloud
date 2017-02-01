DESCRIPTION = "Python Client for Google BigQuery"

PV = "0.22.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
"

SRCREV = "920345ae74eaf3eeed1c848e28cde687d8ccdcd3"

SRC_DIR = "bigquery"
