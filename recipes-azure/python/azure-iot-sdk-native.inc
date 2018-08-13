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
