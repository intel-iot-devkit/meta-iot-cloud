DESCRIPTION = "Embedded C client for interacting with the IBM Watson Internet of Things Platform"
HOMEPAGE = "https://github.com/ibm-messaging/iotf-embeddedc"
LICENSE = "EPL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=30b3836521b3d65bef598bbc358a3afa"

inherit cmake

DEPENDS = "\
    mbedtls \
    cjson \
"

SRC_URI = "\
    git://github.com/ibm-watson-iot/iot-embeddedc.git;protocol=https \
    file://Fix-dependencies.patch \
    file://Fix-cjson-library.patch \
    file://Remove-host-library-paths.patch \
    file://Add-additional-options-to-sample-apps.patch \
"
SRCREV = "809af3b63294d0c5302cc15e3652c65843907cf2"

# MQTT Library
SRC_URI += "git://github.com/eclipse/paho.mqtt.embedded-c.git;protocol=https;destsuffix=git-mqtt;name=mqtt"
SRCREV_mqtt = "5714645c762177ff08086224a7a9ce0b9d541316"

PR = "r1"

S = "${WORKDIR}/git"

PACKAGES = "\
    ${PN} \
    ${PN}-dbg \
    ${PN}-dev \
    ${PN}-samples \
"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS:BOOL=ON -Drun_tests:BOOL=OFF"
OECMAKE_C_FLAGS_append = " -lm"

do_configure_prepend() {
    # Configure MQTT library
    cp ${WORKDIR}/git-mqtt/MQTTPacket/src/* ${S}/lib/
    cp ${WORKDIR}/git-mqtt/MQTTClient-C/src/MQTTClient.* ${S}/lib/
    sed -i 's|""|"iotf_network_tls_wrapper.h"|g' ${S}/lib/MQTTClient.h
}

do_install() {
    install -d ${D}${libdir}
    install -m 0644 ${WORKDIR}/build/lib/*.so ${D}${libdir}
    install -m 0644 ${WORKDIR}/build/src/*.so ${D}${libdir}

    install -d ${D}${includedir}/ibmiotf
    install -m 0644 ${S}/src/*.h ${D}${includedir}/ibmiotf
    install -m 0644 ${S}/lib/*.h ${D}${includedir}/ibmiotf

    # Samples
    install -d ${D}${datadir}/ibmiotfsdk/samples/c
    install -m 0755 ${WORKDIR}/build/samples/helloWorld ${D}${datadir}/ibmiotfsdk/samples/c/
    install -m 0755 ${WORKDIR}/build/samples/sampleDevice ${D}${datadir}/ibmiotfsdk/samples/c/
    install -m 0755 ${WORKDIR}/build/samples/sampleGateway ${D}${datadir}/ibmiotfsdk/samples/c/
    install -m 0644 ${S}/samples/device.cfg ${D}${datadir}/ibmiotfsdk/samples/c/
    install -m 0644 ${S}/samples/gateway.cfg ${D}${datadir}/ibmiotfsdk/samples/c/
    install -m 0644 ${S}/IoTFoundation.pem ${D}${datadir}/ibmiotfsdk/
}

FILES_${PN} += "\
    ${libdir}/* \
"

FILES_${PN}-dev += "\
    ${includedir}/* \
"

FILES_${PN}-dbg += "\
    ${datadir}/ibmiotfsdk/samples/c/.debug \
"

FILES_${PN}-samples += "\
    ${datadir}/ibmiotfsdk/samples/c/helloWorld \
    ${datadir}/ibmiotfsdk/samples/c/sampleDevice \
    ${datadir}/ibmiotfsdk/samples/c/sampleGateway \
    ${datadir}/ibmiotfsdk/samples/c/device.cfg \
    ${datadir}/ibmiotfsdk/samples/c/gateway.cfg \
    ${datadir}/ibmiotfsdk/IoTFoundation.pem \
"

INSANE_SKIP_${PN} += "rpaths"
INSANE_SKIP_${PN}-samples += "rpaths"
