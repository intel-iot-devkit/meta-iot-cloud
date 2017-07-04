include node-red.inc

LIC_FILES_CHKSUM = "file://LICENSE;md5=d6f37569f5013072e9490d2194d10ae6"

SRC_URI[md5sum] = "3a57f65ae1fb5e9bc75eec15768886a7"
SRC_URI[sha256sum] = "c1eed6f319e22a0f73664db08eee0f740831d6e854b5073a48e498451c230622"

RDEPENDS_${PN} += "nodejs (>= 4.0.0)"

PR = "r0"
