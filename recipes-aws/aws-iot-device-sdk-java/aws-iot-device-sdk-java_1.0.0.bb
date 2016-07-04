DESCRIPTION = "Java SDK for connecting to AWS IoT from a device."
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-java"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=08528ae069cf72dbf7ee85efa7405c37"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

DEPENDS = "maven-native icedtea7-native"

inherit java

SRC_URI = "https://github.com/aws/${PN}/archive/v${PV}.tar.gz \
	   file://build_with_deps.patch \
"
SRC_URI[md5sum] = "77749ad34a115dcbf0fd18e871530e4b"
SRC_URI[sha256sum] = "dcdf5451592a11b96f89a0ba956dcce7c9072a38933007953219d94a01fa49ef"

PR = "r0"

S = "${WORKDIR}/${PN}-${PV}"
B = "${S}/${PN}/target"

do_compile() {
	cd ${S}
	export JAVA_HOME="${STAGING_LIBDIR_JVM_NATIVE}/icedtea7-native"
	export M3_HOME="${STAGING_DIR_NATIVE}/usr/bin/maven-native"

	mvn install -Dgpg.skip=true
}

do_install() {
	oe_jarinstall -r ${PN}-${PV}.jar ${PN}-${PV}-with-deps.jar ${PN}.jar ${PN}.jar
}

PACKAGES = "${PN}"

FILES_${PN} += "${datadir_java}"
