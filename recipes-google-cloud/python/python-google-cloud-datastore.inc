DESCRIPTION = "Python Client for Google Cloud Datastore"

PV = "1.1.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
	${PYTHON_PN}-google-gax \
	${PYTHON_PN}-gapic-google-cloud-datastore-v1 \
"
SRCREV = "25b987c6f3e264a97a60d51be65abad5bf4eb61d"

SRC_DIR = "datastore"
