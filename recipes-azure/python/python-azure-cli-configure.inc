DESCRIPTION = "Microsoft Azure Command-Line Tools Configure Command Module"

PV = "2.0.11"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
"

SRCREV = "7287a2537ce50087854d34ffffad120d116b1e94"

SRC_DIR = "src/command_modules/azure-cli-configure"
