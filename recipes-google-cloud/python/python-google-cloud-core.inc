DESCRIPTION = "API Client library for Google Cloud - Core Helpers"

PV = "1.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-httplib2 \
    ${PYTHON_PN}-googleapis-common-protos \
    ${PYTHON_PN}-protobuf \
    ${PYTHON_PN}-google-auth \
    ${PYTHON_PN}-google-auth-httplib2 \
    ${PYTHON_PN}-six \
"

SRCREV = "1f5fcf74507587781a29d39094467cb1f6c43107"

SRC_DIR = "core"
