DESCRIPTION = "Packages for Amazon Web Services."
LICENSE = "MIT"

inherit packagegroup

RDEPENDS_${PN} = "\
	python-awscli \
"

PR = "r0"

PACKAGES = "${PN}"
