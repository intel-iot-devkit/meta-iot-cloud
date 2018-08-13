AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${WORKDIR}/git/LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-iot-sdk-python.git \
    git://github.com/Azure/azure-iot-sdk-c.git;destsuffix=c;name=c \
    git://github.com/Azure/azure-c-shared-utility.git;destsuffix=c-utility;name=c-utility \
    git://github.com/Azure/azure-uamqp-c.git;destsuffix=uamqp;name=uamqp \
    git://github.com/Azure/azure-umqtt-c.git;destsuffix=umqtt;name=umqtt \
    git://github.com/Azure/azure-uhttp-c.git;destsuffix=uhttp;name=uhttp \
    git://github.com/Azure/azure-utpm-c.git;destsuffix=utpm;name=utpm \
    git://github.com/kgabis/parson.git;destsuffix=parson;name=parson \
    git://github.com/Microsoft/RIoT.git;destsuffix=RIoT;name=riot \
"

SRCREV = "89adf11ef6e2ace6da7e9a0e6fd4930d999d077c"
SRCREV_c = "a99e91ce315e8a3e933e4033a76a65e2ecc41a42"
SRCREV_c-utility = "94ccc6bd2428b14769bc5547c18a1ed84832ec57"
SRCREV_uamqp = "13ccd7f79ffa3748c7f66b0f75a107df1893ac8f"
SRCREV_umqtt = "5483dbe26cab67b69614dbde0f75adeb75a5bf23"
SRCREV_uhttp = "019f42766277db70623bbdf953826b3abb1bb298"
SRCREV_utpm = "8933de6a2e24e070a84568decb08ceca09e4079a"
SRCREV_parson = "bef4969d258d5bcce0d686b7bf514550e2ac346d"
SRCREV_riot = "bc97a5eaff53535eddbdf95b4f477c6caf3b7788"
