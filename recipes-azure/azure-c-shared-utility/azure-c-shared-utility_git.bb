DESCRIPTION = "Azure C Shared Utility"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-c-shared-utility"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

BRANCH = "master"
SRC_URI = "\
    git://github.com/Azure/azure-c-shared-utility.git;protocol=https;branch=${BRANCH} \
"

SRCREV = "ceeafc67441b5b6a6d3ea32cf4bf3bcb3fa760af"

PV = "1.1.12+git${SRCPV}"

require ${BPN}.inc
