DESCRIPTION = "Azure C Shared Utility"
HOMEPAGE = "https://github.com/Azure/azure-c-shared-utility"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-c-shared-utility.git;branch=release_2018_02_09 \
"

SRCREV = "4fe03ef78499f8acb1b2f8526b6cea8c432140d8"

PR = "r0"

require ${PN}.inc
