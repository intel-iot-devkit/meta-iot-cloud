DESCRIPTION = "Python Client for Stackdriver Monitoring"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
"

SRCREV = "92c468d75434eaa4d86c2d30ae420a4f223246d7"

SRC_DIR = "monitoring"
