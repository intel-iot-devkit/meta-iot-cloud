DESCRIPTION = "SDK for connecting to AWS IoT from a device using C++"
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-cpp"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=5c5f860bd5a8be2c5ff164136c27fbad"

DEPENDS = "\
	rapidjson \
	openssl \
"

RDEPENDS_${PN} += "openssl"

RDEPENDS_${PN}-dev += "\
	rapidjson-dev \
	openssl-dev \
"

inherit cmake pkgconfig

SRC_URI = "\
	git://github.com/aws/aws-iot-device-sdk-cpp.git \
	file://0001-Add-C-as-a-build-language.patch \
	file://0002-Skip-building-RapidJSON.patch \
	file://0003-Add-option-to-disable-tests.patch \
	file://0004-Add-option-to-build-samples.patch \
	file://0005-Fix-cli-includes.patch \
	file://0006-Packaging-fixes.patch \
	file://0007-Add-pkgconfig-support.patch \
"
SRCREV = "63e8ce25e6b282719d112f3f58966cc1e78d271b"

PACKAGES += "${PN}-samples ${PN}-samples-src"

PR = "r1"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

EXTRA_OECMAKE += "-DTHREADS_PTHREAD_ARG=OFF -DBUILD_SHARED_LIBRARY=ON -DBUILD_SAMPLES=ON -DRapidJSON_DIR=${STAGING_LIBDIR}/cmake/RapidJSON"

do_install_append() {
	# Includes
	install -m 0644 ${S}/common/*.hpp ${D}${includedir}/awsiotsdk
	install -m 0644 ${S}/network/OpenSSL/*.hpp ${D}${includedir}/awsiotsdk

	# Samples
	install -d ${D}${datadir}/awsiotsdk/samples/cpp
	install -d ${D}${datadir}/awsiotsdk/samples/cpp/config
	install -d ${D}${datadir}/awsiotsdk/samples/cpp/certs
	install -m 0644 ${B}/bin/certs/* ${D}${datadir}/awsiotsdk/samples/cpp/certs/
	install -m 0644 ${B}/bin/config/SampleConfig.json ${D}${datadir}/awsiotsdk/samples/cpp/config/
	install -m 0644 ${B}/bin/CliConfig.json ${D}${datadir}/awsiotsdk/samples/cpp/
	install -m 0755 ${B}/bin/shadow-delta-sample ${D}${datadir}/awsiotsdk/samples/cpp/
	install -m 0755 ${B}/bin/pub-sub-sample ${D}${datadir}/awsiotsdk/samples/cpp/
	install -m 0755 ${B}/bin/aws-iot ${D}${datadir}/awsiotsdk/samples/cpp/

	# Samples Source
	install -d ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/certs
	install -d ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/config
	install -d ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/common
	install -d ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/Discovery
	install -d ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/PubSub
	install -d ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/ShadowDelta
	install -d ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/StoryRobotArm
	install -d ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/StorySwitch
	install -m 0644 ${S}/common/*.json ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/config/
	install -m 0644 ${S}/certs/* ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/certs/
	install -m 0644 ${S}/common/*.cpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/common/
	install -m 0644 ${S}/samples/Discovery/*.cpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/Discovery/
	install -m 0644 ${S}/samples/Discovery/*.hpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/Discovery/
	install -m 0644 ${S}/samples/PubSub/*.cpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/PubSub/
	install -m 0644 ${S}/samples/PubSub/*.hpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/PubSub/
	install -m 0644 ${S}/samples/ShadowDelta/*.cpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/ShadowDelta/
	install -m 0644 ${S}/samples/ShadowDelta/*.hpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/ShadowDelta/
	install -m 0644 ${S}/samples/StoryRobotArm/*.cpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/StoryRobotArm/
	install -m 0644 ${S}/samples/StoryRobotArm/*.hpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/StoryRobotArm/
	install -m 0644 ${S}/samples/StorySwitch/*.cpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/StorySwitch/
	install -m 0644 ${S}/samples/StorySwitch/*.hpp ${D}${exec_prefix}/src/awsiotsdk/samples/cpp/StorySwitch/
}

FILES_${PN}-dbg += "\
	${exec_prefix}/src/debug \
	${datadir}/awsiotsdk/samples/cpp/.debug \
"

FILES_${PN}-samples = "\
	${datadir}/awsiotsdk/samples/cpp \
"

FILES_${PN}-samples-src = "\
	${exec_prefix}/src/awsiotsdk/samples/cpp \
"

INSANE_SKIP_${PN}-samples += "rpaths"

RRECOMMENDS_aws-iot-device-sdk-cpp-dev[nodeprrecs] = "1"
