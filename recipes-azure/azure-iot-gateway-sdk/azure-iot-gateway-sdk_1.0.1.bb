DESCRIPTION = "Azure IoT Gateway SDK"

require azure-iot-gateway-sdk.inc
inherit cmake

DEPENDS = "\
	glib-2.0 \
	azure-iot-sdk-c \
	nanomsg \
"

SRC_URI += "\
	file://0001-Skip-adding-test-dependencies-if-not-required.patch \
	file://0002-Fix-nanomsg-detection.patch \
	file://0003-Include-parson-with-main-library.patch \
	file://0004-Update-sample-module-paths.patch \
	file://0005-Remove-parson-submodule-init.patch \
	file://azure-functions-sample.sh \
	file://ble-gateway-sample.sh \
	file://hello-world-sample.sh \
	file://simulated-device-cloud-upload-sample.sh \
	file://azure-functions-module.sh \
	file://ble-module.sh \
	file://hello-world-module.sh \
	file://identitymap-module.sh \
	file://iothub-module.sh \
	file://logger-module.sh \
	file://simulated-device-module.sh \
"

PR = "r0"

B = "${WORKDIR}/build"

PACKAGES = "\
	${PN} \
	${PN}-dev \
	${PN}-dbg \
	${PN}-modules \
	${PN}-modules-src \
	${PN}-samples \
	${PN}-samples-src \
	${PN}-java \
"

## Java ##
def get_jdk_arch(d):
    jdk_arch = bb.data.getVar('TRANSLATED_TARGET_ARCH', d, True)

    if jdk_arch == "x86-64":
        jdk_arch = "amd64"
    elif jdk_arch == "powerpc":
        jdk_arch = "ppc"
    elif jdk_arch == "powerpc64":
        jdk_arch = "ppc64"
    elif (jdk_arch == "i486" or jdk_arch == "i586" or jdk_arch == "i686"):
        jdk_arch = "i386"

    return jdk_arch

def get_jdk_home(d):
    jdk_home = bb.data.getVar("STAGING_LIBDIR", d, True)
    jdk_home += "/jvm/"

    if os.path.exists(jdk_home):
        for child in os.listdir(jdk_home):
            test_path = os.path.join(jdk_home, child)
            if os.path.isdir(test_path):
                jdk_home = test_path
                break

    return jdk_home

## Java ##
JAVA_LIB_DIR = "${B}/bindings/java/"
JDK_ARCH = "${@get_jdk_arch(d)}"
JDK_HOME = "${@get_jdk_home(d)}"

PACKAGECONFIG ??= "java bluetooth"
PACKAGECONFIG[java] = "-Denable_java_binding:BOOL=ON -DJDK_ARCH=${JDK_ARCH}, -Denable_java_binding:BOOL=OFF, openjdk-8, azure-iot-gateway-sdk-java-binding"
PACKAGECONFIG[bluetooth] = "-Denable_ble_module:BOOL=ON, -Denable_ble_module:BOOL=OFF, , bluez5"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Dinstall_modules:BOOL=ON -Dinstall_executables:BOOL=ON -Drun_as_a_service:BOOL=OFF"

do_configure_prepend() {
	# Java
	if ${@bb.utils.contains('PACKAGECONFIG','java','true','false',d)}; then
		export JAVA_HOME="${JDK_HOME}"
	fi
}

do_compile_prepend() {
	# Java
	if ${@bb.utils.contains('PACKAGECONFIG','java','true','false',d)}; then
		export JAVA_HOME="${JDK_HOME}"
	fi
}

