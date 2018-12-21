DESCRIPTION = "Microsoft Azure Command-Line Tools ACR Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-compression \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argcomplete \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-containerregistry \
    ${PYTHON_PN}-azure-mgmt-resource \
    ${PYTHON_PN}-azure-mgmt-storage \
    ${PYTHON_PN}-azure-storage-blob \
    ${PYTHON_PN}-colorama \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrest \
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-requests \
"

SRC_URI[md5sum] = "ad700ae77f7e33dc401ab84ebdab8028"
SRC_URI[sha256sum] = "530e7f56ebdc32f56dec7d30aff1be41cde4b8b0437a204fd2e3c24474001678"
