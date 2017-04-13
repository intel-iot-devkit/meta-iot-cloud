SUMMARY = "An open source, portable, easy to use, readable and flexible SSL library"
HOMEPAGE = "https://tls.mbed.org/"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=302d50a6369f5f22efdb674db908167a"

SRC_URI = "git://github.com/ARMmbed/mbedtls.git;branch=mbedtls-2.4"
SRCREV = "b2c6b254430bd97aced22a4946bec1a51ccd5173"

inherit cmake

PR = "r0"

EXTRA_OECMAKE = "-DENABLE_PROGRAMS:BOOL=OFF -DENABLE_TESTING:BOOL=OFF -DUSE_SHARED_MBEDTLS_LIBRARY:BOOL=ON -DLIB_INSTALL_DIR:STRING=${libdir}"

S = "${WORKDIR}/git"