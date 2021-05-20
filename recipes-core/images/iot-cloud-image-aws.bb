SUMMARY = "IoT Cloud Amazon Web Services image"

LICENSE = "MIT"

inherit core-image

require iot-cloud-image.bb

CORE_IMAGE_EXTRA_INSTALL = "\
    packagegroup-cloud-aws \
"
