DESCRIPTION = "CRC32C implementation with support for CPU-specific acceleration instructions"
HOMEPAGE = "https://github.com/google/crc32c"
AUTHOR = "Google Inc."
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=e9ed01b5e5ac9eae23fc2bb33701220c"

inherit cmake

PR = "r0"

SRC_URI = "\
    git://github.com/google/crc32c.git;branch=master;tag=${PV} \
    file://Add-library-versioning.patch \
"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DCRC32C_BUILD_TESTS=OFF \
    -DCRC32C_BUILD_BENCHMARKS=OFF \
    -DCRC32C_USE_GLOG=OFF \
    -DBUILD_SHARED_LIBS=ON \
"
