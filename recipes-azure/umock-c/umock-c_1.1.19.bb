DESCRIPTION = "umock_c is a C mocking library."
HOMEPAGE = "https://github.com/Azure/umock-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4f9c2c296f77b3096b6c11a16fa7c66e"

SRC_URI = "\
    git://github.com/Azure/umock-c.git \
"

SRCREV = "504193e65d1c2f6eb50c15357167600a296df7ff"

PR = "r0"

require ${BPN}.inc
