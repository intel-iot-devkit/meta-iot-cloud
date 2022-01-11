DESCRIPTION = "uAMQP is a general purpose C library for AMQP"
HOMEPAGE = "https://github.com/Azure/azure-uamqp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    gitsm://github.com/Azure/azure-uamqp-c.git;protocol=https \
"
SRCREV = "6b84372f6a07e55147f8d591e81f7776f3665d0b"

PR = "r0"

include ${PN}.inc