do_install() {
    	# Core
    	install -d ${D}${libdir}
	oe_libinstall -C ${B}/core/ -so libgateway ${D}${libdir}

	install -d ${D}${includedir}/azureiot
	install -m 0644 ${S}/core/inc/*.h ${D}${includedir}/azureiot
	install -m 0644 ${S}/core/inc/linux/*.h ${D}${includedir}/azureiot
	install -m 0644 ${S}/core/inc/module_loaders/dynamic_loader.h ${D}${includedir}/azureiot
	
	if ${@bb.utils.contains('PACKAGECONFIG','java','true','false',d)}; then
		install -m 0644 ${S}/core/inc/module_loaders/java_loader.h ${D}${includedir}/azureiot
	fi

	# Modules
	install -d ${D}${includedir}/azureiot/modules/common
	install -m 0644 ${S}/modules/common/*.h ${D}${includedir}/azureiot/modules/common

	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/common
	install -m 0644 ${S}/modules/common/*.h ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/common/

	# Azure Functions Module
	install -d ${D}${exec_prefix}/lib/azureiot/modules/azure_functions
	oe_libinstall -C ${B}/modules/azure_functions/ -so libazure_functions ${D}${exec_prefix}/lib/azureiot/modules/azure_functions/

	install -d ${D}${includedir}/azureiot/modules/azure_functions
	install -m 0644 ${S}/modules/azure_functions/inc/*.h ${D}${includedir}/azureiot/modules/azure_functions

	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/azure_functions/src
	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/azure_functions/inc
	install -m 0644 ${S}/modules/azure_functions/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/azure_functions/src/
	install -m 0644 ${S}/modules/azure_functions/inc/*.h ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/azure_functions/inc/
	install -m 0755 ${WORKDIR}/azure-functions-module.sh ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/azure_functions/build.sh

	# BLE Module
	if [ -e ${B}/modules/ble/ ]; then
		install -d ${D}${exec_prefix}/lib/azureiot/modules/ble
		oe_libinstall -C ${B}/modules/ble/ -so libble ${D}${exec_prefix}/lib/azureiot/modules/ble/
		oe_libinstall -C ${B}/modules/ble/ -so libble_c2d ${D}${exec_prefix}/lib/azureiot/modules/ble/

		install -d ${D}${includedir}/azureiot/modules/ble
		install -m 0644 ${S}/modules/ble/inc/*.h ${D}${includedir}/azureiot/modules/ble
		install -m 0644 ${S}/modules/ble/deps/linux/dbus-bluez/inc/*.h ${D}${includedir}/azureiot/modules/ble

		install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/ble/src
		install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/ble/inc
		install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/ble/deps/dbus-bluez/src
		install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/ble/deps/dbus-bluez/inc
		install -m 0644 ${S}/modules/ble/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/ble/src/
		install -m 0644 ${S}/modules/ble/inc/*.h ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/ble/inc/
		install -m 0644 ${S}/modules/ble/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/ble/src/
		install -m 0644 ${S}/modules/ble/deps/linux/dbus-bluez/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/ble/deps/dbus-bluez/src/
		install -m 0644 ${S}/modules/ble/deps/linux/dbus-bluez/inc/*.h ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/ble/deps/dbus-bluez/inc/
		install -m 0755 ${WORKDIR}/ble-module.sh ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/ble/build.sh
	fi

	# Hello World Module
	install -d ${D}${exec_prefix}/lib/azureiot/modules/hello_world
	oe_libinstall -C ${B}/modules/hello_world/ -so libhello_world ${D}${exec_prefix}/lib/azureiot/modules/hello_world/

	install -d ${D}${includedir}/azureiot/modules/hello_world
	install -m 0644 ${S}/modules/hello_world/inc/*.h ${D}${includedir}/azureiot/modules/hello_world

	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/hello_world/src
	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/hello_world/inc
	install -m 0644 ${S}/modules/hello_world/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/hello_world/src/
	install -m 0644 ${S}/modules/hello_world/inc/*.h ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/hello_world/inc/
	install -m 0755 ${WORKDIR}/hello-world-module.sh ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/hello_world/build.sh

	# Identity Map Module
	install -d ${D}${exec_prefix}/lib/azureiot/modules/identitymap
	oe_libinstall -C ${B}/modules/identitymap/ -so libidentity_map ${D}${exec_prefix}/lib/azureiot/modules/identitymap/
	
	install -d ${D}${includedir}/azureiot/modules/identitymap
	install -m 0644 ${S}/modules/identitymap/inc/*.h ${D}${includedir}/azureiot/modules/identitymap

	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/identitymap/src
	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/identitymap/inc
	install -m 0644 ${S}/modules/identitymap/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/identitymap/src/
	install -m 0644 ${S}/modules/identitymap/inc/*.h ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/identitymap/inc/
	install -m 0755 ${WORKDIR}/identitymap-module.sh ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/identitymap/build.sh

	# IoT Hub Module
	install -d ${D}${exec_prefix}/lib/azureiot/modules/iothub
	oe_libinstall -C ${B}/modules/iothub/ -so libiothub ${D}${exec_prefix}/lib/azureiot/modules/iothub/

	install -d ${D}${includedir}/azureiot/modules/iothub
	install -m 0644 ${S}/modules/iothub/inc/*.h ${D}${includedir}/azureiot/modules/iothub

	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/iothub/src
	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/iothub/inc
	install -m 0644 ${S}/modules/iothub/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/iothub/src/
	install -m 0644 ${S}/modules/iothub/inc/*.h ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/iothub/inc/
	install -m 0755 ${WORKDIR}/iothub-module.sh ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/iothub/build.sh

	# Logger Module
	install -d ${D}${exec_prefix}/lib/azureiot/modules/logger
	oe_libinstall -C ${B}/modules/logger/ -so liblogger ${D}${exec_prefix}/lib/azureiot/modules/logger/

	install -d ${D}${includedir}/azureiot/modules/logger
	install -m 0644 ${S}/modules/logger/inc/*.h ${D}${includedir}/azureiot/modules/logger

	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/logger/src
	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/logger/inc
	install -m 0644 ${S}/modules/logger/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/logger/src/
	install -m 0644 ${S}/modules/logger/inc/*.h ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/logger/inc/
	install -m 0755 ${WORKDIR}/logger-module.sh ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/logger/build.sh

	# Simulated Device Module
	install -d ${D}${exec_prefix}/lib/azureiot/modules/simulated_device
	oe_libinstall -C ${B}/modules/simulated_device/ -so libsimulated_device ${D}${exec_prefix}/lib/azureiot/modules/simulated_device/

	install -d ${D}${includedir}/azureiot/modules/simulated_device
	install -m 0644 ${S}/modules/simulated_device/inc/*.h ${D}${includedir}/azureiot/modules/simulated_device

	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/simulated_device/src
	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/simulated_device/inc
	install -m 0644 ${S}/modules/simulated_device/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/simulated_device/src/
	install -m 0644 ${S}/modules/simulated_device/inc/*.h ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/simulated_device/inc/
	install -m 0755 ${WORKDIR}/simulated-device-module.sh ${D}${exec_prefix}/src/azureiotgatewaysdk/modules/simulated_device/build.sh

	# Azure Functions Sample
	install -d ${D}${datadir}/azureiotgatewaysdk/samples/azure_functions
	install -m 0755 ${B}/samples/azure_functions_sample/azure_functions_sample ${D}${datadir}/azureiotgatewaysdk/samples/azure_functions/azure_functions
	install -m 0644 ${S}/samples/azure_functions_sample/src/azure_functions_lin.json ${D}${datadir}/azureiotgatewaysdk/samples/azure_functions/azure_functions.json

	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/azure_functions/src
	install -m 0644 ${S}/samples/azure_functions_sample/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/azure_functions/src/
	install -m 0644 ${S}/samples/azure_functions_sample/src/azure_functions_lin.json ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/azure_functions/src/azure_functions.json
	install -m 0755 ${WORKDIR}/azure-functions-sample.sh ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/azure_functions/build.sh

	# Hello World Sample
	install -d ${D}${datadir}/azureiotgatewaysdk/samples/hello_world
	install -m 0755 ${B}/samples/hello_world/hello_world_sample ${D}${datadir}/azureiotgatewaysdk/samples/hello_world/hello_world
	install -m 0644 ${S}/samples/hello_world/src/hello_world_lin.json ${D}${datadir}/azureiotgatewaysdk/samples/hello_world/hello_world.json

	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/hello_world/src
	install -m 0644 ${S}/samples/hello_world/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/hello_world/src/
	install -m 0644 ${S}/samples/hello_world/src/hello_world_lin.json ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/hello_world/src/hello_world.json
	install -m 0755 ${WORKDIR}/hello-world-sample.sh ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/hello_world/build.sh

	# Simulated Device Cloud Upload Sample
	install -d ${D}${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload
	install -m 0755 ${B}/samples/simulated_device_cloud_upload/simulated_device_cloud_upload_sample ${D}${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload/simulated_device_cloud_upload
	install -m 0644 ${S}/samples/simulated_device_cloud_upload/src/simulated_device_cloud_upload_lin.json ${D}${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload/simulated_device_cloud_upload.json

	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/simulated_device_cloud_upload/src
	install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/simulated_device_cloud_upload/inc
	install -m 0644 ${S}/samples/simulated_device_cloud_upload/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/simulated_device_cloud_upload/src/
	install -m 0644 ${S}/samples/simulated_device_cloud_upload/inc/*.h ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/simulated_device_cloud_upload/inc/
	install -m 0644 ${S}/samples/simulated_device_cloud_upload/src/simulated_device_cloud_upload_lin.json ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/simulated_device_cloud_upload/src/simulated_device_cloud_upload.json
	install -m 0755 ${WORKDIR}/simulated-device-cloud-upload-sample.sh ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/simulated_device_cloud_upload/build.sh

	# BLE Gateway Sample
	if [ -e ${B}/samples/ble_gateway/ ]; then
		install -d ${D}${datadir}/azureiotgatewaysdk/samples/ble_gateway
		install -m 0755 ${B}/samples/ble_gateway/ble_gateway ${D}${datadir}/azureiotgatewaysdk/samples/ble_gateway/ble_gateway
		install -m 0644 ${B}/samples/ble_gateway/ble_printer/libble_printer.so ${D}${datadir}/azureiotgatewaysdk/samples/ble_gateway/
		install -m 0644 ${S}/samples/ble_gateway/src/gateway_sample.json ${D}${datadir}/azureiotgatewaysdk/samples/ble_gateway/ble_gateway.json

		install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/ble_gateway/src
		install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/ble_gateway/ble_printer/src
		install -d ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/ble_gateway/ble_printer/inc
		install -m 0644 ${S}/samples/ble_gateway/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/ble_gateway/src/
		install -m 0644 ${S}/samples/ble_gateway/src/gateway_sample.json ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/ble_gateway/src/gateway.json
		install -m 0644 ${S}/samples/ble_gateway/ble_printer/src/*.c ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/ble_gateway/ble_printer/src/
		install -m 0644 ${S}/samples/ble_gateway/ble_printer/inc/*.h ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/ble_gateway/ble_printer/inc/
		install -m 0755 ${WORKDIR}/ble-gateway-sample.sh ${D}${exec_prefix}/src/azureiotgatewaysdk/samples/ble_gateway/build.sh
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

FILES_${PN}-modules-src += "\
	${exec_prefix}/src/azureiotgatewaysdk/modules \
"

RDEPENDS_${PN}-samples += "azure-iot-gateway-sdk-modules"
FILES_${PN}-samples += "\
	${datadir}/azureiotgatewaysdk/samples/azure_functions/* \
	${datadir}/azureiotgatewaysdk/samples/ble_gateway/* \
	${datadir}/azureiotgatewaysdk/samples/hello_world/* \
	${datadir}/azureiotgatewaysdk/samples/simulated_device_cloud_upload/* \
"

FILES_${PN}-samples-src += "\
	${exec_prefix}/src/azureiotgatewaysdk/samples \
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
