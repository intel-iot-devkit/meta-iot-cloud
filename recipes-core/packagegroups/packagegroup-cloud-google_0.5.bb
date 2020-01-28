DESCRIPTION = "Packages for the Google Cloud Platform."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "cli node-red python"

PACKAGECONFIG[node-red] = "\
    , \
    , \
    , \
    node-red-contrib-google-cloud \
"

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
