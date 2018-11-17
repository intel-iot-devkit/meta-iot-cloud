include azure-iot-sdk.inc

inherit cmake python-dir

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

SRC_URI += "\
	git://github.com/Azure/azure-iot-sdk-c.git;rev=a99e91ce315e8a3e933e4033a76a65e2ecc41a42;destsuffix=git/c \
	git://github.com/Azure/azure-c-shared-utility.git;rev=94ccc6bd2428b14769bc5547c18a1ed84832ec57;destsuffix=git/c/c-utility \
	git://github.com/Azure/azure-umqtt-c.git;rev=5483dbe26cab67b69614dbde0f75adeb75a5bf23;destsuffix=git/c/umqtt \
	git://github.com/Azure/azure-uamqp-c.git;rev=13ccd7f79ffa3748c7f66b0f75a107df1893ac8f;destsuffix=git/c/uamqp \
	git://github.com/kgabis/parson.git;rev=bef4969d258d5bcce0d686b7bf514550e2ac346d;destsuffix=git/c/deps/parson \
	git://github.com/Azure/azure-uhttp-c.git;rev=019f42766277db70623bbdf953826b3abb1bb298;destsuffix=git/c/deps/uhttp \
	git://github.com/Microsoft/RIoT.git;rev=bc97a5eaff53535eddbdf95b4f477c6caf3b7788;destsuffix=git/c/provisioning_client/deps/RIoT \
	git://github.com/Azure/azure-utpm-c.git;rev=8933de6a2e24e070a84568decb08ceca09e4079a;destsuffix=git/c/provisioning_client/deps/utpm \
"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

EXTRA_OECMAKE = "-Dbuild_python:STRING=${PYTHON_BASEVERSION} -Duse_prov_client:BOOL=ON"

do_unpack_extra(){
    rm -rf ${S}/c/uamqp/deps/azure-c-shared-utility
    ln -s ${S}/c/c-utility ${S}/c/uamqp/deps/azure-c-shared-utility
    
    rm -rf ${S}/c/umqtt/deps/c-utility
    ln -s ${S}/c/c-utility ${S}/c/umqtt/deps
    
    rm -rf ${S}/c/deps/uhttp/deps/c-utility
    ln -s ${S}/c/c-utility ${S}/c/deps/uhttp/deps
    
    rm -rf ${S}/c/provisioning_client/deps/utpm/deps/c-utility
    ln -s ${S}/c/c-utility ${S}/c/provisioning_client/deps/utpm/deps
}
addtask unpack_extra after do_unpack before do_patch

FILES_${PN}-dbg += "\
	${PYTHON_SITEPACKAGES_DIR}/.debug \
"

INSANE_SKIP_${PN} += "rpaths"
