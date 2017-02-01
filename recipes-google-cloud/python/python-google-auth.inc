DESCRIPTION = "Google Authentication Library"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-auth-library-python"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=86d3f3a95c324c9479bd8986968f4327"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-pyasn1 \
	${PYTHON_PN}-pyasn1-modules \
	${PYTHON_PN}-rsa \
	${PYTHON_PN}-six \
	${PYTHON_PN}-requests-oauthlib \
"

PR = "r0"

SRC_URI = "git://github.com/GoogleCloudPlatform/google-auth-library-python.git"
SRCREV = "90c1c1b5c8f4eda71240b96d671976d289ca6e04"

S = "${WORKDIR}/git"