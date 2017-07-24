include node-red.inc

LIC_FILES_CHKSUM = "file://LICENSE;md5=d6f37569f5013072e9490d2194d10ae6"

SRC_URI[md5sum] = "a2067061c69eee8d16c8c3f7d386ce2d"
SRC_URI[sha256sum] = "67880b57877fcb45004550a4436f97c7586b7bfab82ab7ff97f3ff61d696e298"

RDEPENDS_${PN} += "nodejs (>= 4.0.0)"

PR = "r0"
