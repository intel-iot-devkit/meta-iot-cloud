include node-red.inc

LIC_FILES_CHKSUM = "file://LICENSE;md5=d6f37569f5013072e9490d2194d10ae6"

SRC_URI[md5sum] = "94dbfdff4998e675e99c33d2b16f56bc"
SRC_URI[sha256sum] = "32253ee1c19fcacbb3a89c85676191d4251a4cfd6c4194e93f041e774ba4d977"

RDEPENDS_${PN} += "nodejs (>= 4.0.0)"

PR = "r0"
