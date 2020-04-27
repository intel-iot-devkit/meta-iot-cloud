DESCRIPTION = "Microsoft Azure MQTT"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-umqtt-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6e1bb384cedd6442b3a2b9a5b531e005"

SRC_URI = "\
    git://github.com/Azure/azure-umqtt-c.git \
"

SRCREV = "65cdd1013715fb9d208c42f957eb353fbe22bafb"

PR = "r0"

require ${BPN}.inc
