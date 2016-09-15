DESCRIPTION = "Azure IoT Gateway SDK"
HOMEPAGE = "https://github.com/Azure/azure-iot-gateway-sdk"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://License.txt;md5=9cc1d02a339a3e756ac7975262cf739d"

DEPENDS = "glib-2.0 curl util-linux azure-iot-sdk"

inherit cmake pkgconfig java

SRC_URI = "gitsm://github.com/Azure/azure-iot-gateway-sdk.git \
	   file://cmake_fixes.patch \
	   file://module_path.patch \
"
SRCREV = "d749101c43baa8885f3ba7bf0d64d095de8d2d82"

PR = "r4"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg ${PN}-modules ${PN}-samples ${PN}-java-binding"

AZURE_INCLUDE_DIR = "${STAGING_INCDIR}/azureiot"

## Java ##
def get_jdk_arch(d):
    import bb

    jdk_arch = bb.data.getVar('TRANSLATED_TARGET_ARCH', d, 1)
    if jdk_arch == "x86-64":
        jdk_arch = "amd64"
    elif jdk_arch == "powerpc":
        jdk_arch = "ppc"
    elif jdk_arch == "powerpc64":
        jdk_arch = "ppc64"
    elif (jdk_arch == "i486" or jdk_arch == "i586" or jdk_arch == "i686"):
        jdk_arch = "i386"

    return jdk_arch

JAVA_SRC_DIR = "${S}/bindings/java/gateway-java-binding"
JAVA_LIB_DIR = "${B}/bindings/java/"
JAVA_JAR_DIR = "${JAVA_SRC_DIR}/target"
JAVA_PN = "gateway-java-binding"
JDK_ARCH = "${@get_jdk_arch(d)}"

PACKAGECONFIG ??= "java"
PACKAGECONFIG[java] = "-Denable_java_binding:BOOL=ON -DJDK_ARCH=${JDK_ARCH}, -Denable_java_binding:BOOL=OFF, maven-native icedtea7-native openjdk-8"

EXTRA_OECMAKE = "-DIOTHUB_CLIENT_INCLUDE_DIR=${AZURE_INCLUDE_DIR} -DSHARED_UTIL_INCLUDE_DIR=${AZURE_INCLUDE_DIR} -DMQTT_INCLUDE_DIR=${AZURE_INCLUDE_DIR} -DUAMQP_INCLUDE_DIR=${AZURE_INCLUDE_DIR} -DBUILD_SHARED_LIBS:BOOL=ON -Drun_e2e_tests:BOOL=OFF -Drun_valgrind:BOOL=0 -Dinstall_executables:BOOL=ON -Drun_as_a_service:BOOL=ON -Dskip_unittests:BOOL=ON"

