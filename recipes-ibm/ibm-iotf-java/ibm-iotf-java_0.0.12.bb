DESCRIPTION = "Java Client Library can be used to simplify interactions with the IBM Watson IoT Platform"
HOMEPAGE = "https://github.com/ibm-watson-iot/iot-java"
LICENSE = "ECL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=30b3836521b3d65bef598bbc358a3afa"

RDEPENDS_${PN} = "java2-runtime"

inherit java

SRC_URI = "https://github.com/ibm-watson-iot/iot-java/releases/download/${PV}/com.ibm.iotf-${PV}.zip;name=jars \
	   https://raw.githubusercontent.com/ibm-watson-iot/iot-java/${PV}/LICENSE;name=license \
"
SRC_URI[jars.md5sum] = "457fedfbf41e00e27179a6bda4c65809"
SRC_URI[jars.sha256sum] = "d5d2188e16b64f6f8df1bbe0d3de053af4198914db653686c4c809b74eedb937"
SRC_URI[license.md5sum] = "30b3836521b3d65bef598bbc358a3afa"
SRC_URI[license.sha256sum] = "d8288e11fc42988629f7c0b649fa007332dd0187b010d025feaf7b1925376e8d"

PR = "r1"

S = "${WORKDIR}"

do_install() {
	oe_jarinstall -r watson-iot-${PV}.jar ${S}/com.ibm.iotf.client-${PV}.jar watson-iot.jar
	
	# Dependencies
	install -d ${datadir_java}
  	install -m 0644 ${S}/lib/*.jar ${D}${datadir_java}
}

PACKAGES = "${PN}"

FILES_${PN} += "${datadir_java}"
