DESCRIPTION = "Java Client Library can be used to simplify interactions with the IBM Watson IoT Platform"
HOMEPAGE = "https://github.com/ibm-watson-iot/iot-java"
LICENSE = "EPL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=30b3836521b3d65bef598bbc358a3afa"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

DEPENDS = "maven-native icedtea7-native"

inherit java

SRC_URI = "git://github.com/ibm-watson-iot/iot-java.git \
"
SRCREV = "c13c04888c0c01f7fbe57031072e6ef2abd55f80"

PR = "r0"

S = "${WORKDIR}/git"
B = "${S}/target"

do_compile() {
	cd ${S}
	export JAVA_HOME="${STAGING_LIBDIR_JVM_NATIVE}/icedtea7-native"
	export M3_HOME="${STAGING_DIR_NATIVE}/usr/bin/maven-native"
	mvn install -Dgpg.skip -DskipTests
}

do_install() {
	oe_jarinstall ${B}/watson-iot-${PV}.jar watson-iot.jar
	oe_jarinstall -r watson-iot-${PV}.jar watson-iot-${PV}-with-deps.jar watson-iot.jar
}

PACKAGES = "${PN}"

FILES_${PN} += "${datadir_java}"
