DESCRIPTION = "API Client library for Google Cloud - Core Helpers"

PV = "0.23.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-httplib2 \
	${PYTHON_PN}-googleapis-common-protos \
	${PYTHON_PN}-protobuf \
	${PYTHON_PN}-google-auth \
	${PYTHON_PN}-google-auth-httplib2 \
	${PYTHON_PN}-six \
"
SRCREV = "7e1632598365af1c03709bb5f5ff29f4d8a98847"

SRC_DIR = "core"
