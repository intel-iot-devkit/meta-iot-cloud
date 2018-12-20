DESCRIPTION = "Microsoft Azure Command-Line Tools Cognitive Services Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-cognitiveservices \
    ${PYTHON_PN}-knack \
"

SRC_URI[md5sum] = "3b7735181b20f7a7b2eb7e55a0d32f40"
SRC_URI[sha256sum] = "183da44cc4df289e150d82845da261816f644225dd04be0a0ca5c5d2ed99d659"
