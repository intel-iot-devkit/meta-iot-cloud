DESCRIPTION = "Azure IoT Gateway SDK"
HOMEPAGE = "https://github.com/Azure/azure-iot-gateway-sdk"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://License.txt;md5=9cc1d02a339a3e756ac7975262cf739d"

DEPENDS = "glib-2.0 curl util-linux azure-iot-sdk"

inherit cmake pkgconfig java

SRC_URI = "git://github.com/Azure/azure-iot-gateway-sdk.git"
SRCREV = "1362b3b9dcde50811aef63956d3f5cb4521a50fd"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg ${PN}-modules ${PN}-java-binding"

## Java ##
JAVA_SRC_DIR = "${S}/bindings/java/gateway-java-binding"
JAVA_LIB_DIR = "${B}/bindings/java/"
JAVA_JAR_DIR = "${JAVA_SRC_DIR}/target"
JAVA_PN = "gateway-java-binding"

do_recursive_submodule_init() {
	export GIT_SSL_NO_VERIFY=1
	cd ${S}
	git submodule update --init --recursive
}

# FIXME: This is a nasty hack and needs fixing upstream
do_patch_linked_libraries() {
	cd ${S}/deps/azure-c-shared-utility
	if [ -e CMakeLists.txt ]; then
	    sed -i '622s/.*/    target_link_libraries(aziotsharedutil pthread uuid)/' CMakeLists.txt
	fi
}

addtask recursive_submodule_init after do_unpack before do_configure
addtask patch_linked_libraries after do_recursive_submodule_init before do_configure

PACKAGECONFIG ??= "java"
PACKAGECONFIG[java] = "-Denable_java_binding:BOOL=ON, -Denable_java_binding:BOOL=OFF, maven-native icedtea7-native"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Drun_e2e_tests:BOOL=OFF -Drun_valgrind:BOOL=0 -Dinstall_executables:BOOL=ON -Drun_as_a_service:BOOL=ON -Dskip_unittests:BOOL=ON"

do_configure_prepend() {
	# Java
	if ${@bb.utils.contains('PACKAGECONFIG','java','true','false',d)}; then
		export JAVA_HOME="${STAGING_LIBDIR_JVM_NATIVE}/icedtea7-native"
	fi
}

do_compile_append() {
	if ${@bb.utils.contains('PACKAGECONFIG','java','true','false',d)}; then
		export JAVA_HOME="${STAGING_LIBDIR_JVM_NATIVE}/icedtea7-native"
		export M3_HOME="${STAGING_DIR_NATIVE}/usr/bin/maven-native"
		cd ${JAVA_SRC_DIR}
		mvn clean install
    	fi
}

