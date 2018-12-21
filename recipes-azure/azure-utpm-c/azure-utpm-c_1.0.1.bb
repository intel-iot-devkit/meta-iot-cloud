DESCRIPTION = "TPM C library for use with Azure IoT SDKs"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-utpm-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=27e94c0280987ab296b0b8dd02ab9fe5"

SRC_URI = "\
    git://github.com/Azure/azure-utpm-c.git \
"

SRCREV = "da41b478b7905c7646bb3a03de1ce689f293d974"

PR = "r0"

require ${PN}.inc
