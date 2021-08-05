SUMMARY = "A Python client for Mapbox services"
HOMEPAGE = "https://pypi.org/project/mapbox/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI[md5sum] = "7e5a55af6054f9d0681313855814512c"
SRC_URI[sha256sum] = "3e9a098524a6b855f39fd5e773fb21526ef9660291f12b147e98fd44c7573e0b"

inherit pypi setuptools3

RDEPENDS:${PN} += "\
    python3-boto3 \
    python3-cachecontrol \
    python3-dateutil \
    python3-iso3166 \
    python3-polyline \
    python3-requests \
    python3-uritemplate \
"

RDEPENDS:${PN} += "python3-core python3-json python3-netclient python3-numbers"

BBCLASSEXTEND = "native nativesdk"
