DESCRIPTION = "Microsoft Azure Command-Line Tools Event Hubs Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-eventhub \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
"

SRC_URI[md5sum] = "6e9ba7b4033c989898c514eeea6d2ef6"
SRC_URI[sha256sum] = "aa33d5074406f6cc594a140e47ebb6381ae93ebc62db3c5453a49bb20d5e099e"