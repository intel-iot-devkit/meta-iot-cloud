include azure-iot-sdk.inc

inherit cmake python-dir

SRC_URI += "\
	file://Fix-for-GCC-8.x.patch \
"

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

EXTRA_OECMAKE = "-Dbuild_python:STRING=${PYTHON_BASEVERSION} -Duse_prov_client:BOOL=ON"

FILES_${PN}-dbg += "\
	${PYTHON_SITEPACKAGES_DIR}/.debug \
"

INSANE_SKIP_${PN} += "rpaths"
