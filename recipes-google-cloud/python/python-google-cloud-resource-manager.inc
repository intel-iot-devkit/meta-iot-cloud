DESCRIPTION = "Python Client for Google Cloud Resource Manager"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-cloud-core \
"

SRCREV = "25c98d91e23c9c94fe02bbe43225c0e1f4c6baa5"

SRC_DIR = "resource_manager"
