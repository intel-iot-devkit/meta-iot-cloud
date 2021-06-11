DESCRIPTION = "Microsoft Azure MQTT"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-umqtt-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6e1bb384cedd6442b3a2b9a5b531e005"

BRANCH = "lts_07_2020"
SRC_URI = "\
    git://github.com/Azure/azure-umqtt-c.git;branch=${BRANCH} \
"

SRCREV="0c9cd1b323e58816fafe8d4db303b17ac2101b19"

PV = "${BRANCH}+git${SRCPV}"

require ${BPN}.inc
