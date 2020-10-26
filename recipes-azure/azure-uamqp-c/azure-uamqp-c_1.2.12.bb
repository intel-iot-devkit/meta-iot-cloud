DESCRIPTION = "uAMQP is a general purpose C library for AMQP"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-uamqp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-uamqp-c.git;branch=master;rev=9e851bd6db08d6d2d08d1ef469d1e6fc4795382d \
"

PR = "r1"

include ${BPN}.inc
