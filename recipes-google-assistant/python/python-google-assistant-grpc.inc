DESCRIPTION = "Google Assistant API gRPC bindings"
HOMEPAGE = "https://github.com/googlesamples/assistant-sdk-python"
AUTHOR = "Google Assistant SDK Team"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=1b388b135719dbe1143117b38cadeb4e"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-googleapis-common-protos \
	${PYTHON_PN}-grpcio \
"

PR = "r0"

SRC_URI = "git://github.com/googlesamples/assistant-sdk-python.git"
SRCREV = "30821e6ead82a8325e90ae466765be99abefa795"

S = "${WORKDIR}/git/google-assistant-grpc"
