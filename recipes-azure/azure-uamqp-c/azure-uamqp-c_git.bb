DESCRIPTION = "uAMQP is a general purpose C library for AMQP"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-uamqp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

BRANCH = "master"
SRC_URI = "git://github.com/Azure/azure-uamqp-c.git;protocol=https;branch=${BRANCH}"

SRCREV = "4971d3795f48290893f9155deef5a5ae9563bd57"

PV = "1.2.12+git${SRCPV}"

include ${BPN}.inc
