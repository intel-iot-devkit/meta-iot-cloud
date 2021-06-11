DESCRIPTION = "uAMQP is a general purpose C library for AMQP"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-uamqp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

BRANCH = "lts_07_2020"
SRC_URI = "\
    git://github.com/Azure/azure-uamqp-c.git;branch=${BRANCH} \
"

SRCREV = "038b7e32d70bec2b9108f3e3ec999795729ec6fe"

PV = "${BRANCH}+git${SRCPV}"

include ${BPN}.inc
