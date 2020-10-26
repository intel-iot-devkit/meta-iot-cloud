DESCRIPTION = "Microsoft Azure MQTT"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-umqtt-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6e1bb384cedd6442b3a2b9a5b531e005"

SRC_URI = "\
    git://github.com/Azure/azure-umqtt-c.git;branch=master;rev=165f6f52f8b2aec54a28ea5ede41736589726cd0 \
"

PR = "r1"

require ${BPN}.inc
