DESCRIPTION = "Python HTTP for Humans."
HOMEPAGE = "http://python-requests.org"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=58c7e163c9f8ee037246da101c6afd1e"

inherit setuptools

SRC_NAME = "requests"

SRC_URI = "http://pypi.python.org/packages/source/r/${SRC_NAME}/${SRC_NAME}-${PV}.tar.gz"

SRC_URI[md5sum] = "0b7f480d19012ec52bab78292efd976d"
SRC_URI[sha256sum] = "c577815dd00f1394203fc44eb979724b098f88264a9ef898ee45b8e5e9cf587f"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
