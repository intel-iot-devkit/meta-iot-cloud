DESCRIPTION = "Packages for Amazon Web Services."
LICENSE = "MIT"

inherit packagegroup

RDEPENDS_${PN} = "\
	python-awscli \
	python-boto3 \
"

PR = "r1"

PACKAGES = "${PN}"
