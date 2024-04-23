DESCRIPTION = "Microsoft Azure MQTT"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-umqtt-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6e1bb384cedd6442b3a2b9a5b531e005"

BRANCH = "master"
SRC_URI = "\
    git://github.com/Azure/azure-umqtt-c.git;protocol=https;branch=${BRANCH} \
"

SRCREV="b4e16beaaa2a025d18a95a665e2784dd9284c066"

PV = "1.1.12+git${SRCPV}"

require ${BPN}.inc
