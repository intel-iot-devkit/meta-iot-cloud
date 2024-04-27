DESCRIPTION = "Cloud IoT API API client library"
HOMEPAGE = "https://github.com/googleapis/python-iot"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit pypi setuptools3

PR = "r0"

RDEPENDS:${PN} += "\
    python3-google-api-core \
    python3-grpc-google-iam-v1 \
    python3-proto-plus \
"

SRC_URI[sha256sum] = "a4b42073047cf45fbd8dc483b56ff9fba1b2f9693b5d07f8883e3dbc33e437d5"
