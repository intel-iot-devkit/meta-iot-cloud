DESCRIPTION = "Python Client for Google Cloud Bigtable"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-cloud-core \
    ${PYTHON_PN}-google-gax \
"

SRCREV = "c4484036ff7ce03a62fafb3ee5cedf19a74dcb6c"

SRC_DIR = "bigtable"
