DESCRIPTION = "Microsoft Azure Batch AI Client Command-Line Tools"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-threading \
    ${PYTHON_PN}-unixadmin \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-adal \
    ${PYTHON_PN}-argcomplete \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-batchai \
    ${PYTHON_PN}-azure-mgmt-resource \
    ${PYTHON_PN}-azure-mgmt-storage \
    ${PYTHON_PN}-azure-storage-blob \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-paramiko \
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-sshtunnel \
"

SRC_URI[md5sum] = "4ad6b4210f1c793d05c5743a4176eb3e"
SRC_URI[sha256sum] = "ee54c4be16737d0c9ec4dd43bfed8fde600d0eba5ee3e5495976dca2bde1b142"
