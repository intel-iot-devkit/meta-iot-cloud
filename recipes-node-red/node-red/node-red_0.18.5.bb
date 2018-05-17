include node-red.inc

LIC_FILES_CHKSUM = "file://LICENSE;md5=d6f37569f5013072e9490d2194d10ae6"

SRC_URI[md5sum] = "5892de70f671cfddfbba86b3b85e4a5a"
SRC_URI[sha256sum] = "b39cb7d8fd59766d6f273a2d103ec9fa4fe699fb36a8ecb9bf2e469ee90e37ad"

RDEPENDS_${PN} += "nodejs (>= 4.0.0)"

PR = "r0"
