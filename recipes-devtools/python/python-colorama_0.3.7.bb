SUMMARY = "Cross-platform colored terminal text."
AUTHOR = "Arnon Yaari"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=14d0b64047ed8f510b51ce0495995358"

inherit setuptools

PR = "r1"

SRC_NAME = "colorama"

SRC_URI = "https://pypi.python.org/packages/source/c/${SRC_NAME}/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "349d2b02618d3d39e5c6aede36fe3c1a"
SRC_URI[sha256sum] = "e043c8d32527607223652021ff648fbb394d5e19cba9f1a698670b338c9d782b"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
