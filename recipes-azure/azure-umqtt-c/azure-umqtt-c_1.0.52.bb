DESCRIPTION = "Microsoft Azure MQTT"
HOMEPAGE = "https://github.com/Azure/azure-umqtt-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6e1bb384cedd6442b3a2b9a5b531e005"

SRC_URI = "\
	git://github.com/Azure/azure-umqtt-c.git \
"

SRCREV = "834f0c9edd4e926f92e0f43c0c264d58abcb48e8"

PR = "r0"

require ${PN}.inc
require ${PN}-idp.inc
