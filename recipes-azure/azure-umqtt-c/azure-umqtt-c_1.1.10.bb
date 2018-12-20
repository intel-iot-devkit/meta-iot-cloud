DESCRIPTION = "Microsoft Azure MQTT"
HOMEPAGE = "https://github.com/Azure/azure-umqtt-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6e1bb384cedd6442b3a2b9a5b531e005"

SRC_URI = "\
    gitsm://github.com/Azure/azure-umqtt-c.git \
"

SRCREV = "68ee315a77382f09a8732093603c3c2f1ada08c8"

PR = "r0"

require ${PN}.inc
