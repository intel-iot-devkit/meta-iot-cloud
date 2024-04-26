inherit cmake

DEPENDS = "\
    curl \
    crc32c \
    grpc \
    grpc-native \
    nlohmann-json \
    protobuf-native \
"

RDEPENDS:${PN} += "\
    libabsl-cord \
    libabsl-cordz-functions \
    libabsl-cordz-info \
    libabsl-crc32c \
    libabsl-hash \
    libabsl-int128 \
    libabsl-log-internal-check-op \
    libabsl-log-internal-nullguard \
    libabsl-log-internal-message \
    libabsl-status \
    libabsl-str-format-internal \
    libabsl-strings \
    libabsl-strings-internal \
    libabsl-synchronization \
    libabsl-time \
    libabsl-time-zone \
    protobuf \
"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"


PACKAGECONFIG ??= ""
PACKAGECONFIG[galibs] = "-DGOOGLE_CLOUD_CPP_ENABLE=__ga_libraries__,,,"

EXTRA_OECMAKE = "\
    -DGOOGLE_CLOUD_CPP_ENABLE_EXAMPLES=OFF \
    -DGOOGLE_CLOUD_CPP_GENERATE_DOXYGEN=OFF \
    -DGOOGLE_CLOUD_CPP_INTERNAL_DOCFX=OFF \
    -DProtobuf_PROTOC_EXECUTABLE=${STAGING_BINDIR_NATIVE}/protoc \
    -DGOOGLE_CLOUD_CPP_GRPC_PLUGIN_EXECUTABLE=${STAGING_BINDIR_NATIVE}/grpc_cpp_plugin \
    -DBUILD_TESTING=OFF \
    -DBUILD_SHARED_LIBS=ON \
"

BBCLASSEXTEND = "native nativesdk"

