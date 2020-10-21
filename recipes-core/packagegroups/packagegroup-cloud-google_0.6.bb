DESCRIPTION = "Packages for the Google Cloud Platform."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "cli python"

PACKAGECONFIG[cli] = "\
    , \
    , \
    , \
    google-cloud-sdk \
"

PACKAGECONFIG[python] = "\
    , \
    , \
    , \
    python3-google-cloud-pubsub \
"
