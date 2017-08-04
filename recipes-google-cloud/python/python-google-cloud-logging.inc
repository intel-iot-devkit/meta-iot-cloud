DESCRIPTION = "Python Client for Stackdriver Logging"

PV = "1.1.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
	${PYTHON_PN}-grpcio \
	${PYTHON_PN}-gapic-google-cloud-logging-v2 \
"

SRCREV = "67fad2006faf168a52d10bc938abeeeefd4bd14f"

SRC_DIR = "logging"
