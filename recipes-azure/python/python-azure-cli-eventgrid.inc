DESCRIPTION = "Microsoft Azure Command-Line EventGrid Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-eventgrid \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "39834bcb8152bb3832aba1b1fd04a01f"
SRC_URI[sha256sum] = "dd5efd48432a935392094d33995270f08122d452f8d9b412855c7fc330be88ef"