DESCRIPTION = "Python Client for Google Cloud Speech"

PV = "0.22.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
	${PYTHON_PN}-grpcio \
	${PYTHON_PN}-gapic-google-cloud-speech-v1beta1 \
"

SRC_DIR = "speech"