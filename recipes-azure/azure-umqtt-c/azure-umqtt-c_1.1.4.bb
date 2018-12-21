DESCRIPTION = "Microsoft Azure MQTT"
HOMEPAGE = "https://github.com/Azure/azure-umqtt-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6e1bb384cedd6442b3a2b9a5b531e005"

SRC_URI = "\
    gitsm://github.com/Azure/azure-umqtt-c.git \
"

SRCREV = "870a2d5a496c38331e6bfaa4e0144c03fa65a6d7"

PR = "r0"

require ${PN}.inc
