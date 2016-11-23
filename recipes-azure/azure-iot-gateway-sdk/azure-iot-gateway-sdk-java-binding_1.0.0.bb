DESCRIPTION = "Azure IoT Gateway SDK Java Binding"

require azure-iot-gateway-sdk.inc

DEPENDS = "maven-native icedtea7-native"
RDEPENDS_${PN} = "azure-iot-gateway-sdk-java"

PR = "r0"

JAVA_SRC_DIR = "${S}/bindings/java/gateway-java-binding"
JAVA_JAR_DIR = "${JAVA_SRC_DIR}/target"
JAVA_DATADIR ?= "${datadir}/java"
JAVA_PN = "gateway-java-binding"

PACKAGES = "\
	${PN} \
"

do_compile() {
	export JAVA_HOME="${STAGING_LIBDIR_NATIVE}/jvm/icedtea7-native"
	export M3_HOME="${STAGING_DIR_NATIVE}/usr/bin/maven-native"
	
	cd ${JAVA_SRC_DIR}

	mvn clean install
}

do_install() {
	install -d ${D}${JAVA_DATADIR}
	install -m 0644 ${JAVA_JAR_DIR}/${JAVA_PN}-${PV}.jar ${D}${JAVA_DATADIR}
	ln -s ${JAVA_PN}-${PV}.jar ${D}${JAVA_DATADIR}/${JAVA_PN}.jar
}

FILES_${PN} += "\
	${JAVA_DATADIR} \
"
