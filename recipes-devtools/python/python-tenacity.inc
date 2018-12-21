SUMMARY = "Retry code until it succeeeds"
AUTHOR = "Julien Danjou"
HOMEPAGE = "https://github.com/jd/tenacity"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=175792518e4ac015ab6696d16c4f607e"

DEPENDS += "\
    ${PYTHON_PN}-pbr-native \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-monotonic \
"

PR = "r0"

SRC_URI = "git://github.com/jd/tenacity.git"
SRCREV = "5052cdc3b140766563d916c4bc949e733ae5914b"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
