DESCRIPTION = "Packages for the Google Cloud Platform."
LICENSE = "MIT"

inherit packagegroup

PR = "r1"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python node-red cli"

PACKAGECONFIG[python] = "\
    , \
    , \
    , \
    python-google-cloud \
"

PACKAGECONFIG[python3] = "\
    , \
    , \
    , \
    python3-google-cloud \
"

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
