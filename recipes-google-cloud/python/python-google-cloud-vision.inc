DESCRIPTION = "Python Client for Google Cloud Vision"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-cloud-core \
    ${PYTHON_PN}-google-gax \
    ${PYTHON_PN}-googleapis-common-protos \
"

SRCREV = "f0bf9df3dc53cb73a8564a11bde146414355ff53"

SRC_DIR = "vision"
