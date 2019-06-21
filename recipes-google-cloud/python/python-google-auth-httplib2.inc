DESCRIPTION = "httplib2 transport for google-auth"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-auth-library-python"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=86d3f3a95c324c9479bd8986968f4327"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-google-auth \
    ${PYTHON_PN}-httplib2 \
"

PR = "r0"

SRC_URI = "git://github.com/GoogleCloudPlatform/google-auth-library-python-httplib2.git"
SRCREV = "e7cd722281d1d897fa9ae6e3b6b78ae142778e6e"

S = "${WORKDIR}/git"
