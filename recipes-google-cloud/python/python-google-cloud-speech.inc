DESCRIPTION = "Python Client for Google Cloud Speech"

PV = "0.26.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
	${PYTHON_PN}-grpcio \
	${PYTHON_PN}-gapic-google-cloud-speech-v1 \
"

SRCREV = "e70423bec7b9624e18c59bded9456e232794308f"

SRC_DIR = "speech"
