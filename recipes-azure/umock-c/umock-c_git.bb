DESCRIPTION = "umock_c is a C mocking library."
HOMEPAGE = "https://github.com/Azure/umock-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4f9c2c296f77b3096b6c11a16fa7c66e"

SRC_URI = "\
    git://github.com/Azure/umock-c.git;protocol=https;branch=master \
"

SRCREV = "062f7e5c34f7eb9a7e10c352364f4057fd67607a"

PV = "1.1.19+git${SRCPV}"

require ${BPN}.inc
