require recipes-support/protobuf/protobuf.inc

DEPENDS += "protobuf-native"

RDEPENDS_${PN} += "\
    protobuf \
    ${PYTHON_PN}-six \
"

do_compile_prepend() {
    cd ${S}/python

    # Export protobuf compiler directory
    export PROTOC="${STAGING_BINDIR_NATIVE}/protoc"
}

do_install_prepend() {
    cd ${S}/python
}

BBCLASSEXTEND = "native"
