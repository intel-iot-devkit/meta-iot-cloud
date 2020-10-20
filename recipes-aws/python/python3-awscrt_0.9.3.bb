DESCRIPTION = "A common runtime for AWS Python projects"
HOMEPAGE = "https://github.com/awslabs/aws-crt-python"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://crt/aws-c-common/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit pypi setuptools3

DEPENDS += "\
    cmake-native \
    openssl \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-datetime \
"

PR = "r0"

SRC_URI += "\
    file://Do-not-override-libcrypto-location.patch \
"

SRC_URI[sha256sum] = "cb85ab61529947d595c56f60691552db91bbdee9ab8941d4c97a8dffc6f23e61"

do_configure_prepend() {
    sed -i \
        -e 's:AWS_LIBCRYPTO_INSTALL = None:AWS_LIBCRYPTO_INSTALL = "${RECIPE_SYSROOT}/usr":' \
        ${S}/setup.py
}
