DESCRIPTION = "Google API client core library"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-cloud-python"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-pkgutil \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-googleapis-common-protos \
    ${PYTHON_PN}-google-auth \
    ${PYTHON_PN}-grpcio \
    ${PYTHON_PN}-protobuf \
    ${PYTHON_PN}-pytz \
    ${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "a23d02db3f49f350bcf530fa52713cf1"
SRC_URI[sha256sum] = "f45d74aef41e1de49ceadebf382e1291ddcbe431a8b533aff8a1140a35531465"

