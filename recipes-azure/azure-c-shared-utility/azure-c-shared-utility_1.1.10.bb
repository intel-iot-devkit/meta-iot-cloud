DESCRIPTION = "Azure C Shared Utility"
HOMEPAGE = "https://github.com/Azure/azure-c-shared-utility"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-c-shared-utility.git \
"

SRCREV = "4deb950a4154e9baa39c87d75dd323dd58e239b7"

PR = "r0"

require ${PN}.inc
