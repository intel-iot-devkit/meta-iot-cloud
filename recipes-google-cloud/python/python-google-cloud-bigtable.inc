DESCRIPTION = "Python Client for Google Cloud Bigtable"

PV = "0.22.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
	${PYTHON_PN}-grpcio \
"

SRC_DIR = "bigquery"