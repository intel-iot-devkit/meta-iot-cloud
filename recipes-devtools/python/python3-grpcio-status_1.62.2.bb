DESCRIPTION = "Status proto mapping for gRPC"
HOMEPAGE = "http://www.grpc.io/"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=731e401b36f8077ae0c134b59be5c906"

inherit pypi setuptools3

DEPENDS += "python3-grpcio"

SRC_URI[sha256sum] = "62e1bfcb02025a1cd73732a2d33672d3e9d0df4d21c12c51e0bbcaf09bab742a"

RDEPENDS:${PN} = "python3-grpcio"

BBCLASSEXTEND = "native nativesdk"

