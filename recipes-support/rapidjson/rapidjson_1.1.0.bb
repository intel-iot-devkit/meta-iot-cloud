DESCRIPTION = "A fast JSON parser/generator for C++ with both SAX/DOM style API"
HOMEPAGE = "http://rapidjson.org/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://license.txt;md5=ba04aa8f65de1396a7e59d1d746c2125"

inherit cmake

PR = "r0"

SRC_URI = "git://github.com/miloyip/rapidjson.git"
SRCREV = "f54b0e47a08782a6131cc3d60f94d038fa6e0a51"

PACKAGES = "${PN}-dev"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

EXTRA_OECMAKE += "-DRAPIDJSON_BUILD_DOC=OFF -DRAPIDJSON_BUILD_EXAMPLES=OFF -DRAPIDJSON_BUILD_TESTS=OFF -DRAPIDJSON_BUILD_THIRDPARTY_GTEST=OFF"

do_install() {
	install -d ${D}${includedir}/${PN}
	install -d ${D}${includedir}/${PN}/error
	install -d ${D}${includedir}/${PN}/internal
	install -d ${D}${includedir}/${PN}/msinttypes
	install -m 0644 ${S}/include/${PN}/*.h ${D}${includedir}/${PN}/
	install -m 0644 ${S}/include/${PN}/error/*.h ${D}${includedir}/${PN}/error/
	install -m 0644 ${S}/include/${PN}/internal/*.h ${D}${includedir}/${PN}/internal/
	install -m 0644 ${S}/include/${PN}/msinttypes/*.h ${D}${includedir}/${PN}/msinttypes/

	install -d ${D}${libdir}/pkgconfig
	install -m 0644 ${B}/*.pc ${D}${libdir}/pkgconfig/

	install -d ${D}${libdir}/cmake/RapidJSON
	install -m 0644 ${B}/RapidJSONConfig.cmake ${D}${libdir}/cmake/RapidJSON
	install -m 0644 ${B}/RapidJSONConfigVersion.cmake ${D}${libdir}/cmake/RapidJSON
}

FILES_${PN}-dev += "\
	${includedir} \
	${libdir} \
"
