DESCRIPTION = "Microsoft Azure IoT device SDK for Java"

require azure-iot-sdk.inc

DEPENDS = "maven-native icedtea7-native"

PR = "r0"

JAVA_SRC_DIR = "${S}/java/device"
JAVA_DEST_DIR = "${JAVA_SRC_DIR}/iothub-java-client/target"
JAVA_PN = "iothub-java-device-client"
JAVA_DATADIR ?= "${datadir}/java"

PACKAGES = "\
	${PN} \
	${PN}-samples \
"

do_compile() {
	export JAVA_HOME="${STAGING_LIBDIR_NATIVE}/jvm/icedtea7-native"
	export M3_HOME="${STAGING_DIR_NATIVE}/usr/bin/maven-native"

	cd ${JAVA_SRC_DIR}
	mvn clean install
}

do_install() {
	install -d ${D}${JAVA_DATADIR}
	install -m 0644 ${JAVA_DEST_DIR}/iothub-java-client-${PV}-with-deps.jar ${D}${JAVA_DATADIR}/${JAVA_PN}-${PV}.jar
	ln -s ${JAVA_PN}-${PV}.jar ${D}${JAVA_DATADIR}/${JAVA_PN}.jar
	
        # Samples
        install -d ${D}${datadir}/azureiotsdk/samples/java/device
        install -m 0755 ${JAVA_SRC_DIR}/samples/handle-messages/target/handle-messages-*-with-deps.jar ${D}${datadir}/azureiotsdk/samples/java/device/handle-messages.jar
        install -m 0755 ${JAVA_SRC_DIR}/samples/send-event/target/send-event-*-with-deps.jar ${D}${datadir}/azureiotsdk/samples/java/device/send-event.jar
        install -m 0755 ${JAVA_SRC_DIR}/samples/send-receive-sample/target/send-receive-sample-*-with-deps.jar ${D}${datadir}/azureiotsdk/samples/java/device/send-receive-sample.jar
        install -m 0755 ${JAVA_SRC_DIR}/samples/send-serialized-event/target/send-serialized-event-*-with-deps.jar ${D}${datadir}/azureiotsdk/samples/java/device/send-serialized-event.jar
}

FILES_${PN} += "${JAVA_DATADIR}"
FILES_${PN}-samples += "${datadir}/azureiotsdk/samples/java"
