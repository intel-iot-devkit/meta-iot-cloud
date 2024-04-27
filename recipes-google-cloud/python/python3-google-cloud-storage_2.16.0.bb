DESCRIPTION = "Google Cloud Storage API client library"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-cloud-python"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit pypi setuptools3

PR = "r0"

RDEPENDS:${PN} += "\
    python3-google-auth \
    python3-google-api-core \
    python3-google-cloud-core \
    python3-google-resumable-media \
    python3-requests \
    python3-google-crc32c \
"

SRC_URI[sha256sum] = "dda485fa503710a828d01246bd16ce9db0823dc51bbca742ce96a6817d58669f"
