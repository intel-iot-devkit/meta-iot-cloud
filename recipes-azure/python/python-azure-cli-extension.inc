DESCRIPTION = "Microsoft Azure Command-Line Tools Extension Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-compression \
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-shell \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argcomplete \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-wheel \
"

SRC_URI[md5sum] = "dab1d26af3ff36791f5c3faa82ce9e8f"
SRC_URI[sha256sum] = "255e38b566ffbe6566a62bae388f22d33ce0329dd8df7f4d07b4b5eeb1c03bb8"