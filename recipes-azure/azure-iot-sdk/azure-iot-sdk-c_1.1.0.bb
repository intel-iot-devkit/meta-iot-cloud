DESCRIPTION = "Microsoft Azure IoT SDKs and libraries for C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

inherit cmake

DEPENDS = "\
	azure-c-shared-utility \
	azure-uamqp-c \
	azure-umqtt-c \
"

SRC_URI = "\
	gitsm://github.com/Azure/azure-iot-sdk-c.git \
	file://0001-Skip-building-dependencies-if-provided.patch \
"
SRCREV = "116d971f17a64d79ca745b46d707c8210dbe3437"

PR = "r3"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"
AZURE_INCLUDE_DIR = "${STAGING_INCDIR}/azureiot"

# List of packages to build
PACKAGES = "\
	${PN} \
	${PN}-dev \
	${PN}-dbg \
"

## CMake ##
EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -DAZURE_INCLUDE_DIR=${AZURE_INCLUDE_DIR} -Dskip_unittests:BOOL=ON -Duse_installed_dependencies:BOOL=ON"

FILES_${PN} = "\
	${libdir}/libiothub_client.so \
	${libdir}/libserializer.so \
	${libdir}/libiothub_service_client.so \
	${libdir}/libiothub_client_amqp_transport.so \
	${libdir}/libiothub_client_http_transport.so \
	${libdir}/libiothub_client_mqtt_transport.so \
	${libdir}/libiothub_client_amqp_transport.so \
"
RDEPENDS_${PN}-dev += "azure-iot-sdk-c"
FILES_${PN}-dev += "\
	${includedir} \
	${exec_prefix}/cmake \
"
FILES_${PN}-dbg += "\
	${libdir}/.debug \
	/usr/src/debug \
"

INSANE_SKIP_${PN} += "rpaths"

RRECOMMENDS_azure-iot-sdk-c-dev = "glibc-dev azure-c-shared-utility-dev azure-uamqp-c-dev azure-umqtt-c-dev"
RRECOMMENDS_azure-iot-sdk-c-dev[nodeprrecs] = "1"
