DESCRIPTION = "uAMQP is a general purpose C library for AMQP"
HOMEPAGE = "https://github.com/Azure/azure-uamqp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    gitsm://github.com/Azure/azure-uamqp-c.git \
"
SRCREV = "c43e97a9abfaec822737271bd5b7b9ec5e453445"

PR = "r0"

include ${PN}.inc
