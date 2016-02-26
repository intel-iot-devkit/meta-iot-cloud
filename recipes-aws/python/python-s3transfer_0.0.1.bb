DESCRIPTION = "An Amazon S3 Transfer Manager"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=b1e01b26bacfc2232046c90a330332b3"

inherit setuptools

RDEPENDS_${PN} += "${PYTHON_PN}-botocore ${PYTHON_PN}-futures ${PYTHON_PN}-math ${PYTHON_PN}-lang ${PYTHON_PN}-logging ${PYTHON_PN}-io ${PYTHON_PN}-threading ${PYTHON_PN}-stringold ${PYTHON_PN}-pkgutil"

SRC_NAME = "s3transfer"

SRC_URI = "https://github.com/boto/${SRC_NAME}/archive/${PV}.tar.gz"
SRC_URI[md5sum] = "d7e50c1f8fa21801334562e93246c26e"
SRC_URI[sha256sum] = "41f31e669e0e260a903d77f59ae20cd6b47e9117956093328c91f3eff20f683b"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
