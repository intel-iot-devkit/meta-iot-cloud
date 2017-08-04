DESCRIPTION = "Python Client for Google Cloud Natural Language"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
"

SRCREV = "cc4e685421788298c632223e056efa1f4b339a39"

SRC_DIR = "language"
