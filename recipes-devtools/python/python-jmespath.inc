SUMMARY = "JSON Matching Expressions"
AUTHOR = "James Saryerwinnie"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=2683790f5fabb41a3f75b70558799eb4"

inherit setuptools

PR = "r2"

SRC_NAME = "jmespath"

SRC_URI = "https://pypi.python.org/packages/source/j/${SRC_NAME}/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "471b7d19bd153ac11a21d4fb7466800c"
SRC_URI[sha256sum] = "08dfaa06d4397f283a01e57089f3360e3b52b5b9da91a70e1fd91e9f0cdd3d3d"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