do_install() {
    # Core
    install -d ${D}${libdir}
    oe_libinstall -C ${B}/core/deps/ -so libparson ${D}${libdir}
    oe_libinstall -C ${B}/core/ -so libgateway ${D}${libdir}

    install -d ${D}${includedir}/azureiot
    install -m 0644 ${S}/core/inc/*.h ${D}${includedir}/azureiot
    install -m 0644 ${S}/core/inc/linux/*.h ${D}${includedir}/azureiot

    # Modules
    install -d ${D}${includedir}/azureiot/modules/common
    install -m 0644 ${S}/modules/common/*.h ${D}${includedir}/azureiot/modules/common

    # BLE Module
    install -d ${D}${libdir}/azureiot/modules/ble
    oe_libinstall -C ${B}/modules/ble/ -so libble ${D}${libdir}/azureiot/modules/ble/
    oe_libinstall -C ${B}/modules/ble/ -so libble_hl ${D}${libdir}/azureiot/modules/ble/

    install -d ${D}${includedir}/azureiot/modules/ble
    install -m 0644 ${S}/modules/ble/inc/*.h ${D}${includedir}/azureiot/modules/ble
    install -m 0644 ${S}/modules/ble/deps/linux/dbus-bluez/inc/*.h ${D}${includedir}/azureiot/modules/ble

    # Hello World Module
    install -d ${D}${libdir}/azureiot/modules/hello_world
    oe_libinstall -C ${B}/modules/hello_world/ -so libhello_world ${D}${libdir}/azureiot/modules/hello_world/
    oe_libinstall -C ${B}/modules/hello_world/ -so libhello_world_hl ${D}${libdir}/azureiot/modules/hello_world/

    install -d ${D}${includedir}/azureiot/modules/hello_world
    install -m 0644 ${S}/modules/hello_world/inc/*.h ${D}${includedir}/azureiot/modules/hello_world

    # Identity Map Module
    install -d ${D}${libdir}/azureiot/modules/identitymap
    oe_libinstall -C ${B}/modules/identitymap/ -so libidentity_map ${D}${libdir}/azureiot/modules/identitymap/
    oe_libinstall -C ${B}/modules/identitymap/ -so libidentity_map_hl ${D}${libdir}/azureiot/modules/identitymap/

    install -d ${D}${includedir}/azureiot/modules/identitymap
    install -m 0644 ${S}/modules/identitymap/inc/*.h ${D}${includedir}/azureiot/modules/identitymap

    # IoT Hub HTTP Module
    install -d ${D}${libdir}/azureiot/modules/iothubhttp
    oe_libinstall -C ${B}/modules/iothubhttp/ -so libiothubhttp ${D}${libdir}/azureiot/modules/iothubhttp/
    oe_libinstall -C ${B}/modules/iothubhttp/ -so libiothubhttp_hl ${D}${libdir}/azureiot/modules/iothubhttp/

    install -d ${D}${includedir}/azureiot/modules/iothubhttp
    install -m 0644 ${S}/modules/iothubhttp/inc/*.h ${D}${includedir}/azureiot/modules/iothubhttp

    # Logger Module
    install -d ${D}${libdir}/azureiot/modules/logger
    oe_libinstall -C ${B}/modules/logger/ -so liblogger ${D}${libdir}/azureiot/modules/logger/
    oe_libinstall -C ${B}/modules/logger/ -so liblogger_hl ${D}${libdir}/azureiot/modules/logger/

    install -d ${D}${includedir}/azureiot/modules/logger
    install -m 0644 ${S}/modules/logger/inc/*.h ${D}${includedir}/azureiot/modules/logger

    # Simulated Device Module
    install -d ${D}${libdir}/azureiot/modules/simulated_device
    oe_libinstall -C ${B}/modules/simulated_device/ -so libsimulated_device ${D}${libdir}/azureiot/modules/simulated_device/
    oe_libinstall -C ${B}/modules/simulated_device/ -so libsimulated_device_hl ${D}${libdir}/azureiot/modules/simulated_device/

    install -d ${D}${includedir}/azureiot/modules/simulated_device
    install -m 0644 ${S}/modules/simulated_device/inc/*.h ${D}${includedir}/azureiot/modules/simulated_device

    # Java
    if [ -e ${JAVA_LIB_DIR} ]; then
	install -d ${D}${libdir}/azureiot/bindings/java
    	oe_libinstall -C ${JAVA_LIB_DIR} -so libjava_module_host ${D}${libdir}/azureiot/bindings/java/
	oe_libinstall -C ${JAVA_LIB_DIR} -so libjava_module_host_hl ${D}${libdir}/azureiot/bindings/java/

	if [ -e ${JAVA_JAR_DIR} ]; then
	    cd ${JAVA_JAR_DIR}
	    jar_version=$(ls gateway-java-binding-*.jar | head -n 1 | cut -d '-' -f4)
	    jar_version="${jar_version%.jar}"
            oe_jarinstall -r ${JAVA_PN}-${jar_version}.jar gateway-java-binding-${jar_version}.jar ${JAVA_PN}.jar
        fi
    fi
}

RDEPENDS_${PN} = "glib-2.0 curl"
FILES_${PN} += "${libdir}/libgateway.so \
		${libdir}/libparson.so \
"
FILES_${PN}-dev += "${includedir}/azureiot"
FILES_${PN}-dbg += "${libdir}/azureiot/bindings/java/.debug \
		    ${libdir}/azureiot/modules/ble/.debug \
		    ${libdir}/azureiot/modules/hello_world/.debug \
		    ${libdir}/azureiot/modules/identitymap/.debug \
		    ${libdir}/azureiot/modules/iothubhttp/.debug \
		    ${libdir}/azureiot/modules/logger/.debug \
		    ${libdir}/azureiot/modules/simulated_device/.debug \
"

RDEPENDS_${PN}-modules += "bluez5"
FILES_${PN}-modules += "${libdir}/azureiot/modules/ble/*.so \
			${libdir}/azureiot/modules/hello_world/*.so \
			${libdir}/azureiot/modules/identitymap/*.so \
			${libdir}/azureiot/modules/iothubhttp/*.so \
			${libdir}/azureiot/modules/logger/*.so \
			${libdir}/azureiot/modules/simulated_device/*.so \
"

FILES_${PN}-java-binding += "${libdir}/azureiot/bindings/java/*.so \
			     ${datadir_java} \
"


INSANE_SKIP_${PN} += "rpaths"
INSANE_SKIP_${PN}-modules += "rpaths"
INSANE_SKIP_${PN}-java-binding += "rpaths"
