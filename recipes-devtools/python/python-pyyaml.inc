DESCRIPTION = "YAML parser and emitter for Python"
AUTHOR = "Kirill Simonov"
HOMEPAGE = "http://pyyaml.org/wiki/PyYAML"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6015f088759b10e0bc2bf64898d4ae17"

SRC_NAME = "PyYAML"

SRC_URI = "https://pypi.python.org/packages/4a/85/db5a2df477072b2902b0eb892feb37d88ac635d36245a72a6a69b23b383a/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "4c129761b661d181ebf7ff4eb2d79950"
SRC_URI[sha256sum] = "592766c6303207a20efc445587778322d7f73b161bd994f227adaa341ba212ab"

PR = "r0"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

BBCLASSEXTEND = "native nativesdk"
