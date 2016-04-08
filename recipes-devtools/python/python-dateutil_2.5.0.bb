SUMMARY = "Extensions to the standard Python datetime module"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=73551be74cd6d3496a2bde91861f2556"

inherit setuptools

PR = "r1"

SRC_NAME = "${PN}"

SRC_URI = "https://pypi.python.org/packages/source/p/${SRC_NAME}/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "89cc81c2ee11cf71102c1d3985a01ecb"
SRC_URI[sha256sum] = "c1f7a66b0021bd7b206cc60dd47ecc91b931cdc5258972dc56b25186fa9a96a5"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
