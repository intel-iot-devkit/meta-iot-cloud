DESCRIPTION = "Low-level, pure Python DBus protocol wrapper."
AUTHOR = "Thomas Kluyver"
HOMEPAGE = "https://gitlab.com/takluyver/jeepney"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=aad69c93f605003e3342b174d9b0708c"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-xml \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-tornado \
"

SRC_URI[md5sum] = "d888c2f46d2b117eb683c04bc998572c"
SRC_URI[sha256sum] = "a6f2aa72e61660248d4d524dfccb6405f17c693b69af5d60dd7f2bab807d907e"
