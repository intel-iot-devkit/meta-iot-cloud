DESCRIPTION = "Azure C Shared Utility"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-c-shared-utility"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-c-shared-utility.git;branch=lts_07_2020 \
"

SRCREV = "85fe8977e98cc0e84609e9250ba34b0d455b96df"

PR = "r1"

require ${BPN}.inc
