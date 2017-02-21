DESCRIPTION = "Python Client for Stackdriver Logging"

PV = "0.22.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
	${PYTHON_PN}-grpcio \
	${PYTHON_PN}-gapic-google-cloud-logging-v2 \
"

SRC_DIR = "logging"