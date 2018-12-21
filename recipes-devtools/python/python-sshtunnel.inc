DESCRIPTION = "Pure python SSH tunnels"
HOMEPAGE = "https://github.com/pahaz/sshtunnel"
AUTHOR = "Pahaz Blinov"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=099ee2b925d98c72f52684df6fa3ac9f"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-paramiko \
"

SRC_URI = "git://github.com/pahaz/sshtunnel.git"
SRCREV = "114cdea5f91bcc183c4f67349fb65d9b1eb40a6f"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
