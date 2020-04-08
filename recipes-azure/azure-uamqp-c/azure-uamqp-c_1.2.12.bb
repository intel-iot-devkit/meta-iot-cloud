DESCRIPTION = "uAMQP is a general purpose C library for AMQP"
HOMEPAGE = "https://github.com/Azure/azure-uamqp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-uamqp-c.git \
"
SRCREV = "142cfab9d66c6f81ea0cceb635f31e00cfa51c77"

PR = "r0"

include ${BPN}.inc
