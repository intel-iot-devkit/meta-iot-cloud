DESCRIPTION = "Microsoft Azure IoT device SDK"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdks"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

DEPENDS = "curl util-linux"

inherit cmake pkgconfig python-dir

SRC_URI = "gitsm://github.com/Azure/azure-iot-sdks.git"
SRCREV = "32f18aca88faa669e7d56023739900f94b65b607"

PR = "r1"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

## Node ##
NODE_MODULES_DIR = "${prefix}/lib/node_modules/"
NPM_CACHE_DIR ?= "${WORKDIR}/npm_cache"
NPM_REGISTRY ?= "https://registry.npmjs.org/"
NPM_INSTALL_FLAGS ?= "--production --no-optional --verbose"
NODE_SRC_DIR = "${S}/node/device/core"
NODE_PN = "azure-iot-device"
NODE_RED_SRC_DIR = "${S}/node/device/node-red"
NODE_RED_PN = "node-red-contrib-azureiothubnode"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg python-${PN} python-${PN}-dbg node-${NODE_PN} ${NODE_RED_PN}"

do_recursive_submodule_init() {
	export GIT_SSL_NO_VERIFY=1
	cd ${S}
	git submodule update --init --recursive
}

# FIXME: This is a nasty hack and needs fixing upstream
do_patch_linked_libraries() {
	cd ${S}/c/azure-c-shared-utility
	if [ -e CMakeLists.txt ]; then
	    sed -i '630s/.*/    target_link_libraries(aziotsharedutil pthread uuid)/' CMakeLists.txt
	fi
}

addtask recursive_submodule_init after do_unpack before do_configure
addtask patch_linked_libraries after do_recursive_submodule_init before do_configure

PACKAGECONFIG ??= "python nodejs node-red"
PACKAGECONFIG[python] = "-Dbuild_python:STRING=2.7, -Dbuild_python:STRING=OFF, ${PYTHON_PN} boost"
PACKAGECONFIG[nodejs] = ",, nodejs nodejs-native"
PACKAGECONFIG[node-red] = ",, node-red"

OECMAKE_SOURCEPATH = "${WORKDIR}/git/c"
EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Drun_e2e_tests:BOOL=OFF -Drun_longhaul_tests=OFF -Duse_amqp:BOOL=ON -Duse_http:BOOL=ON -Duse_mqtt:BOOL=ON -Dskip_unittests:BOOL=ON -Dbuild_javawrapper:STRING=OFF"

do_compile_append() {
    export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"

    if ${@bb.utils.contains('PACKAGECONFIG','nodejs','true','false',d)}; then
	cd ${NODE_SRC_DIR}
	
	# Clear cache
	npm cache clear

	# Install
	npm --registry=${NPM_REGISTRY} --arch=${TARGET_ARCH} --target_arch=${TARGET_ARCH} ${NPM_INSTALL_FLAGS} install
    fi

    if ${@bb.utils.contains('PACKAGECONFIG','node-red','true','false',d)}; then
	cd ${NODE_RED_SRC_DIR}
	
	# Clear cache
	npm cache clear

	# Install
	npm --registry=${NPM_REGISTRY} --arch=${TARGET_ARCH} --target_arch=${TARGET_ARCH} ${NPM_INSTALL_FLAGS} install
    fi
}

do_install() {
    install -d ${D}${libdir}
    oe_libinstall -C ${B}/azure-c-shared-utility/ -so libaziotsharedutil ${D}${libdir}
    oe_libinstall -C ${B}/azure-uamqp-c/ -so libuamqp ${D}${libdir}
    oe_libinstall -C ${B}/azure-umqtt-c/ -so libumqtt ${D}${libdir}
    oe_libinstall -C ${B}/iothub_client/ -so libiothub_client ${D}${libdir}
    oe_libinstall -C ${B}/iothub_client/ -so libiothub_client_amqp_transport ${D}${libdir}
    oe_libinstall -C ${B}/iothub_client/ -so libiothub_client_http_transport ${D}${libdir}
    oe_libinstall -C ${B}/iothub_client/ -so libiothub_client_mqtt_transport ${D}${libdir}
    oe_libinstall -C ${B}/serializer/ -so libserializer ${D}${libdir}

    install -d ${D}${includedir}/azureiotsdk
    install -m 0644 ${S}/c/iothub_client/inc/*.h ${D}${includedir}/azureiotsdk
    install -m 0644 ${S}/c/serializer/inc/*.h ${D}${includedir}/azureiotsdk

    # Python
    if [ -e ${B}/python/src/iothub_client.so ]; then
	install -d ${D}${PYTHON_SITEPACKAGES_DIR}
	oe_libinstall -C ${B}/python/src -so iothub_client ${D}${PYTHON_SITEPACKAGES_DIR}
    fi

    # Node
    install -d ${D}${NODE_MODULES_DIR}/${NODE_PN}
    cp -r ${NODE_SRC_DIR}/* ${D}${NODE_MODULES_DIR}/${NODE_PN}

    # Node-RED
    install -d ${D}${NODE_MODULES_DIR}/${NODE_RED_PN}
    cp -r ${NODE_RED_SRC_DIR}/* ${D}${NODE_MODULES_DIR}/${NODE_RED_PN}
}

## C ##
RDEPENDS_${PN} = "curl"

FILES_${PN} += "${libdir}/*.so"
FILES_${PN}-dev += "${includedir}/*"

INSANE_SKIP_${PN} += "rpaths"

## Python ##
RDEPENDS_python-${PN} += "python"
RPROVIDES_python-${PN} += "iothub_client.so"

FILES_python-${PN} += "${PYTHON_SITEPACKAGES_DIR}/*.so"
FILES_python-${PN}-dbg += "${PYTHON_SITEPACKAGES_DIR}/.debug"

INSANE_SKIP_python-${PN} += "rpaths"

## Node ##
RDEPENDS_node-${NODE_PN} += "nodejs"

FILES_node-${NODE_PN} += "${NODE_MODULES_DIR}${NODE_PN}"

## Node-RED ##
RDEPENDS_${NODE_RED_PN} += "nodejs node-red"

FILES_${NODE_RED_PN} += "${NODE_MODULES_DIR}${NODE_RED_PN}"

RRECOMMENDS_${PN}-dev = "glibc-dev util-linux-dev util-linux-libuuid-dev libcurl-dev curl-dev"
RRECOMMENDS_${PN}-dev[nodeprrecs] = "1"

INHIBIT_PACKAGE_DEBUG_SPLIT_node-${NODE_PN} = "1"
INHIBIT_PACKAGE_DEBUG_SPLIT_${NODE_RED_PN} = "1"
