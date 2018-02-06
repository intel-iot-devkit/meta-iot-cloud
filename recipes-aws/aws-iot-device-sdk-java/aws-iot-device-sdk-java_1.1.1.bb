DESCRIPTION = "Java SDK for connecting to AWS IoT from a device."
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-java"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=08528ae069cf72dbf7ee85efa7405c37"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

DEPENDS = "\
	maven-native \
	icedtea7-native \
"

RDEPENDS_${PN} += "java2-runtime"

SRC_URI = "git://github.com/aws/${PN}.git \
	   file://0001-build-with-deps.patch \
"
SRCREV = "5d9830bb21d167eea995dcad38e77ad6835adc7e"

PR = "r1"

S = "${WORKDIR}/git"
B = "${S}/${PN}/target"

JAVA_DATADIR ?= "${datadir}/java"

SAMPLES_BUILD_DIR = "${S}/${PN}-samples/target"

do_compile() {
	cd ${S}
	export JAVA_HOME="${STAGING_LIBDIR_NATIVE}/jvm/icedtea7-native"
	export M3_HOME="${STAGING_DIR_NATIVE}/usr/bin/maven-native"

	mvn install -Dgpg.skip=true
}

do_install() {
	install -d ${D}${JAVA_DATADIR}
	install -m 0644 ${B}/${PN}-${PV}-with-deps.jar ${D}${JAVA_DATADIR}/${PN}-${PV}.jar
	ln -s ${PN}-${PV}.jar ${D}${JAVA_DATADIR}/${PN}.jar

	# Samples
	install -d ${D}${datadir}/awsiotsdk/samples/java
    	install -m 0755 ${SAMPLES_BUILD_DIR}/${PN}-samples-${PV}-with-deps.jar ${D}${datadir}/awsiotsdk/samples/java/${PN}-samples-${PV}.jar
}

PACKAGES = "${PN} ${PN}-samples"

FILES_${PN} += "${JAVA_DATADIR}"
FILES_${PN}-samples += "${datadir}/awsiotsdk/samples/java"
