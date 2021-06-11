DESCRIPTION = "HTTP Library written in C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-uhttp-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b98fddd052bb2f5ddbcdbd417ffb26a8"

BRANCH = "lts_07_2020"
SRC_URI = "\
    git://github.com/Azure/azure-uhttp-c.git;branch=${BRANCH} \
"

SRCREV = "6f18cb8e7f98dc875f37906aec3feeb3b5b9ef5f"

PV = "${BRANCH}+git${SRCPV}"

require ${BPN}.inc
