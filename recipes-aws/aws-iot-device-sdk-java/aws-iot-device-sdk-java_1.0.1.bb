DESCRIPTION = "Java SDK for connecting to AWS IoT from a device."
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-java"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=08528ae069cf72dbf7ee85efa7405c37"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

DEPENDS = "maven-native icedtea7-native"

inherit java

SRC_URI = "git://github.com/aws/${PN}.git \
	   file://build_with_deps.patch \
"
SRCREV = "e14223a34133e2db6284eda8dad5adb17d64b64e"

PR = "r0"

S = "${WORKDIR}/git"
B = "${S}/${PN}/target"

SAMPLES_BUILD_DIR = "${S}/${PN}-samples/target"

do_compile() {
	cd ${S}
	export JAVA_HOME="${STAGING_LIBDIR_JVM_NATIVE}/icedtea7-native"
	export M3_HOME="${STAGING_DIR_NATIVE}/usr/bin/maven-native"

	mvn install -Dgpg.skip=true
}

do_install() {
	oe_jarinstall -r ${PN}-${PV}.jar ${PN}-${PV}-with-deps.jar ${PN}.jar

	# Samples
	install -d ${D}${datadir}/awsiotsdk/samples/java
    	install -m 0755 ${SAMPLES_BUILD_DIR}/${PN}-samples-${PV}-with-deps.jar ${D}${datadir}/awsiotsdk/samples/java/${PN}-samples-${PV}.jar
}

PACKAGES = "${PN} ${PN}-samples"

FILES_${PN} += "${datadir_java}"
FILES_${PN}-samples += "${datadir}/awsiotsdk/samples/java"
