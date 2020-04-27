DESCRIPTION = "HTTP Library written in C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-uhttp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b98fddd052bb2f5ddbcdbd417ffb26a8"

SRC_URI = "\
    git://github.com/Azure/azure-uhttp-c.git \
"

SRCREV = "b67a6bfa0d018a8a23176ee214e46c208fc323c3"

PR = "r0"

require ${BPN}.inc
