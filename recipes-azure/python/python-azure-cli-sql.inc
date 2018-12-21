DESCRIPTION = "Microsoft Azure Command-Line Tools SQL Command Module"

PV = "2.0.13"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-sql \
    ${PYTHON_PN}-azure-mgmt-storage \
    ${PYTHON_PN}-six \
"

SRCREV = "1151cc01bd69203369e6622ce7e778526720c436"

SRC_DIR = "src/command_modules/azure-cli-sql"
