DESCRIPTION = "C++ Client Libraries for Google Cloud Services"
AUTHOR = "Google Inc."
HOMEPAGE = "https://cloud.google.com/"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=86d3f3a95c324c9479bd8986968f4327"

SRC_URI = "\
    git://github.com/googleapis/google-cloud-cpp.git;protocol=https;branch=main;tag=v${PV} \
    file://0001-Remove-compiler-flags-from-build-info.patch \
"

include ${BPN}.inc
