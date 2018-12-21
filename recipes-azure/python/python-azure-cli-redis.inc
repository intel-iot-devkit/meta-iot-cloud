DESCRIPTION = "Microsoft Azure Command-Line Tools Redis Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-redis \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
"

SRC_URI[md5sum] = "6789a370a55d2a9a0336f14d7a551504"
SRC_URI[sha256sum] = "0efdafca03bc624e5b3c5e76aa9aafa751eb690bc90578d5645275b6da5be64c"