DESCRIPTION = "Azure C Shared Utility"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-c-shared-utility"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-c-shared-utility.git \
"

SRCREV = "65c27eb4ab9a8bbe36b4d7c5a0e9ad305becb8b4"

PR = "r1"

require ${BPN}.inc
