SUMMARY = "A file-driven approach to the creation of an entire AWS Greengrass group"
AUTHOR = "Brett Francis <brettf@amazon.com>"
HOMEPAGE = "https://github.com/awslabs/aws-greengrass-group-setup"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=e3fc50a88d0a364313df4b21ef20c29e"

PYPI_PACKAGE = "gg_group_setup"

SRC_URI[sha256sum] = "5d68dc5007a1bf24e8d1415db93e4f2b4dde42ffd98b868778bb3f6522d4d89d"

RDEPENDS:${PN} += " \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-math \
"

RDEPENDS:${PN} += " \
    ${PYTHON_PN}-boto3 \
    ${PYTHON_PN}-fire \
"

do_configure:prepend() {
    sed -i \
        -e 's:from gg_group_setup import __version__:__version__ = "${PV}":' \
        ${S}/setup.py
}

inherit pypi
