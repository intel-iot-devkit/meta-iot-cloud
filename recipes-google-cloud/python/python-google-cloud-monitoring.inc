DESCRIPTION = "Python Client for Stackdriver Monitoring"

PV = "0.22.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
"

SRC_DIR = "monitoring"