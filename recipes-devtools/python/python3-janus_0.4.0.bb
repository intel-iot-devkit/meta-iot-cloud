SUMMARY = "Mixed sync-async queue to interoperate between asyncio tasks and classic threads"
AUTHOR = "Andrew Svetlov"
HOMEPAGE = "https://github.com/aio-libs/janus/"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=23878c357ebb4c8ce1109be365043349"

inherit pypi setuptools3

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-threading \
    ${PYTHON_PN}-typing \
"

PR = "r0"

SRC_URI[sha256sum] = "cfc221683160b91b35bae1917e2957b78dad10a2e634f4f8ed119ed72e2a88ef"
