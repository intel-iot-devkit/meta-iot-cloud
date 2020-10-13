DESCRIPTION = "SDK for connecting to AWS IoT from a device using C++"
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-cpp"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=218aad61fa604dacf420e699fc7d8679"

DEPENDS = "\
    rapidjson \
    openssl \
"

inherit cmake pkgconfig

SRC_URI = "\
    git://github.com/aws/${BPN}.git;branch=master;tag=v${PV} \
    file://Fix-packaging-issues.patch \
    file://Use-system-rapidjson-library.patch \
"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

EXTRA_OECMAKE += "\
    -DBUILD_SHARED_LIBRARY=ON \
    -DBUILD_SAMPLES=OFF \
    -DBUILD_TESTS=OFF \
    -DBUILD_CLI=OFF \
"

# Additional Includes
do_install_append() {
    install -m 0644 ${S}/common/*.hpp ${D}${includedir}/awsiotsdk
    install -m 0644 ${S}/network/OpenSSL/*.hpp ${D}${includedir}/awsiotsdk
}

RRECOMMENDS_aws-iot-device-sdk-cpp-dev[nodeprrecs] = "1"
