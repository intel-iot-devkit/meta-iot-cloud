DESCRIPTION = "SDK for connecting to AWS IoT from a device using C++"
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-cpp"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=5c5f860bd5a8be2c5ff164136c27fbad"

DEPENDS = "rapidjson openssl uclibc"
RDEPENDS_${PN} = "openssl"

inherit cmake

SRC_URI = "\
	git://github.com/aws/aws-iot-device-sdk-cpp.git \
	file://0001-Add-C-as-a-build-language-to-support-older-versions-.patch \
	file://0002-Don-t-build-RapidJSON-if-it-is-already-provided.patch \
	file://0003-Add-option-for-running-tests.patch \
	file://0004-Add-option-for-building-sample-apps.patch \
"
SRCREV = "3b544dcba048897a8a9b2e3b29243d8035caa28c"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg ${PN}-cli ${PN}-samples ${PN}-samples-src"

PR = "r1"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

EXTRA_OECMAKE += "-DRapidJSON_DIR=${STAGING_LIBDIR}/cmake/RapidJSON -DTHREADS_PTHREAD_ARG=OFF -DBUILD_SHARED_LIBS=ON -DBUILD_SAMPLES=ON -DRUN_TESTS=OFF"

do_install() {
	install -d ${D}${libdir}
    	oe_libinstall -C ${B}/lib -so libaws-iot-sdk-cpp ${D}${libdir}

	install -d ${D}${includedir}/awsiot
	install -d ${D}${includedir}/awsiot/mqtt
	install -d ${D}${includedir}/awsiot/shadow
	install -d ${D}${includedir}/awsiot/util
	install -d ${D}${includedir}/awsiot/util/logging
	install -d ${D}${includedir}/awsiot/util/memory/stl
	install -d ${D}${includedir}/awsiot/util/threading
	install -m 0644 ${S}/include/*.hpp ${D}${includedir}/awsiot/
	install -m 0644 ${S}/network/OpenSSL/*.hpp ${D}${includedir}/awsiot/
	install -m 0644 ${S}/common/*.hpp ${D}${includedir}/awsiot/
    	install -m 0644 ${S}/include/mqtt/*.hpp ${D}${includedir}/awsiot/mqtt
	install -m 0644 ${S}/include/shadow/*.hpp ${D}${includedir}/awsiot/shadow
	install -m 0644 ${S}/include/util/*.hpp ${D}${includedir}/awsiot/util
	install -m 0644 ${S}/include/util/logging/*.hpp ${D}${includedir}/awsiot/util/logging
	install -m 0644 ${S}/include/util/memory/stl/*.hpp ${D}${includedir}/awsiot/util/memory/stl
	install -m 0644 ${S}/include/util/threading/*.hpp ${D}${includedir}/awsiot/util/threading

	# CLI
	install -d ${D}${datadir}/awsiotsdk/samples/cpp/cli
	install -m 0644 ${B}/bin/CliConfig.json ${D}${datadir}/awsiotsdk/samples/cpp/cli/
	install -m 0755 ${B}/bin/aws-iot ${D}${datadir}/awsiotsdk/samples/cpp/cli/

	# Samples
	install -d ${D}${datadir}/awsiotsdk/samples/cpp/PubSub
	install -d ${D}${datadir}/awsiotsdk/samples/cpp/PubSub/config
	install -d ${D}${datadir}/awsiotsdk/samples/cpp/ShadowDelta
	install -d ${D}${datadir}/awsiotsdk/samples/cpp/ShadowDelta/config
	install -m 0644 ${B}/bin/CliConfig.json ${D}${datadir}/awsiotsdk/samples/cpp/ShadowDelta/config/SampleConfig.json
	install -m 0755 ${B}/bin/shadow-delta-sample ${D}${datadir}/awsiotsdk/samples/cpp/ShadowDelta/
	install -m 0644 ${B}/bin/CliConfig.json ${D}${datadir}/awsiotsdk/samples/cpp/PubSub/config/SampleConfig.json
	install -m 0755 ${B}/bin/pub-sub-sample ${D}${datadir}/awsiotsdk/samples/cpp/PubSub/

	# Samples Source
	install -d ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/PubSub
	install -d ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/PubSub/config
	install -d ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/ShadowDelta
	install -d ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/ShadowDelta/config
	install -m 0644 ${B}/bin/CliConfig.json ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/PubSub/config/SampleConfig.json
	install -m 0644 ${S}/samples/PubSub/*.cpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/PubSub/
	install -m 0644 ${S}/samples/PubSub/*.hpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/PubSub/
	install -m 0644 ${B}/bin/CliConfig.json ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/ShadowDelta/config/SampleConfig.json
	install -m 0644 ${S}/samples/ShadowDelta/*.cpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/ShadowDelta/
	install -m 0644 ${S}/samples/ShadowDelta/*.hpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/ShadowDelta/
}

FILES_${PN} = "${libdir}/*.so"
FILES_${PN}-dbg = "\
	${libdir}/.debug \
	${exec_prefix}/src/debug \
	${datadir}/awsiotsdk/samples/cpp/cli/.debug \
	${datadir}/awsiotsdk/samples/cpp/PubSub/.debug \
	${datadir}/awsiotsdk/samples/cpp/ShadowDelta/.debug \
"
FILES_${PN}-dev = "${includedir}/awsiot"
FILES_${PN}-cli = "\
	${datadir}/awsiotsdk/samples/cpp/cli/aws-iot \
	${datadir}/awsiotsdk/samples/cpp/cli/*.json \
"
FILES_${PN}-samples = "\
	${datadir}/awsiotsdk/samples/cpp/PubSub/pub-sub-sample \
	${datadir}/awsiotsdk/samples/cpp/PubSub/config \
	${datadir}/awsiotsdk/samples/cpp/ShadowDelta/shadow-delta-sample \
	${datadir}/awsiotsdk/samples/cpp/ShadowDelta/config \
"
FILES_${PN}-samples-src = "\
	${exec_prefix}/src/awsiotsdk/samples/cpp/PubSub \
	${exec_prefix}/src/awsiotsdk/samples/cpp/ShadowDelta \
"

INSANE_SKIP_${PN}-cli += "rpaths"
INSANE_SKIP_${PN}-samples += "rpaths"
