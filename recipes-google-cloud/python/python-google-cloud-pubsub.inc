DESCRIPTION = "Python Client for Google Cloud Pub/Sub"

PV = "0.26.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
	${PYTHON_PN}-grpcio \
	${PYTHON_PN}-gapic-google-cloud-pubsub-v1 \
"

SRCREV = "89ce0a62d9be7c85131c6aeae07dba20491f5a06"

SRC_DIR = "pubsub"
