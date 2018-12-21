AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${WORKDIR}/git/LICENSE;md5=4283671594edec4c13aeb073c219237a"

DEPENDS = "\
    ${PYTHON_PN} \
    boost \
    util-linux \
    curl \
    openssl \
"

RDEPENDS_${PN} = "\
    boost-python \
"

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

inherit cmake python-dir

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

do_submodules() {
    cp -rf ${WORKDIR}/c ${S}
    cp -rf ${WORKDIR}/c-utility ${S}/c
    cp -rf ${WORKDIR}/uamqp ${S}/c
    cp -rf ${WORKDIR}/umqtt ${S}/c
    cp -rf ${WORKDIR}/uhttp ${S}/c/deps
    cp -rf ${WORKDIR}/utpm ${S}/c/provisioning_client/deps
    cp -rf ${WORKDIR}/parson ${S}/c/deps
    
    cp -rf ${WORKDIR}/c-utility/* ${S}/c/uamqp/deps/azure-c-shared-utility
    cp -rf ${WORKDIR}/c-utility ${S}/c/umqtt/deps
    cp -rf ${WORKDIR}/c-utility ${S}/c/deps/uhttp/deps
    cp -rf ${WORKDIR}/c-utility ${S}/c/provisioning_client/deps/utpm/deps
    cp -rf ${WORKDIR}/RIoT ${S}/c/provisioning_client/deps
}

addtask do_submodules after do_unpack before do_patch

EXTRA_OECMAKE = "-Dbuild_python:STRING=${PYTHON_BASEVERSION} -Duse_prov_client:BOOL=ON"

FILES_${PN}-dbg += "\
    ${PYTHON_SITEPACKAGES_DIR}/.debug \
"

INSANE_SKIP_${PN} += "rpaths"
