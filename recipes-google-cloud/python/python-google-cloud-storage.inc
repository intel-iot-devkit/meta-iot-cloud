DESCRIPTION = "Google Cloud Storage API client library"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-cloud-python"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-cloud-core \
    ${PYTHON_PN}-google-resumable-media \
"

SRC_URI[md5sum] = "0a8c52d5aa1392657066a34d0c52d604"
SRC_URI[sha256sum] = "2e7e2435978bda1c209b70a9a00b8cbc53c3b00d6f09eb2c991ebba857babf24"
