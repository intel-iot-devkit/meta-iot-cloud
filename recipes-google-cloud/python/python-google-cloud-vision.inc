DESCRIPTION = "Python Client for Google Cloud Vision"

PV = "0.22.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
	${PYTHON_PN}-enum34 \
"

SRC_DIR = "vision"