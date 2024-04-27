DESCRIPTION = "Google Cloud Pub/Sub API client library"
HOMEPAGE = "https://github.com/googleapis/python-pubsub"
AUTHOR = "Google LLC"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit setuptools3 pypi

PR = "r0"

RDEPENDS:${PN} += "\
    python3-google-api-core \
    python3-grpc-google-iam-v1 \
    python3-libcst \
    python3-proto-plus \
"

SRC_URI[sha256sum] = "31fcf07444b7f813a616c4b650e1fbf1dc998a088fe0059a76164855ac17f05c"
