include node-red.inc

LIC_FILES_CHKSUM = "file://LICENSE;md5=d6f37569f5013072e9490d2194d10ae6"

SRC_URI[md5sum] = "f1b26f818969ff0eaaf4a1cebf12291c"
SRC_URI[sha256sum] = "7f11dfa6c2605a70db67d335b7bd69bc22c77d164d9a0b95f76b89dfceaf83a0"

RDEPENDS_${PN} += "nodejs (>= 4.0.0)"

PR = "r0"
