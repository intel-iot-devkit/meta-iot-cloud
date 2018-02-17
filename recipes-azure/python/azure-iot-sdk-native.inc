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

EXTRA_OECMAKE = "-Dbuild_python:STRING=${PYTHON_BASEVERSION} -Duse_prov_client:BOOL=ON"

INSANE_SKIP_${PN} += "rpaths"
