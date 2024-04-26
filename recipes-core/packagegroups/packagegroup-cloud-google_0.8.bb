DESCRIPTION = "Packages for the Google Cloud Platform."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "cpp python"

PACKAGECONFIG[python] = "\
    , \
    , \
    , \
    python3-google-cloud-iot \
    python3-google-cloud-pubsub \
"

PACKAGECONFIG[cpp] = "\
    , \
    , \
    , \
    google-cloud-cpp \
    google-cloud-cpp-dev \
"
