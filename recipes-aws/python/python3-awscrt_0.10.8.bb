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

SRC_URI += "\
    file://Do-not-override-libcrypto-location.patch \
"

SRC_URI[sha256sum] = "c6859e35c57922f175b587e02bfb662ce30a06c9aa688a7303112c91e25265c6"

do_configure_prepend() {
    sed -i \
        -e 's:AWS_LIBCRYPTO_INSTALL = None:AWS_LIBCRYPTO_INSTALL = "${RECIPE_SYSROOT}/usr":' \
        ${S}/setup.py
    if !${@bb.utils.contains('DISTRO_FEATURES','usrmerge','true','false',d)}; then
        sed -i -e 's:/lib/:${libdir}/:' ${S}/setup.py
    fi
}
