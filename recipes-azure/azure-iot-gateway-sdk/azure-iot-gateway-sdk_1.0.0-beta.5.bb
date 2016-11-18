DESCRIPTION = "Azure IoT Gateway SDK"

require azure-iot-gateway-sdk.inc
inherit cmake pkgconfig

DEPENDS = "\
	glib-2.0 \
	azure-iot-sdk \
	nanomsg \
"

SRC_URI += "\
	file://Update-sample-module-paths.patch \
	file://Skip-build-deps-if-provided.patch \
	file://Add-Parson-to-gateway-lib.patch \
	file://Add-missing-cmake-functions.patch \
	file://Fix-gateway-target.patch \
	file://Skip-nanomsg-build-if-provided.patch \
"

PR = "r0"

B = "${WORKDIR}/build"

PACKAGES = "\
	${PN} \
	${PN}-dev \
	${PN}-dbg \
	${PN}-modules \
	${PN}-samples \
	${PN}-samples-src \
	${PN}-java \
"

AZURE_INCLUDE_DIR = "${STAGING_INCDIR}/azureiot"
NN_INCLUDE_DIR = "${STAGING_INCDIR}/nanomsg"

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

## Java ##
JAVA_LIB_DIR = "${B}/bindings/java/"
JDK_ARCH = "${@get_jdk_arch(d)}"

PACKAGECONFIG ??= "java bluetooth"
PACKAGECONFIG[java] = "-Denable_java_binding:BOOL=ON -DJDK_ARCH=${JDK_ARCH}, -Denable_java_binding:BOOL=OFF, openjdk-8, openjdk-8-jdk azure-iot-gateway-sdk-java-binding"
PACKAGECONFIG[bluetooth] = "-Denable_ble_module:BOOL=ON, -Denable_ble_module:BOOL=OFF, , bluez5"

EXTRA_OECMAKE = "-DAZURE_INCLUDE_DIR=${AZURE_INCLUDE_DIR} -DNN_INCLUDE_DIR=${NN_INCLUDE_DIR} -DBUILD_SHARED_LIBS:BOOL=ON -Drun_e2e_tests:BOOL=OFF -Drun_valgrind:BOOL=0 -Dinstall_modules:BOOL=ON -Dinstall_executables:BOOL=ON -Drun_as_a_service:BOOL=ON -Dskip_unittests:BOOL=ON"

do_configure_prepend() {
	# Java
	if ${@bb.utils.contains('PACKAGECONFIG','java','true','false',d)}; then
		export JAVA_HOME="${STAGING_LIBDIR}/jvm/java-8-openjdk"
	fi
}

