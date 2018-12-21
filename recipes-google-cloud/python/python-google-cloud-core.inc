DESCRIPTION = "API Client library for Google Cloud - Core Helpers"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-httplib2 \
    ${PYTHON_PN}-googleapis-common-protos \
    ${PYTHON_PN}-protobuf \
    ${PYTHON_PN}-google-auth \
    ${PYTHON_PN}-google-auth-httplib2 \
    ${PYTHON_PN}-six \
"

SRCREV = "1d156e3ed6a06468181a0c0bf48fc1a9e1c576ce"

SRC_DIR = "core"
