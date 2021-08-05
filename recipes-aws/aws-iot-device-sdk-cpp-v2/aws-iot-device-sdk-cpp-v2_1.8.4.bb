DESCRIPTION = "Next generation AWS IoT Client SDK for C++ using the AWS Common Runtime"
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-cpp-v2"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=f91e61641e7a96835dea6926a65f4702"

inherit cmake

DEPENDS += "\
    aws-crt-cpp \
"

SRC_URI = "\
    git://github.com/aws/${BPN}.git;branch=main \
    file://Add-library-versioning.patch \
    file://0001-CMakeLists.txt-lib-CMAKE_INSTALL_LIBDIR.patch \
"

# v1.8.4
SRCREV = "f34823176ea3077d8436476318d78347caaca902"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_DEPS=OFF \
    -DBUILD_SAMPLES=ON \
    -DBUILD_SHARED_LIBS=ON \
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"

PACKAGE_BEFORE_PN += "${PN}-samples"

do_install_append() {
    # Install samples
    for sample in `find ${B} -perm 0755 -type f -path '*/samples/*'`; do
        if [ ! -e ${D}${bindir} ]; then
            install -m 0755 -d ${D}${bindir}
        fi
        install -m 0755 $sample ${D}${bindir}
    done
}

FILES_${PN}-samples += " \
    ${bindir} \
"

FILES_${PN} += "\
    ${libdir}/*-cpp \
"
