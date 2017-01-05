DESCRIPTION = "Microsoft Azure IoT device SDK for Java"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-java"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b9e5c622b55856e65ed6705a349a7ac7"

DEPENDS = "maven-native icedtea7-native"

PR = "r0"

SRC_URI = "git://github.com/Azure/azure-iot-sdk-java.git"
SRCREV = "0698bbba4dce841508489fa55f6d96a77cd02696"

S = "${WORKDIR}/git"

JAVA_SRC_DIR = "${S}/device"
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
