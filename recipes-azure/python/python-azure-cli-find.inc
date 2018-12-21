DESCRIPTION = "Microsoft Azure Command-Line Tools Find Command Module"

PV = "0.2.7"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-whoosh \
"

SRCREV = "643e96476672f3bcc8aa793d5fa6e9ecc198081c"

SRC_DIR = "src/command_modules/azure-cli-find"
