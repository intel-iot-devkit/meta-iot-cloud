DESCRIPTION = "Samples and Tools the Google Assistant SDK"
HOMEPAGE = "https://github.com/googlesamples/assistant-sdk-python"
AUTHOR = "Google Assistant SDK Team"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=1b388b135719dbe1143117b38cadeb4e"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-urllib3 \
    ${PYTHON_PN}-tenacity \
    ${PYTHON_PN}-sounddevice \
    ${PYTHON_PN}-google-auth-oauthlib \
    ${PYTHON_PN}-google-assistant-grpc \
    ${PYTHON_PN}-google-assistant-library \
    ${PYTHON_PN}-click \
"

PR = "r0"

SRC_URI = "git://github.com/googlesamples/assistant-sdk-python.git"
SRCREV = "30821e6ead82a8325e90ae466765be99abefa795"

S = "${WORKDIR}/git/google-assistant-sdk"
