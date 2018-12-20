DESCRIPTION = "Microsoft Azure Command-Line Tools Find Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-shell \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-pyyaml \
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-whoosh \
"

SRC_URI[md5sum] = "aba65f709526bf2a59cccd33243b0430"
SRC_URI[sha256sum] = "46c7bbec2b917797356c1608af5b2033afef1a70a7f865d427e39a68c94a1e15"