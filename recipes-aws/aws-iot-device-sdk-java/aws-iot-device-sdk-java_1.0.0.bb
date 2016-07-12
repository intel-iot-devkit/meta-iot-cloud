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
SRCREV = "683ad635d2c11286465619d70093e09b305ca6c1"

PR = "r0"

S = "${WORKDIR}/git"
B = "${S}/${PN}/target"

do_compile() {
	cd ${S}
	export JAVA_HOME="${STAGING_LIBDIR_JVM_NATIVE}/icedtea7-native"
	export M3_HOME="${STAGING_DIR_NATIVE}/usr/bin/maven-native"

	mvn install -Dgpg.skip=true
}

do_install() {
	oe_jarinstall -r ${PN}-${PV}.jar ${PN}-${PV}-with-deps.jar ${PN}.jar
}

PACKAGES = "${PN}"

FILES_${PN} += "${datadir_java}"
