DESCRIPTION = "Utilities for Google Media Downloads and Resumable Uploads"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-resumable-media-python"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-six \
"

PR = "r0"

SRC_URI = "git://github.com/GoogleCloudPlatform/google-resumable-media-python.git"
SRCREV = "fdaa12a7290796e8a9d4ccfd6f38f7236e122cb3"

S = "${WORKDIR}/git"
