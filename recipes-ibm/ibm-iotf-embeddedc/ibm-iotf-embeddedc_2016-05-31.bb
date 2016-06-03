DESCRIPTION = "Embedded C client for interacting with the IBM Watson Internet of Things Platform"
HOMEPAGE = "https://github.com/ibm-messaging/iotf-embeddedc"
LICENSE = "ECL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=30b3836521b3d65bef598bbc358a3afa"

DEPENDS = "cjson"
RDEPENDS_${PN} = "cjson"

inherit cmake

SRCNAME = "iotf-embeddedc"

#SRC_URI = "git://github.com/ibm-watson-iot/iot-embeddedc.git"
SRC_URI = "git://github.com/srware/iotf-embeddedc.git;branch=cmake_fixes"
SRCREV = "4d931ec6a621350a07fd3b98018188a5af033ab0"

PR = "r0"

S = "${WORKDIR}/git"

PACKAGES = "${PN} ${PN}-dbg ${PN}-dev ${PN}-samples"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Drun_tests:BOOL=OFF"

do_configure_prepend() {
	cd ${S}
	./setup.sh
}

do_compile_append() {
	cd ${S}/samples
	./build.sh
}

do_install() {
	install -d ${D}${includedir}
	install -m 0644 ${S}/src/*.h ${D}${includedir}

	install -d ${D}${includedir}/ibm_iotf_paho
	install -m 0644 ${S}/lib/MQTT*.h ${D}${includedir}/ibm_iotf_paho
	install -m 0644 ${S}/lib/StackTrace.h ${D}${includedir}/ibm_iotf_paho

	install -d ${D}${libdir}
	install -m 0644 ${WORKDIR}/build/lib/libmqtt*.so ${D}${libdir}
	install -m 0644 ${WORKDIR}/build/src/*.so ${D}${libdir}

	# Samples
	install -d ${D}${datadir}/ibmiotfsdk/samples/c
    	install -m 0755 ${S}/samples/helloWorld ${D}${datadir}/ibmiotfsdk/samples/c/
	install -m 0755 ${S}/samples/sampleDevice ${D}${datadir}/ibmiotfsdk/samples/c/
	install -m 0755 ${S}/samples/sampleGateway ${D}${datadir}/ibmiotfsdk/samples/c/
	install -m 0644 ${S}/samples/device.cfg ${D}${datadir}/ibmiotfsdk/samples/c/
	install -m 0644 ${S}/samples/gateway.cfg ${D}${datadir}/ibmiotfsdk/samples/c/
}

# FIXME: This needs properly fixing upstream
do_patch_header_files() {
	cd ${D}${includedir}

	if [ -e devicemanagementclient.h ]; then
	    sed -i '23s@.*@#include "ibm_iotf_paho/MQTTClient.h"@' devicemanagementclient.h
	fi

	if [ -e gatewayclient.h ]; then
	    sed -i '20s@.*@#include "ibm_iotf_paho/MQTTClient.h"@' gatewayclient.h
	fi

	if [ -e iotfclient.h ]; then
	    sed -i '22s@.*@#include "ibm_iotf_paho/MQTTClient.h"@' iotfclient.h
	fi
}

addtask patch_header_files after do_install before do_package

FILES_${PN} += "${libdir}/*"
FILES_${PN}-dev += "${includedir}/*"
FILES_${PN}-samples += "${datadir}/ibmiotfsdk/samples/c/helloWorld \
			${datadir}/ibmiotfsdk/samples/c/sampleDevice \
			${datadir}/ibmiotfsdk/samples/c/sampleGateway \
			${datadir}/ibmiotfsdk/samples/c/device.cfg \
			${datadir}/ibmiotfsdk/samples/c/gateway.cfg \
"
FILES_${PN}-dbg += "${datadir}/ibmiotfsdk/samples/c/.debug"

INSANE_SKIP_${PN} += "rpaths"

