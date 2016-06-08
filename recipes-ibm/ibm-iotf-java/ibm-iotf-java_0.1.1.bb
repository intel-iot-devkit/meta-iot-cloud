DESCRIPTION = "Java Client Library can be used to simplify interactions with the IBM Watson IoT Platform"
HOMEPAGE = "https://github.com/ibm-watson-iot/iot-java"
LICENSE = "EPL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=30b3836521b3d65bef598bbc358a3afa"

DEPENDS = "maven-native icedtea7-native"

inherit java

PAHO_DEPENDENCY = "org.eclipse.paho.client.mqttv3-1.0.3-20160519.041515-412"
PAHO_VERSION = "1.0.3-SNAPSHOT"

SRC_URI = "git://github.com/ibm-watson-iot/iot-java.git \
	   https://repo.eclipse.org/content/repositories/paho-snapshots/org/eclipse/paho/org.eclipse.paho.client.mqttv3/${PAHO_VERSION}/${PAHO_DEPENDENCY}.jar;unpack=0 \
"
SRCREV = "3b138ceedfff8b821c1cb122b5d27625dad58f6f"
SRC_URI[md5sum] = "50fdc31436fac7294526a61afe6ce625"
SRC_URI[sha256sum] = "fe490f3eeeff36a32fe8448df1f759482d41ea30429eb1db3d6cf9c9f6bdcb60"

PR = "r0"

S = "${WORKDIR}/git"
B = "${S}/target"

do_compile() {
	cd ${S}
	export JAVA_HOME="${STAGING_LIBDIR_JVM_NATIVE}/icedtea7-native"
	export M3_HOME="${STAGING_DIR_NATIVE}/usr/bin/maven-native"
	mvn install:install-file -Dfile=${WORKDIR}/${PAHO_DEPENDENCY}.jar -DgroupId=org.eclipse.paho -DartifactId=org.eclipse.paho.client.mqttv3 -Dversion=${PAHO_VERSION} -Dpackaging=jar
	mvn install -Dgpg.skip dependency:copy-dependencies -DskipTests
}

do_install() {
	oe_jarinstall ${B}/watson-iot-${PV}.jar watson-iot.jar
	
	# Dependencies
	install -d ${datadir_java}
  	install -m 0644 ${B}/dependency/*.jar ${D}${datadir_java}
}

PACKAGES = "${PN}"

FILES_${PN} += "${datadir_java}"
