DESCRIPTION = "Google Cloud API client core library"
HOMEPAGE = "https://github.com/googleapis/python-cloud-core"
AUTHOR = "Google LLC"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit setuptools3 pypi

PR = "r0"

RDEPENDS:${PN} += "\
    python3-google-api-core \
    python3-google-auth \
    python3-grpcio \
    python3-grpcio-status \
"

SRC_URI[sha256sum] = "9b7749272a812bde58fff28868d0c5e2f585b82f37e09a1f6ed2d4d10f134073"

