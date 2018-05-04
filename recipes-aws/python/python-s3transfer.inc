DESCRIPTION = "An Amazon S3 Transfer Manager"
HOMEPAGE = "https://github.com/boto/s3transfer/"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=b1e01b26bacfc2232046c90a330332b3"

SRC_URI[md5sum] = "b7437bbbd3195e916f9e992b78721067"
SRC_URI[sha256sum] = "90dc18e028989c609146e241ea153250be451e05ecc0c2832565231dacdf59c1"

inherit pypi

RDEPENDS_${PN} = "\
    ${PYTHON_PN}-botocore \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-lang \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-threading \
    ${PYTHON_PN}-stringold \
    ${PYTHON_PN}-pkgutil \
"
