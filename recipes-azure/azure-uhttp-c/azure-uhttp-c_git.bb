DESCRIPTION = "HTTP Library written in C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-uhttp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b98fddd052bb2f5ddbcdbd417ffb26a8"

BRANCH = "master"
SRC_URI = "\
    git://github.com/Azure/azure-uhttp-c.git;protocol=https;branch=${BRANCH} \
"

SRCREV = "9efe77ed921a7cedb7d7ca6c6a9cd2107ee9404a"

PV = "1.0.1+git${SRCPV}"

require ${BPN}.inc
