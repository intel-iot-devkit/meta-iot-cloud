DESCRIPTION = "Python Client for Google Cloud Pub/Sub"

PV = "0.41.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-cloud-core \
    ${PYTHON_PN}-grpcio \
    ${PYTHON_PN}-gapic-google-cloud-pubsub-v1 \
    ${PYTHON_PN}-grpc-google-iam-v1 \
"

SRCREV = "79a43138a1dd733feff005e4207c29f8b269d8c2"

SRC_DIR = "pubsub"