do_install() {
    	# Core
    	install -d ${D}${libdir}
	oe_libinstall -C ${B}/core/ -so libgateway ${D}${libdir}

	install -d ${D}${includedir}/azureiot
	install -m 0644 ${S}/core/inc/*.h ${D}${includedir}/azureiot
	install -m 0644 ${S}/core/inc/linux/*.h ${D}${includedir}/azureiot

	# Modules
	install -d ${D}${includedir}/azureiot/modules/common
	install -m 0644 ${S}/modules/common/*.h ${D}${includedir}/azureiot/modules/common

	# Azure Functions Module
	install -d ${D}${exec_prefix}/lib/azureiot/modules/azure_functions
	oe_libinstall -C ${B}/modules/azure_functions/ -so libazure_functions ${D}${exec_prefix}/lib/azureiot/modules/azure_functions/

	install -d ${D}${includedir}/azureiot/modules/azure_functions
	install -m 0644 ${S}/modules/azure_functions/inc/*.h ${D}${includedir}/azureiot/modules/azure_functions

	# BLE Module
	if [ -e ${B}/modules/ble/ ]; then
		install -d ${D}${exec_prefix}/lib/azureiot/modules/ble
		oe_libinstall -C ${B}/modules/ble/ -so libble ${D}${exec_prefix}/lib/azureiot/modules/ble/
		oe_libinstall -C ${B}/modules/ble/ -so libble_c2d ${D}${exec_prefix}/lib/azureiot/modules/ble/

		install -d ${D}${includedir}/azureiot/modules/ble
		install -m 0644 ${S}/modules/ble/inc/*.h ${D}${includedir}/azureiot/modules/ble
		install -m 0644 ${S}/modules/ble/deps/linux/dbus-bluez/inc/*.h ${D}${includedir}/azureiot/modules/ble
	fi

	# Hello World Module
	install -d ${D}${exec_prefix}/lib/azureiot/modules/hello_world
	oe_libinstall -C ${B}/modules/hello_world/ -so libhello_world ${D}${exec_prefix}/lib/azureiot/modules/hello_world/

	install -d ${D}${includedir}/azureiot/modules/hello_world
	install -m 0644 ${S}/modules/hello_world/inc/*.h ${D}${includedir}/azureiot/modules/hello_world

	# Identity Map Module
	install -d ${D}${exec_prefix}/lib/azureiot/modules/identitymap
	oe_libinstall -C ${B}/modules/identitymap/ -so libidentity_map ${D}${exec_prefix}/lib/azureiot/modules/identitymap/
	
	install -d ${D}${includedir}/azureiot/modules/identitymap
	install -m 0644 ${S}/modules/identitymap/inc/*.h ${D}${includedir}/azureiot/modules/identitymap

	# IoT Hub Module
	install -d ${D}${exec_prefix}/lib/azureiot/modules/iothub
	oe_libinstall -C ${B}/modules/iothub/ -so libiothub ${D}${exec_prefix}/lib/azureiot/modules/iothub/

	install -d ${D}${includedir}/azureiot/modules/iothub
	install -m 0644 ${S}/modules/iothub/inc/*.h ${D}${includedir}/azureiot/modules/iothub

	# Logger Module
	install -d ${D}${exec_prefix}/lib/azureiot/modules/logger
	oe_libinstall -C ${B}/modules/logger/ -so liblogger ${D}${exec_prefix}/lib/azureiot/modules/logger/

	install -d ${D}${includedir}/azureiot/modules/logger
	install -m 0644 ${S}/modules/logger/inc/*.h ${D}${includedir}/azureiot/modules/logger

	# Simulated Device Module
	install -d ${D}${exec_prefix}/lib/azureiot/modules/simulated_device
	oe_libinstall -C ${B}/modules/simulated_device/ -so libsimulated_device ${D}${exec_prefix}/lib/azureiot/modules/simulated_device/

	install -d ${D}${includedir}/azureiot/modules/simulated_device
	install -m 0644 ${S}/modules/simulated_device/inc/*.h ${D}${includedir}/azureiot/modules/simulated_device

	# Azure Functions Sample
	install -d ${D}${datadir}/azureiotgatewaysdk/samples/azure_functions
	install -m 0755 ${B}/samples/azure_functions_sample/azure_functions_sample ${D}${datadir}/azureiotgatewaysdk/samples/azure_functions/azure_functions
	install -m 0644 ${S}/samples/azure_functions_sample/src/azure_functions_lin.json ${D}${datadir}/azureiotgatewaysdk/samples/azure_functions/azure_functions.json

	install -d ${D}${exec_prefix}/src/azureiot/samples/azure_functions/src
	install -m 0644 ${S}/samples/azure_functions_sample/src/*.c ${D}${exec_prefix}/src/azureiot/samples/azure_functions/src/
	install -m 0644 ${S}/samples/azure_functions_sample/src/azure_functions_lin.json ${D}${exec_prefix}/src/azureiot/samples/azure_functions/src/azure_functions.json

	# Hello World Sample
	install -d ${D}${datadir}/azureiotgatewaysdk/samples/hello_world
	install -m 0755 ${B}/samples/hello_world/hello_world_sample ${D}${datadir}/azureiotgatewaysdk/samples/hello_world/hello_world
	install -m 0644 ${S}/samples/hello_world/src/hello_world_lin.json ${D}${datadir}/azureiotgatewaysdk/samples/hello_world/hello_world.json

	install -d ${D}${exec_prefix}/src/azureiot/samples/hello_world/src
	install -m 0644 ${S}/samples/hello_world/src/*.c ${D}${exec_prefix}/src/azureiot/samples/hello_world/src/
	install -m 0644 ${S}/samples/hello_world/src/hello_world_lin.json ${D}${exec_prefix}/src/azureiot/samples/hello_world/src/hello_world.json

	# Simulated Device Cloud Upload Sample
	install -d ${D}${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload
	install -m 0755 ${B}/samples/simulated_device_cloud_upload/simulated_device_cloud_upload_sample ${D}${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload/simulated_device_cloud_upload
	install -m 0644 ${S}/samples/simulated_device_cloud_upload/src/simulated_device_cloud_upload_lin.json ${D}${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload/simulated_device_cloud_upload.json

	install -d ${D}${exec_prefix}/src/azureiot/samples/simulated_device_cloud_upload/src
	install -d ${D}${exec_prefix}/src/azureiot/samples/simulated_device_cloud_upload/inc
	install -m 0644 ${S}/samples/simulated_device_cloud_upload/src/*.c ${D}${exec_prefix}/src/azureiot/samples/simulated_device_cloud_upload/src/
	install -m 0644 ${S}/samples/simulated_device_cloud_upload/inc/*.h ${D}${exec_prefix}/src/azureiot/samples/simulated_device_cloud_upload/inc/
	install -m 0644 ${S}/samples/simulated_device_cloud_upload/src/simulated_device_cloud_upload_lin.json ${D}${exec_prefix}/src/azureiot/samples/simulated_device_cloud_upload/src/simulated_device_cloud_upload.json

	# BLE Gateway Sample
	if [ -e ${B}/samples/ble_gateway/ ]; then
		install -d ${D}${datadir}/azureiotgatewaysdk/samples/ble_gateway
		install -m 0755 ${B}/samples/ble_gateway/ble_gateway ${D}${datadir}/azureiotgatewaysdk/samples/ble_gateway/ble_gateway
		install -m 0644 ${B}/samples/ble_gateway/ble_printer/libble_printer.so ${D}${datadir}/azureiotgatewaysdk/samples/ble_gateway/
		install -m 0644 ${S}/samples/ble_gateway/src/gateway_sample.json ${D}${datadir}/azureiotgatewaysdk/samples/ble_gateway/ble_gateway.json

		install -d ${D}${exec_prefix}/src/azureiot/samples/ble_gateway/src
		install -d ${D}${exec_prefix}/src/azureiot/samples/ble_gateway/ble_printer/src
		install -d ${D}${exec_prefix}/src/azureiot/samples/ble_gateway/ble_printer/inc
		install -m 0644 ${S}/samples/ble_gateway/src/*.c ${D}${exec_prefix}/src/azureiot/samples/ble_gateway/src/
		install -m 0644 ${S}/samples/ble_gateway/src/gateway_sample.json ${D}${exec_prefix}/src/azureiot/samples/ble_gateway/src/gateway.json
		install -m 0644 ${S}/samples/ble_gateway/ble_printer/src/*.c ${D}${exec_prefix}/src/azureiot/samples/ble_gateway/ble_printer/src/
		install -m 0644 ${S}/samples/ble_gateway/ble_printer/inc/*.h ${D}${exec_prefix}/src/azureiot/samples/ble_gateway/ble_printer/inc/
	fi

	# Java
	if [ -e ${JAVA_LIB_DIR} ]; then
		install -d ${D}${exec_prefix}/lib/azureiot/bindings/java
    		oe_libinstall -C ${JAVA_LIB_DIR} -so libjava_module_host ${D}${exec_prefix}/lib/azureiot/bindings/java/
	fi
}

RDEPENDS_${PN} = "glib-2.0 curl"
FILES_${PN} += "\
	${libdir}/libgateway.so \
"

FILES_${PN}-dev += "\
	${includedir}/azureiot \
"

FILES_${PN}-dbg += "\
	${exec_prefix}/lib/azureiot/bindings/java/.debug \
	${exec_prefix}/lib/azureiot/modules/azure_functions/.debug \
	${exec_prefix}/lib/azureiot/modules/ble/.debug \
	${exec_prefix}/lib/azureiot/modules/hello_world/.debug \
	${exec_prefix}/lib/azureiot/modules/identitymap/.debug \
	${exec_prefix}/lib/azureiot/modules/iothub/.debug \
	${exec_prefix}/lib/azureiot/modules/logger/.debug \
	${exec_prefix}/lib/azureiot/modules/simulated_device/.debug \
	${datadir}/azureiotgatewaysdk/samples/azure_functions/.debug \
	${datadir}/azureiotgatewaysdk/samples/ble_gateway/.debug \
	${datadir}/azureiotgatewaysdk/samples/hello_world/.debug \
	${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload/.debug \
"

FILES_${PN}-modules += "\
	${exec_prefix}/lib/azureiot/modules/azure_functions/libazure_functions.so \
	${exec_prefix}/lib/azureiot/modules/ble/libble.so \
	${exec_prefix}/lib/azureiot/modules/ble/libble_c2d.so \
	${exec_prefix}/lib/azureiot/modules/hello_world/libhello_world.so \
	${exec_prefix}/lib/azureiot/modules/identitymap/libidentity_map.so \
	${exec_prefix}/lib/azureiot/modules/iothub/libiothub.so \
	${exec_prefix}/lib/azureiot/modules/logger/liblogger.so \
	${exec_prefix}/lib/azureiot/modules/simulated_device/libsimulated_device.so \
"

RDEPENDS_${PN}-samples += "azure-iot-gateway-sdk-modules"
FILES_${PN}-samples += "\
	${datadir}/azureiotgatewaysdk/samples/azure_functions/* \
	${datadir}/azureiotgatewaysdk/samples/ble_gateway/* \
	${datadir}/azureiotgatewaysdk/samples/hello_world/* \
	${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload/* \
"

FILES_${PN}-samples-src += "\
	${exec_prefix}/src/azureiot/ \
"

FILES_${PN}-java += "\
	${exec_prefix}/lib/azureiot/bindings/java/*.so \
"

RRECOMMENDS_azure-iot-gateway-sdk-dev = "glibc-dev util-linux-dev curl-dev glib-2.0-dev azure-iot-sdk-c-dev"

RRECOMMENDS_azure-iot-gateway-sdk-dev[nodeprrecs] = "1"

INSANE_SKIP_${PN} += "rpaths"
INSANE_SKIP_${PN}-dbg += "libdir"
INSANE_SKIP_${PN}-modules += "rpaths libdir"
INSANE_SKIP_${PN}-samples += "rpaths libdir"
INSANE_SKIP_${PN}-java += "rpaths libdir"
