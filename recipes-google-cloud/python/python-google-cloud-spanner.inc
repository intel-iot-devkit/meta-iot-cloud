DESCRIPTION = "Python Client for Cloud Spanner"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-cloud-core \
    ${PYTHON_PN}-grpcio \
    ${PYTHON_PN}-gapic-google-cloud-spanner-v1 \
    ${PYTHON_PN}-gapic-google-cloud-spanner-admin-database-v1 \
    ${PYTHON_PN}-gapic-google-cloud-spanner-admin-instance-v1 \
"

SRCREV = "273b24fa6da43a51e500595619baa58ceaef05c1"

SRC_DIR = "spanner"
