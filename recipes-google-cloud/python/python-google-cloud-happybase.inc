DESCRIPTION = "Client library for Google Cloud Bigtable: HappyBase layer"
LIC_FILES_CHKSUM ?= "file://LICENSE;md5=41f55ae3d7000e4323e84c468d8b42ee"

PV = "0.22.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-bigtable \
"

SRC_NAME = "google-cloud-python-happybase"
SRCREV = "2292b36fb7aa4b18f6684e3d1de7c9898cd267b8"
SRC_DIR = ""