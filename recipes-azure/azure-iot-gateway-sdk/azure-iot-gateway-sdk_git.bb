DESCRIPTION = "Azure IoT Gateway SDK"
HOMEPAGE = "https://github.com/Azure/azure-iot-gateway-sdk"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://License.txt;md5=9cc1d02a339a3e756ac7975262cf739d"

DEPENDS = "glib-2.0 curl util-linux azure-iot-sdk"
RDEPENDS_${PN} = "glib-2.0 curl"

inherit cmake pkgconfig

SRC_URI = "gitsm://github.com/Azure/azure-iot-gateway-sdk.git"
SRCREV = "${AUTOREV}"

PR = "r1"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg"

do_recursive_submodule_init() {
	export GIT_SSL_NO_VERIFY=1
	cd ${S}
	git submodule update --init --recursive
}

# FIXME: This is a nasty hack and needs fixing upstream
do_patch_linked_libraries() {
	cd ${S}/deps/azure-c-shared-utility
	if [ -e CMakeLists.txt ]; then
	    sed -i '485s/.*/    target_link_libraries(aziotsharedutil pthread uuid)/' CMakeLists.txt
	fi
}

addtask recursive_submodule_init after do_unpack before do_configure
addtask patch_linked_libraries after do_recursive_submodule_init before do_configure

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Drun_e2e_tests:BOOL=OFF -Drun_valgrind:BOOL=0 -Dinstall_executables:BOOL=ON -Drun_as_a_service:BOOL=ON -Dskip_unittests:BOOL=ON"

do_install() {
    install -d ${D}${libdir}
    oe_libinstall -C ${B}/core/deps/ -so libparson ${D}${libdir}
    oe_libinstall -C ${B}/core/ -so libgateway ${D}${libdir}
    oe_libinstall -C ${B}/modules/ble/ -so libble ${D}${libdir}/azureiot/modules/ble/
    oe_libinstall -C ${B}/modules/ble/ -so libble_hl ${D}${libdir}/azureiot/modules/ble/
    oe_libinstall -C ${B}/modules/hello_world/ -so libhello_world ${D}${libdir}/azureiot/modules/hello_world/
    oe_libinstall -C ${B}/modules/hello_world/ -so libhello_world_hl ${D}${libdir}/azureiot/modules/hello_world/
    oe_libinstall -C ${B}/modules/identitymap/ -so libidentity_map ${D}${libdir}/azureiot/modules/identitymap/
    oe_libinstall -C ${B}/modules/identitymap/ -so libidentity_map_hl ${D}${libdir}/azureiot/modules/identitymap/
    oe_libinstall -C ${B}/modules/iothubhttp/ -so libiothubhttp ${D}${libdir}/azureiot/modules/iothubhttp/
    oe_libinstall -C ${B}/modules/iothubhttp/ -so libiothubhttp_hl ${D}${libdir}/azureiot/modules/iothubhttp/
    oe_libinstall -C ${B}/modules/logger/ -so liblogger ${D}${libdir}/azureiot/modules/logger/
    oe_libinstall -C ${B}/modules/logger/ -so liblogger_hl ${D}${libdir}/azureiot/modules/logger/
    oe_libinstall -C ${B}/modules/simulated_device/ -so libsimulated_device ${D}${libdir}/azureiot/modules/simulated_device/
    oe_libinstall -C ${B}/modules/simulated_device/ -so libsimulated_device_hl ${D}${libdir}/azureiot/modules/simulated_device/

    install -d ${D}${includedir}/azureiot
    install -d ${D}${includedir}/azureiot/modules/ble
    install -d ${D}${includedir}/azureiot/modules/common
    install -d ${D}${includedir}/azureiot/modules/hello_world
    install -d ${D}${includedir}/azureiot/modules/identitymap
    install -d ${D}${includedir}/azureiot/modules/iothubhttp
    install -d ${D}${includedir}/azureiot/modules/logger
    install -d ${D}${includedir}/azureiot/modules/simulated_device

    install -m 0644 ${S}/core/inc/*.h ${D}${includedir}/azureiot
    install -m 0644 ${S}/core/inc/linux/*.h ${D}${includedir}/azureiot
    install -m 0644 ${S}/modules/ble/inc/*.h ${D}${includedir}/azureiot/modules/ble
    install -m 0644 ${S}/modules/common/*.h ${D}${includedir}/azureiot/modules/common

    install -m 0644 ${S}/modules/hello_world/inc/*.h ${D}${includedir}/azureiot/modules/hello_world
    install -m 0644 ${S}/modules/identitymap/inc/*.h ${D}${includedir}/azureiot/modules/identitymap
    install -m 0644 ${S}/modules/iothubhttp/inc/*.h ${D}${includedir}/azureiot/modules/iothubhttp
    install -m 0644 ${S}/modules/logger/inc/*.h ${D}${includedir}/azureiot/modules/logger
    install -m 0644 ${S}/modules/simulated_device/inc/*.h ${D}${includedir}/azureiot/modules/simulated_device
}

FILES_${PN} += "${libdir}/*.so \
		${libdir}/azureiot/modules/ble/*.so \
		${libdir}/azureiot/modules/hello_world/*.so \
		${libdir}/azureiot/modules/identitymap/*.so \
		${libdir}/azureiot/modules/iothubhttp/*.so \
		${libdir}/azureiot/modules/logger/*.so \
		${libdir}/azureiot/modules/simulated_device/*.so \
"

FILES_${PN}-dbg += "${libdir}/azureiot/modules/ble/.debug \
		    ${libdir}/azureiot/modules/hello_world/.debug \
		    ${libdir}/azureiot/modules/identitymap/.debug \
		    ${libdir}/azureiot/modules/iothubhttp/.debug \
		    ${libdir}/azureiot/modules/logger/.debug \
		    ${libdir}/azureiot/modules/simulated_device/.debug \
"

FILES_${PN}-dev += "${includedir}"

INSANE_SKIP_${PN} += "rpaths"
