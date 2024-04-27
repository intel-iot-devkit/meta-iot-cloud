DESCRIPTION = "GRPC library for the google-iam-v1 service"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit setuptools3 pypi

PR = "r0"

RDEPENDS:${PN} += "\
    python3-googleapis-common-protos \
    python3-grpcio \
"

SRC_URI[sha256sum] = "fad318608b9e093258fbf12529180f400d1c44453698a33509cc6ecf005b294e"
