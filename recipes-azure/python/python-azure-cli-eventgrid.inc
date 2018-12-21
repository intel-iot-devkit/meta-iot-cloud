DESCRIPTION = "Microsoft Azure Command-Line EventGrid Command Module"

PV = "0.1.4"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-azure-mgmt-eventgrid \
"

SRCREV = "c40540f7697cc8434e177944c788263ee71f52a0"

SRC_DIR = "src/command_modules/azure-cli-eventgrid"
