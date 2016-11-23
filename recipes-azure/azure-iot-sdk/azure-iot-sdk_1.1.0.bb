DESCRIPTION = "Microsoft Azure IoT device SDKs"

require azure-iot-sdk.inc
inherit cmake pkgconfig python-dir

DEPENDS = "azure-c-shared-utility"

SRC_URI += "\
	file://Skip-unit-tests-if-requested.patch \
	file://Skip-building-dependencies-if-provided.patch \
"

PR = "r0"

B = "${WORKDIR}/build"

## C ##
C_SAMPLES_DIR = "${B}/iothub_client/samples"
AMQP_SAMPLES_DIR = "${B}/azure-uamqp-c/samples"
MQTT_SAMPLES_DIR = "${B}/azure-umqtt-c/samples"
SERIALIZER_SAMPLES_DIR = "${B}/serializer/samples"
AZURE_INCLUDE_DIR = "${STAGING_INCDIR}/azureiot"

# List of packages to build
PACKAGES = "\
	${PN}-c \
	${PN}-c-dev \
	${PN}-c-dbg \
	python-${PN} \
	python-${PN}-dbg \
"

# Package configuration options
PACKAGECONFIG ??= "java python http amqp mqtt"
PACKAGECONFIG[python] = "-Dbuild_python:STRING=${PYTHON_BASEVERSION}, -Dbuild_python:STRING=OFF, ${PYTHON_PN} boost"
PACKAGECONFIG[http] = "-Duse_http:BOOL=ON,-Duse_http:BOOL=OFF,"
PACKAGECONFIG[amqp] = "-Duse_amqp:BOOL=ON,-Duse_amqp:BOOL=OFF, azure-uamqp-c"
PACKAGECONFIG[mqtt] = "-Duse_mqtt:BOOL=ON,-Duse_mqtt:BOOL=OFF, azure-umqtt-c"

## CMake ##
OECMAKE_SOURCEPATH = "${S}/c"
EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -DAZURE_INCLUDE_DIR=${AZURE_INCLUDE_DIR} -Dskip_unittests:BOOL=ON -Duse_installed_dependencies:BOOL=ON"

do_install_append() {
	# Python
	if [ -e ${B}/python/src/iothub_client.so ]; then
		install -d ${D}${PYTHON_SITEPACKAGES_DIR}
		oe_libinstall -C ${B}/python/src -so iothub_client ${D}${PYTHON_SITEPACKAGES_DIR}
	fi
}

## C ##
FILES_${PN}-c = "\
	${libdir}/libiothub_client.so \
	${libdir}/libserializer.so \
	${libdir}/libiothub_service_client.so \
	${libdir}/libiothub_client_amqp_transport.so \
	${libdir}/libiothub_client_http_transport.so \
	${libdir}/libiothub_client_mqtt_transport.so \
	${libdir}/libiothub_client_amqp_transport.so \
"
FILES_${PN}-c-dev += "\
	${includedir} \
	${exec_prefix}/cmake \
"
FILES_${PN}-c-dbg += "\
	${libdir}/.debug \
	/usr/src/debug \
"
INSANE_SKIP_${PN}-c += "rpaths"

## Python ##
RDEPENDS_python-${PN} += "${PYTHON_PN} boost-python"
FILES_python-${PN} += "${PYTHON_SITEPACKAGES_DIR}/*.so"
FILES_python-${PN}-dbg += "${PYTHON_SITEPACKAGES_DIR}/.debug"
INSANE_SKIP_python-${PN} += "rpaths"

RRECOMMENDS_azure-iot-sdk-c-dev = "glibc-dev azure-c-shared-utility-dev azure-uamqp-c-dev azure-umqtt-c-dev"

RRECOMMENDS_azure-iot-sdk-c-dev[nodeprrecs] = "1"
