DESCRIPTION = "Python Build Reasonableness"
AUTHOR = "OpenStack"
HOMEPAGE = "http://docs.openstack.org/developer/pbr/"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=1dece7821bf3fd70fe1309eaa37d52a2"

SRC_NAME = "pbr"

SRC_URI = "https://pypi.python.org/packages/d5/d6/f2bf137d71e4f213b575faa9eb426a8775732432edb67588a8ee836ecb80/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "4e82c2e07af544c56a5b71c801525b00"
SRC_URI[sha256sum] = "05f61c71aaefc02d8e37c0a3eeb9815ff526ea28b3b76324769e6158d7f95be1"

PR = "r0"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

BBCLASSEXTEND = "native nativesdk"
