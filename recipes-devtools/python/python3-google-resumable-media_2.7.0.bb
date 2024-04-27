DESCRIPTION = "Utilities for Google Media Downloads and Resumable Uploads"
HOMEPAGE = "https://github.com/googleapis/google-resumable-media-python"
AUTHOR = "Google Cloud Platform"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit pypi setuptools3

PR = "r0"

RDEPENDS:${PN} += "\
    python3-aiohttp \
    python3-google-crc32c \
    python3-requests \
"

SRC_URI[sha256sum] = "5f18f5fa9836f4b083162064a1c2c98c17239bfda9ca50ad970ccf905f3e625b"

