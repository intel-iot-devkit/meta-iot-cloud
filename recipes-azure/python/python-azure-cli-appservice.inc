DESCRIPTION = "Microsoft Azure Command-Line Tools AppService Command Module"

PV = "0.1.18"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-web \
    ${PYTHON_PN}-azure-mgmt-containerregistry \
    ${PYTHON_PN}-urllib3 \
    ${PYTHON_PN}-xmltodict \
    ${PYTHON_PN}-pyopenssl \
    ${PYTHON_PN}-vsts-cd-manager \
"

SRCREV = "5b6b2c09558fdbe46ce9ad48ab4437dc43d78cc2"

SRC_DIR = "src/command_modules/azure-cli-appservice"
