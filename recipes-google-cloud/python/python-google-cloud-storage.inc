DESCRIPTION = "Python Client for Google Cloud Storage"

PV = "1.2.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-cloud-core \
    ${PYTHON_PN}-google-auth \
    ${PYTHON_PN}-google-resumable-media \
    ${PYTHON_PN}-requests \
"

SRCREV = "fc08ab08f70ea9c956ab240030e76a0cc35c81d2"

SRC_DIR = "storage"
