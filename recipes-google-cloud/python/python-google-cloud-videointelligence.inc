DESCRIPTION = "Python Client for Google Cloud Video Intelligence"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-googleapis-common-protos \
	${PYTHON_PN}-google-gax \
	${PYTHON_PN}-six \
"

SRCREV = "937165ed2d9f500b0de53ab27d46cdf06739e923"

SRC_DIR = "videointelligence"
