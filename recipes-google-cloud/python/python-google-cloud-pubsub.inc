DESCRIPTION = "Python Client for Google Cloud Pub/Sub"

PV = "0.22.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
	${PYTHON_PN}-grpcio \
	${PYTHON_PN}-gapic-google-cloud-pubsub-v1 \
"

SRC_DIR = "pubsub"