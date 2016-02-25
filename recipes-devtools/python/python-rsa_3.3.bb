SUMMARY = "Pure-Python RSA implementation"
AUTHOR = "Sybren A. Stuvel"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=a1d27014d3d0d7ae5fb973adab04ee30"

SRC_URI[md5sum] = "513ed05c3b2038e8bc6d0686772455ab"
SRC_URI[sha256sum] = "03f3d9bebad06681771016b8752a40b12f615ff32363c7aa19b3798e73ccd615"

inherit pypi

RDEPENDS_${PN} += "${PYTHON_PN}-pyasn1"
