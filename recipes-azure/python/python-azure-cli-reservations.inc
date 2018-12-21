DESCRIPTION = "Microsoft Azure Command-Line Tools Reservations Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-reservations \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "13e32b846de91bcaaaee87e29475199c"
SRC_URI[sha256sum] = "2e2f13f64a6063028f0f97374d89cee737cb70c51cfb3d22fe84cf01e1cdb4da"