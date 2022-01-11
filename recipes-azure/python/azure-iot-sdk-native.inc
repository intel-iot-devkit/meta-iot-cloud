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
    git://github.com/Azure/azure-iot-sdk-c.git;protocol=https;rev=eecb33ad9e5a566056850781c92c3cbc3a12cd1d;destsuffix=git/c \
    git://github.com/Azure/azure-c-shared-utility.git;protocol=https;rev=4deb950a4154e9baa39c87d75dd323dd58e239b7;destsuffix=git/c/c-utility \
    git://github.com/Azure/azure-umqtt-c.git;protocol=https;rev=640f9d649bd81f10ea6ce005e207cafe49ae3383;destsuffix=git/c/umqtt \
    git://github.com/Azure/azure-uamqp-c.git;protocol=https;rev=8da237b55317e575b361dd630ff5d862bc0b760c;destsuffix=git/c/uamqp \
    git://github.com/kgabis/parson.git;protocol=https;rev=0a1896939faff5f69e179637fc49f678ff0128ba;destsuffix=git/c/deps/parson \
    git://github.com/Azure/azure-uhttp-c.git;protocol=https;rev=d06524b543c52519e20da843d2df1d6e6e40a05d;destsuffix=git/c/deps/uhttp \
    git://github.com/Microsoft/RIoT.git;protocol=https;rev=bc97a5eaff53535eddbdf95b4f477c6caf3b7788;destsuffix=git/c/provisioning_client/deps/RIoT \
    git://github.com/Azure/azure-utpm-c.git;protocol=https;rev=a82e758bfcea806167e19d9dd94c2e1cc223aaee;destsuffix=git/c/provisioning_client/deps/utpm \
"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGECONFIG ??= "amqp mqtt"
PACKAGECONFIG[amqp] = "-Duse_amqp:BOOL=ON, -Duse_amqp:BOOL=OFF, "
PACKAGECONFIG[mqtt] = "-Duse_mqtt:BOOL=ON, -Duse_mqtt:BOOL=OFF, "

EXTRA_OECMAKE = "\
    -Duse_prov_client:BOOL=ON \
    -Duse_edge_modules:BOOL=ON \
"

do_unpack_extra(){
    rm -rf ${S}/c/uamqp/deps/c-utility
    ln -s ${S}/c/c-utility ${S}/c/uamqp/deps
    
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
