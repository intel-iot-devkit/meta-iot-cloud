DESCRIPTION = "httplib2 transport for google-auth"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-auth-library-python"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=86d3f3a95c324c9479bd8986968f4327"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-google-auth \
"

PR = "r0"

SRC_URI = "git://github.com/GoogleCloudPlatform/google-auth-library-python.git"
SRCREV = "d840beceafacd37a6abf993cd1fb8039eb3b6864"

S = "${WORKDIR}/git/httplib2_transport"