DESCRIPTION = "Python Client for Google Cloud Datastore"

PV = "0.22.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
	${PYTHON_PN}-grpcio \
	${PYTHON_PN}-gapic-google-cloud-datastore-v1 \
"
SRCREV = "292b49d0052995d84ce60ddc19a9e3a8ebfd384b"

SRC_DIR = "datastore"