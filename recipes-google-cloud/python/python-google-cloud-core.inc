DESCRIPTION = "API Client library for Google Cloud - Core Helpers"

PV = "0.22.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-httplib2 \
	${PYTHON_PN}-googleapis-common-protos \
	${PYTHON_PN}-protobuf \
	${PYTHON_PN}-google-auth \
	${PYTHON_PN}-google-auth-httplib2 \
	${PYTHON_PN}-six \
"

SRC_DIR = "core"
