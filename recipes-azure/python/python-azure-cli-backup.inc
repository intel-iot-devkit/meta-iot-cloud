DESCRIPTION = "Microsoft Azure Command-Line Tools Recovery Services Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-shell \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argcomplete \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-recoveryservices \
    ${PYTHON_PN}-azure-mgmt-recoveryservicesbackup \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "9f8439a1dd831244c669ad3eb6da1f20"
SRC_URI[sha256sum] = "b66ba679bf6dc2a9c0d36ade0711486dc3b46339508042865d3c28971dde6e80"
