DESCRIPTION = "Packages for the Google Cloud Platform."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python"

PACKAGECONFIG[python] = "\
    , \
    , \
    , \
    python3-google-cloud-pubsub \
"
