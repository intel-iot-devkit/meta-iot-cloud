DESCRIPTION = "Microsoft Azure IoT device SDK"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdks"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

DEPENDS = "curl util-linux"
RDEPENDS_${PN} = "curl"

RPROVIDES_python-${PN} += "iothub_client.so"

inherit cmake python-dir

SRC_URI = "gitsm://github.com/Azure/azure-iot-sdks.git"
SRCREV = "0513e97aaf2ad36e134f0403d612da8118f16a8b"

PR = "r1"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg python-${PN} python-${PN}-dbg"

do_recursive_submodule_init() {
	export GIT_SSL_NO_VERIFY=1
	cd ${S}
	git submodule update --init --recursive
}

# FIXME: This is a nasty hack and needs fixing upstream
do_patch_linked_libraries() {
	cd ${S}/c/azure-c-shared-utility
	if [ -e CMakeLists.txt ]; then
	    sed -i '485s/.*/    target_link_libraries(aziotsharedutil pthread uuid)/' CMakeLists.txt
	fi
}

addtask recursive_submodule_init after do_unpack before do_configure
addtask patch_linked_libraries after do_recursive_submodule_init before do_configure

PACKAGECONFIG ??= "python"
PACKAGECONFIG[python] = "-Dbuild_python:STRING=ON, -Dbuild_python:STRING=OFF, ${PYTHON_PN} boost"

OECMAKE_SOURCEPATH = "${WORKDIR}/git/c"
EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Drun_e2e_tests:BOOL=OFF -Drun_longhaul_tests=OFF -Duse_amqp:BOOL=ON -Duse_http:BOOL=ON -Duse_mqtt:BOOL=ON -Dskip_unittests:BOOL=ON -Dbuild_javawrapper:STRING=OFF"

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
}

FILES_${PN} += "${libdir}/*.so"
FILES_${PN}-dev += "${includedir}/*"
FILES_python-${PN} += "${PYTHON_SITEPACKAGES_DIR}/*.so"
FILES_python-${PN}-dbg += "${PYTHON_SITEPACKAGES_DIR}/.debug"

RRECOMMENDS_azure-iot-sdk-dev = "glibc-dev util-linux-dev util-linux-libuuid-dev libcurl-dev curl-dev"
RRECOMMENDS_azure-iot-sdk-dev[nodeprrecs] = "1"

INSANE_SKIP_${PN} += "rpaths"
INSANE_SKIP_python-${PN} += "rpaths"
