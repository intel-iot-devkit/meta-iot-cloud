DESCRIPTION = "Microsoft Azure Command-Line Tools Profile Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-json \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-adal \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-requests \
"

SRC_URI[md5sum] = "ab6c96a276bf9c3711a733ac415e42b8"
SRC_URI[sha256sum] = "1c675757b7c08d3c443a0502cbb69a1d7350e1ffb055b8e746649977f9f555ac"