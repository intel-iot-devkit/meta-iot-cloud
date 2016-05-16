DESCRIPTION = "Embedded C client for interacting with the IBM Watson Internet of Things Platform"
HOMEPAGE = "https://github.com/ibm-messaging/iotf-embeddedc"
LICENSE = "ECL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=30b3836521b3d65bef598bbc358a3afa"

SRCNAME = "iotf-embeddedc"

SRC_URI = "git://github.com/ibm-watson-iot/iot-embeddedc.git"
SRCREV = "98fda3d0d4bdedc09b06247863df9880a0438d8e"

PR = "r1"

S = "${WORKDIR}/git"

PACKAGES = "${PN} ${PN}-dbg ${PN}-dev"

do_configure() {
	./setup.sh
}

do_compile() {
	./buildlib.sh
}

do_install() {
	install -d ${D}${includedir}
	install -m 0644 ${S}/*.h ${D}${includedir}

	install -d ${D}${libdir}
	install -m 0644 ${S}/build/*.so ${D}${libdir}
}

FILES_${PN} += "${libdir}/*"
FILES_${PN}-dev += "${includedir}/*"

