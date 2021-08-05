SUMMARY = "Makes working with XML feel like you are working with JSON"
AUTHOR = "Martin Blech"
HOMEPAGE = "https://github.com/martinblech/xmltodict"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=01441d50dc74476db58a41ac10cb9fa2"

PR = "r0"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-xml \
"

SRC_URI[md5sum] = "9f955947db085485873ac68154e88069"
SRC_URI[sha256sum] = "8f8d7d40aa28d83f4109a7e8aa86e67a4df202d9538be40c0cb1d70da527b0df"