do_configure_prepend() {
	# Java
	if ${@bb.utils.contains('PACKAGECONFIG','java','true','false',d)}; then
		export JAVA_HOME="${STAGING_LIBDIR_JVM}/java-8-openjdk"
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
    oe_libinstall -C ${B}/core/ -so libgateway ${D}${libdir}

    install -d ${D}${includedir}/azureiot
    install -m 0644 ${S}/core/inc/*.h ${D}${includedir}/azureiot
    install -m 0644 ${S}/core/inc/internal/*.h ${D}${includedir}/azureiot
    install -m 0644 ${S}/core/inc/linux/*.h ${D}${includedir}/azureiot

    # Modules
    install -d ${D}${includedir}/azureiot/modules/common
    install -m 0644 ${S}/modules/common/*.h ${D}${includedir}/azureiot/modules/common

    # BLE Module
    install -d ${D}${exec_prefix}/lib/azureiot/modules/ble
    oe_libinstall -C ${B}/modules/ble/ -so libble ${D}${exec_prefix}/lib/azureiot/modules/ble/
    oe_libinstall -C ${B}/modules/ble/ -so libble_c2d ${D}${exec_prefix}/lib/azureiot/modules/ble/
    oe_libinstall -C ${B}/modules/ble/ -so libble_hl ${D}${exec_prefix}/lib/azureiot/modules/ble/

    install -d ${D}${includedir}/azureiot/modules/ble
    install -m 0644 ${S}/modules/ble/inc/*.h ${D}${includedir}/azureiot/modules/ble
    install -m 0644 ${S}/modules/ble/deps/linux/dbus-bluez/inc/*.h ${D}${includedir}/azureiot/modules/ble

    # Hello World Module
    install -d ${D}${exec_prefix}/lib/azureiot/modules/hello_world
    oe_libinstall -C ${B}/modules/hello_world/ -so libhello_world ${D}${exec_prefix}/lib/azureiot/modules/hello_world/
    oe_libinstall -C ${B}/modules/hello_world/ -so libhello_world_hl ${D}${exec_prefix}/lib/azureiot/modules/hello_world/

    install -d ${D}${includedir}/azureiot/modules/hello_world
    install -m 0644 ${S}/modules/hello_world/inc/*.h ${D}${includedir}/azureiot/modules/hello_world

    # Identity Map Module
    install -d ${D}${exec_prefix}/lib/azureiot/modules/identitymap
    oe_libinstall -C ${B}/modules/identitymap/ -so libidentity_map ${D}${exec_prefix}/lib/azureiot/modules/identitymap/
    oe_libinstall -C ${B}/modules/identitymap/ -so libidentity_map_hl ${D}${exec_prefix}/lib/azureiot/modules/identitymap/

    install -d ${D}${includedir}/azureiot/modules/identitymap
    install -m 0644 ${S}/modules/identitymap/inc/*.h ${D}${includedir}/azureiot/modules/identitymap

    # IoT Hub Module
    install -d ${D}${exec_prefix}/lib/azureiot/modules/iothub
    oe_libinstall -C ${B}/modules/iothub/ -so libiothub ${D}${exec_prefix}/lib/azureiot/modules/iothub/
    oe_libinstall -C ${B}/modules/iothub/ -so libiothub_hl ${D}${exec_prefix}/lib/azureiot/modules/iothub/

    install -d ${D}${includedir}/azureiot/modules/iothub
    install -m 0644 ${S}/modules/iothub/inc/*.h ${D}${includedir}/azureiot/modules/iothub

    # Logger Module
    install -d ${D}${exec_prefix}/lib/azureiot/modules/logger
    oe_libinstall -C ${B}/modules/logger/ -so liblogger ${D}${exec_prefix}/lib/azureiot/modules/logger/
    oe_libinstall -C ${B}/modules/logger/ -so liblogger_hl ${D}${exec_prefix}/lib/azureiot/modules/logger/

    install -d ${D}${includedir}/azureiot/modules/logger
    install -m 0644 ${S}/modules/logger/inc/*.h ${D}${includedir}/azureiot/modules/logger

    # Simulated Device Module
    install -d ${D}${exec_prefix}/lib/azureiot/modules/simulated_device
    oe_libinstall -C ${B}/modules/simulated_device/ -so libsimulated_device ${D}${exec_prefix}/lib/azureiot/modules/simulated_device/
    oe_libinstall -C ${B}/modules/simulated_device/ -so libsimulated_device_hl ${D}${exec_prefix}/lib/azureiot/modules/simulated_device/

    install -d ${D}${includedir}/azureiot/modules/simulated_device
    install -m 0644 ${S}/modules/simulated_device/inc/*.h ${D}${includedir}/azureiot/modules/simulated_device

    # Hello World Sample
    install -d ${D}${datadir}/azureiotgatewaysdk/samples/hello_world
    install -m 0755 ${B}/samples/hello_world/hello_world_sample ${D}${datadir}/azureiotgatewaysdk/samples/hello_world/hello_world
    install -m 0644 ${S}/samples/hello_world/src/hello_world_lin.json ${D}${datadir}/azureiotgatewaysdk/samples/hello_world/hello_world.json

    # Simulated Device Cloud Upload Sample
    install -d ${D}${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload
    install -m 0755 ${B}/samples/simulated_device_cloud_upload/simulated_device_cloud_upload_sample ${D}${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload/simulated_device_cloud_upload
    install -m 0644 ${S}/samples/simulated_device_cloud_upload/src/simulated_device_cloud_upload_lin.json ${D}${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload/simulated_device_cloud_upload.json

    # BLE Gateway Sample
    install -d ${D}${datadir}/azureiotgatewaysdk/samples/ble_gateway_hl
    install -m 0755 ${B}/samples/ble_gateway_hl/ble_gateway_hl ${D}${datadir}/azureiotgatewaysdk/samples/ble_gateway_hl/ble_gateway_hl
    install -m 0644 ${B}/samples/ble_gateway_hl/ble_printer/libble_printer.so ${D}${datadir}/azureiotgatewaysdk/samples/ble_gateway_hl/
    install -m 0644 ${S}/samples/ble_gateway_hl/src/gateway_sample.json ${D}${datadir}/azureiotgatewaysdk/samples/ble_gateway_hl/ble_gateway.json

    # Java
    if [ -e ${JAVA_LIB_DIR} ]; then
	install -d ${D}${exec_prefix}/lib/azureiot/bindings/java
    	oe_libinstall -C ${JAVA_LIB_DIR} -so libjava_module_host ${D}${exec_prefix}/lib/azureiot/bindings/java/
	oe_libinstall -C ${JAVA_LIB_DIR} -so libjava_module_host_hl ${D}${exec_prefix}/lib/azureiot/bindings/java/

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
"
FILES_${PN}-dev += "${includedir}/azureiot"
FILES_${PN}-dbg += "${exec_prefix}/lib/azureiot/bindings/java/.debug \
		    ${exec_prefix}/lib/azureiot/modules/ble/.debug \
		    ${exec_prefix}/lib/azureiot/modules/hello_world/.debug \
		    ${exec_prefix}/lib/azureiot/modules/identitymap/.debug \
		    ${exec_prefix}/lib/azureiot/modules/iothub/.debug \
		    ${exec_prefix}/lib/azureiot/modules/logger/.debug \
		    ${exec_prefix}/lib/azureiot/modules/simulated_device/.debug \
		    ${exec_prefix}/lib/azureiot/bindings/java/.debug \
		    ${datadir}/azureiotgatewaysdk/samples/ble_gateway_hl/.debug \
		    ${datadir}/azureiotgatewaysdk/samples/hello_world/.debug \
		    ${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload/.debug \
"

RDEPENDS_${PN}-modules += "bluez5"
FILES_${PN}-modules += "${exec_prefix}/lib/azureiot/modules/ble/libble.so \
			${exec_prefix}/lib/azureiot/modules/ble/libble_c2d.so \
			${exec_prefix}/lib/azureiot/modules/ble/libble_hl.so \
			${exec_prefix}/lib/azureiot/modules/hello_world/libhello_world.so \
			${exec_prefix}/lib/azureiot/modules/hello_world/libhello_world_hl.so \
			${exec_prefix}/lib/azureiot/modules/identitymap/libidentity_map.so \
			${exec_prefix}/lib/azureiot/modules/identitymap/libidentity_map_hl.so \
			${exec_prefix}/lib/azureiot/modules/iothub/libiothub.so \
			${exec_prefix}/lib/azureiot/modules/iothub/libiothub_hl.so \
			${exec_prefix}/lib/azureiot/modules/logger/liblogger.so \
			${exec_prefix}/lib/azureiot/modules/logger/liblogger_hl.so \
			${exec_prefix}/lib/azureiot/modules/simulated_device/libsimulated_device.so \
			${exec_prefix}/lib/azureiot/modules/simulated_device/libsimulated_device_hl.so \
"

RDEPENDS_${PN}-samples += "azure-iot-gateway-sdk-modules"
FILES_${PN}-samples += "${datadir}/azureiotgatewaysdk/samples/ble_gateway_hl/* \
			${datadir}/azureiotgatewaysdk/samples/hello_world/* \
			${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload/* \
"

RDEPENDS_${PN}-java-binding += "openjdk-8-common"
FILES_${PN}-java-binding += "${exec_prefix}/lib/azureiot/bindings/java/*.so \
			     ${datadir_java} \
"

RRECOMMENDS_azure-iot-gateway-sdk-dev = "glibc-dev util-linux-dev curl-dev bluez5-dev glib-2.0-dev azure-iot-sdk-dev"
RRECOMMENDS_azure-iot-gateway-sdk-dev[nodeprrecs] = "1"

INSANE_SKIP_${PN} += "rpaths"
INSANE_SKIP_${PN}-dbg += "libdir"
INSANE_SKIP_${PN}-modules += "rpaths libdir"
INSANE_SKIP_${PN}-samples += "rpaths libdir"
INSANE_SKIP_${PN}-java-binding += "rpaths libdir"
