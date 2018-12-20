DESCRIPTION = "Microsoft Azure Command-Line Tools IoT Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argcomplete \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-iothub \
    ${PYTHON_PN}-azure-mgmt-iothubprovisioningservices \
    ${PYTHON_PN}-azure-mgmt-resource \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-pyopenssl \
"

SRC_URI[md5sum] = "aa4fde31463e50843486fa41979e8afa"
SRC_URI[sha256sum] = "254353a1188814cea834f6012694d16103a3524887ab33b648e339936aac3df7"