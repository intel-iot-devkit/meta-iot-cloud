DESCRIPTION = "Microsoft Azure Command-Line Tools Data Lake Store Command Module"

PV = "0.0.15"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-mgmt-datalake-store \
    ${PYTHON_PN}-azure-datalake-store \
    ${PYTHON_PN}-azure-cli-core \
"

SRCREV = "d6eb4e11a17137ff00769a69553379fa77881402"

SRC_DIR = "src/command_modules/azure-cli-dls"
