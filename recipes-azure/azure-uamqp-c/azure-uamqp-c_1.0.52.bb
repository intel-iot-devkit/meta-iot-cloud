DESCRIPTION = "uAMQP is a general purpose C library for AMQP"
HOMEPAGE = "https://github.com/Azure/azure-uamqp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
	git://github.com/Azure/azure-uamqp-c.git \
"
SRCREV = "f730f9af55aa46197e98df62ac3cd42dbde0ed1e"

PR = "r0"

include ${PN}.inc
include ${PN}-devkit.inc
