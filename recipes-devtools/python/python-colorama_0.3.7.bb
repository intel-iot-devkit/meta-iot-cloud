SUMMARY = "Cross-platform colored terminal text."
AUTHOR = "Arnon Yaari"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=14d0b64047ed8f510b51ce0495995358"

SRC_URI[md5sum] = "349d2b02618d3d39e5c6aede36fe3c1a"
SRC_URI[sha256sum] = "e043c8d32527607223652021ff648fbb394d5e19cba9f1a698670b338c9d782b"

inherit pypi

RDEPENDS_${PN} += "${PYTHON_PN}-contextlib"
