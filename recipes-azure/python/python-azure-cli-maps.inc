DESCRIPTION = "Microsoft Azure Command-Line Tools Maps Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-maps \
    ${PYTHON_PN}-knack \
"

SRC_URI[md5sum] = "6999307c3a84b7a8a21bd5aa03f37d43"
SRC_URI[sha256sum] = "92b8c06cdbc6ee494b5e79ab023bf0d991522b9b9d1e43d0e9b3451ef9e762c9"