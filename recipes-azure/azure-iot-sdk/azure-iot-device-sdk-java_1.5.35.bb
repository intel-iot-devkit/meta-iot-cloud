DESCRIPTION = "Microsoft Azure IoT device SDK for Java"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-java"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b9e5c622b55856e65ed6705a349a7ac7"

DEPENDS = "maven-native icedtea7-native"

PR = "r0"

SRC_URI = "git://github.com/Azure/azure-iot-sdk-java.git"
SRCREV = "fd5bf9fcf23c0297f6f70b2fbe80d5fbeceb4b1f"

S = "${WORKDIR}/git"

JAVA_SRC_DIR = "${S}/device"
JAVA_DEST_DIR = "${JAVA_SRC_DIR}/iot-device-client/target"
JAVA_PN = "iot-device-client"
JAVA_DATADIR ?= "${datadir}/java"

PACKAGES = "\
	${PN} \
	${PN}-samples \
"

do_compile() {
	export JAVA_HOME="${STAGING_LIBDIR_NATIVE}/jvm/icedtea7-native"
	export M3_HOME="${STAGING_DIR_NATIVE}/usr/bin/maven-native"

	cd ${JAVA_SRC_DIR}
	mvn clean install -DskipTests
}

do_install() {
	install -d ${D}${JAVA_DATADIR}
	install -m 0644 ${JAVA_DEST_DIR}/iot-device-client-${PV}-with-deps.jar ${D}${JAVA_DATADIR}/${JAVA_PN}-${PV}.jar
	ln -s ${JAVA_PN}-${PV}.jar ${D}${JAVA_DATADIR}/${JAVA_PN}.jar
	
        # Samples
        install -d ${D}${datadir}/azureiotsdk/samples/java/device
	install -m 0755 ${JAVA_SRC_DIR}/iot-device-samples/device-method-sample/target/device-method-sample-*-with-deps.jar ${D}${datadir}/azureiotsdk/samples/java/device/device-method-sample.jar
	install -m 0755 ${JAVA_SRC_DIR}/iot-device-samples/device-twin-sample/target/device-twin-sample-*-with-deps.jar ${D}${datadir}/azureiotsdk/samples/java/device/device-twin-sample.jar
	install -m 0755 ${JAVA_SRC_DIR}/iot-device-samples/file-upload-sample/target/file-upload-sample-*-with-deps.jar ${D}${datadir}/azureiotsdk/samples/java/device/file-upload-sample.jar
        install -m 0755 ${JAVA_SRC_DIR}/iot-device-samples/handle-messages/target/handle-messages-*-with-deps.jar ${D}${datadir}/azureiotsdk/samples/java/device/handle-messages.jar
        install -m 0755 ${JAVA_SRC_DIR}/iot-device-samples/send-event/target/send-event-*-with-deps.jar ${D}${datadir}/azureiotsdk/samples/java/device/send-event.jar
        install -m 0755 ${JAVA_SRC_DIR}/iot-device-samples/send-receive-sample/target/send-receive-sample-*-with-deps.jar ${D}${datadir}/azureiotsdk/samples/java/device/send-receive-sample.jar
        install -m 0755 ${JAVA_SRC_DIR}/iot-device-samples/send-serialized-event/target/send-serialized-event-*-with-deps.jar ${D}${datadir}/azureiotsdk/samples/java/device/send-serialized-event.jar
}

FILES_${PN} += "${JAVA_DATADIR}"
FILES_${PN}-samples += "${datadir}/azureiotsdk/samples/java"
