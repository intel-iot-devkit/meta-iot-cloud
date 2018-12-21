DESCRIPTION = "Azure IoT Edge"

require azure-iot-edge.inc

inherit cmake pkgconfig

DEPENDS = "\
    glib-2.0 \
    azure-iot-sdk \
    nanomsg \
    libuv \
"

# Modbus
SRC_URI += "git://github.com/Azure/iot-gateway-modbus.git;destsuffix=git-modbus;name=modbus"
SRCREV_modbus = "7daeca02df909278c775112e04d8255240cda48c"

# SQLite
SRC_URI += "git://github.com/Azure/iot-gateway-sqlite.git;destsuffix=git-sqlite;name=sqlite"
SRCREV_sqlite = "4fbf57d0c674f6ad41372ff2ba4b86a1380f1111"

SRC_URI += "\
    file://0001-Skip-adding-test-dependencies-if-not-required.patch \
    file://0002-Fix-nanomsg-library-detection.patch \
    file://0003-Skip-parson-submodule-init.patch \
    file://0004-Include-parson-with-main-library.patch \
    file://0005-Use-shared-openssl.patch \
    file://0006-Use-shared-libuv.patch \
"

SRC_URI += "\
    file://azure-functions-sample.sh \
    file://dynamically-add-module-sample.sh \
    file://hello-world-sample.sh \
    file://modbus-sample.sh \
    file://native-module-host-sample.sh \
    file://proxy-sample.sh \
    file://simulated-device-cloud-upload-sample.sh \
    file://sqlite-sample.sh \
    file://azure-functions-module.sh \
    file://hello-world-module.sh \
    file://identitymap-module.sh \
    file://iothub-module.sh \
    file://logger-module.sh \
    file://simulated-device-module.sh \
"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

# Default packages
PACKAGES = "\
    ${PN} \
    ${PN}-dev \
    ${PN}-dbg \
    ${PN}-modules \
    ${PN}-modules-src \
    ${PN}-samples \
    ${PN}-samples-src \
    ${PN}-dotnetcore \
"

# Additional packages
PACKAGES += "\
    ${PN}-module-modbus \
    ${PN}-samples-modbus \
    ${PN}-samples-src-modbus \
    ${PN}-module-sqlite \
    ${PN}-samples-sqlite \
    ${PN}-samples-src-sqlite \
"

## .NET Core ##
DOTNET_LIB_DIR = "${B}/bindings/dotnetcore/"

PACKAGECONFIG ??= "dotnetcore"

PACKAGECONFIG[dotnetcore] = "-Denable_dotnet_core_binding:BOOL=ON, -Denable_dotnet_core_binding:BOOL=OFF, dotnet-native"

EXTRA_OECMAKE = "-DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS:BOOL=ON -Dinstall_modules:BOOL=ON -Dinstall_executables:BOOL=ON -Drun_as_a_service:BOOL=OFF -Denable_ble_module:BOOL=OFF"

do_modules() {
    # Modbus Module
    cp -rf ${WORKDIR}/git-modbus/modules/modbus_read ${S}/modules
    cp -rf ${WORKDIR}/git-modbus/samples/modbus_sample ${S}/samples
    echo 'add_subdirectory(modbus_read)' >> ${S}/modules/CMakeLists.txt
    echo 'add_subdirectory(modbus_sample)' >> ${S}/samples/CMakeLists.txt

    # SQLite Module
    cp -rf ${WORKDIR}/git-sqlite/modules/sqlite ${S}/modules
    cp -rf ${WORKDIR}/git-sqlite/samples/sqlite_sample ${S}/samples
    echo 'add_subdirectory(sqlite)' >> ${S}/modules/CMakeLists.txt
    echo 'add_subdirectory(sqlite_sample)' >> ${S}/samples/CMakeLists.txt
}

addtask do_modules after do_unpack before do_patch

do_configure_prepend() {
    # .NET Core
    if ${@bb.utils.contains('PACKAGECONFIG','dotnetcore','true','false',d)}; then
        sed -i 's|\${CMAKE_CURRENT_BINARY_DIR}/\.\.|${S}|g' ${S}/CMakeLists.txt     
        sed -i 's|projects_to_test=\"$binding_path/Microsoft.Azure.Devices.Gateway.Tests/Microsoft.Azure.Devices.Gateway.Tests.csproj\"|projects_to_test=\"\"|g' ${S}/tools/build_dotnet_core.sh
    fi
}

do_compile_prepend() {
    # .NET Core
    if ${@bb.utils.contains('PACKAGECONFIG','dotnetcore','true','false',d)}; then
        ${S}/tools/build_dotnet_core.sh --config Release
    fi
}

do_install_prepend() {
    # Fix sample module paths
    find ${S}/samples -type f -name "*.json" -exec sed -i 's|\.\./\.\./modules|${libdir}/azureiotedge/modules|g' {} +
    find ${S}/samples -type f -name "*.json" -exec sed -i 's|\./modules|${libdir}/azureiotedge/modules|g' {} +
    find ${S}/samples -type f -name "*.json" -exec sed -i 's|build/modules|${libdir}/azureiotedge/modules|g' {} +
}

do_install() {
    # Core
    install -d ${D}${libdir}
    install -m 0755 ${B}/core/libgateway.so ${D}${libdir}

    install -d ${D}${includedir}/azureiotedge
    install -m 0644 ${S}/core/inc/*.h ${D}${includedir}/azureiotedge
    install -m 0644 ${S}/core/inc/linux/*.h ${D}${includedir}/azureiotedge

    install -d ${D}${includedir}/azureiotedge/experimental
    install -m 0644 ${S}/core/inc/experimental/*.h ${D}${includedir}/azureiotedge/experimental

    install -d ${D}${includedir}/azureiotedge/module_loaders
    install -m 0644 ${S}/core/inc/module_loaders/dynamic_loader.h ${D}${includedir}/azureiotedge/module_loaders
    install -m 0644 ${S}/proxy/outprocess/inc/module_loaders/*.h ${D}${includedir}/azureiotedge/module_loaders

    # Native Proxy Gateway
    install -d ${D}${libdir}
    install -m 0755 ${B}/proxy/gateway/native/libproxy_gateway.so ${D}${libdir}

    install -d ${D}${includedir}/azureiotedge
    install -m 0644 ${S}/proxy/gateway/native/inc/*.h ${D}${includedir}/azureiotedge
    install -m 0644 ${S}/proxy/message/inc/*.h ${D}${includedir}/azureiotedge

    # Native Module Host
    install -d ${D}${libdir}
    install -m 0755 ${B}/proxy/modules/native_module_host/libnative_module_host.so ${D}${libdir}

    install -d ${D}${includedir}/azureiotedge
    install -m 0644 ${S}/proxy/modules/native_module_host/inc/*.h ${D}${includedir}/azureiotedge

    # Modules
    install -d ${D}${includedir}/azureiotedge/modules/common
    install -m 0644 ${S}/modules/common/*.h ${D}${includedir}/azureiotedge/modules/common

    install -d ${D}${exec_prefix}/src/azureiotedge/modules/common
    install -m 0644 ${S}/modules/common/*.h ${D}${exec_prefix}/src/azureiotedge/modules/common/

    # Azure Functions Module
    install -d ${D}${libdir}/azureiotedge/modules/azure_functions
    install -m 0755 ${B}/modules/azure_functions/libazure_functions.so ${D}${libdir}/azureiotedge/modules/azure_functions/

    install -d ${D}${includedir}/azureiotedge/modules/azure_functions
    install -m 0644 ${S}/modules/azure_functions/inc/*.h ${D}${includedir}/azureiotedge/modules/azure_functions

    install -d ${D}${exec_prefix}/src/azureiotedge/modules/azure_functions/src
    install -d ${D}${exec_prefix}/src/azureiotedge/modules/azure_functions/inc
    install -m 0644 ${S}/modules/azure_functions/src/*.c ${D}${exec_prefix}/src/azureiotedge/modules/azure_functions/src/
    install -m 0644 ${S}/modules/azure_functions/inc/*.h ${D}${exec_prefix}/src/azureiotedge/modules/azure_functions/inc/
    install -m 0755 ${WORKDIR}/azure-functions-module.sh ${D}${exec_prefix}/src/azureiotedge/modules/azure_functions/build.sh

    # Hello World Module
    install -d ${D}${libdir}/azureiotedge/modules/hello_world
    install -m 0755 ${B}/modules/hello_world/libhello_world.so ${D}${libdir}/azureiotedge/modules/hello_world/

    install -d ${D}${includedir}/azureiotedge/modules/hello_world
    install -m 0644 ${S}/modules/hello_world/inc/*.h ${D}${includedir}/azureiotedge/modules/hello_world

    install -d ${D}${exec_prefix}/src/azureiotedge/modules/hello_world/src
    install -d ${D}${exec_prefix}/src/azureiotedge/modules/hello_world/inc
    install -m 0644 ${S}/modules/hello_world/src/*.c ${D}${exec_prefix}/src/azureiotedge/modules/hello_world/src/
    install -m 0644 ${S}/modules/hello_world/inc/*.h ${D}${exec_prefix}/src/azureiotedge/modules/hello_world/inc/
    install -m 0755 ${WORKDIR}/hello-world-module.sh ${D}${exec_prefix}/src/azureiotedge/modules/hello_world/build.sh

    # Identity Map Module
    install -d ${D}${libdir}/azureiotedge/modules/identitymap
    install -m 0755 ${B}/modules/identitymap/libidentity_map.so ${D}${libdir}/azureiotedge/modules/identitymap/
    
    install -d ${D}${includedir}/azureiotedge/modules/identitymap
    install -m 0644 ${S}/modules/identitymap/inc/*.h ${D}${includedir}/azureiotedge/modules/identitymap

    install -d ${D}${exec_prefix}/src/azureiotedge/modules/identitymap/src
    install -d ${D}${exec_prefix}/src/azureiotedge/modules/identitymap/inc
    install -m 0644 ${S}/modules/identitymap/src/*.c ${D}${exec_prefix}/src/azureiotedge/modules/identitymap/src/
    install -m 0644 ${S}/modules/identitymap/inc/*.h ${D}${exec_prefix}/src/azureiotedge/modules/identitymap/inc/
    install -m 0755 ${WORKDIR}/identitymap-module.sh ${D}${exec_prefix}/src/azureiotedge/modules/identitymap/build.sh

    # IoT Hub Module
    install -d ${D}${libdir}/azureiotedge/modules/iothub
    install -m 0755 ${B}/modules/iothub/libiothub.so ${D}${libdir}/azureiotedge/modules/iothub/

    install -d ${D}${includedir}/azureiotedge/modules/iothub
    install -m 0644 ${S}/modules/iothub/inc/*.h ${D}${includedir}/azureiotedge/modules/iothub

    install -d ${D}${exec_prefix}/src/azureiotedge/modules/iothub/src
    install -d ${D}${exec_prefix}/src/azureiotedge/modules/iothub/inc
    install -m 0644 ${S}/modules/iothub/src/*.c ${D}${exec_prefix}/src/azureiotedge/modules/iothub/src/
    install -m 0644 ${S}/modules/iothub/inc/*.h ${D}${exec_prefix}/src/azureiotedge/modules/iothub/inc/
    install -m 0755 ${WORKDIR}/iothub-module.sh ${D}${exec_prefix}/src/azureiotedge/modules/iothub/build.sh

    # Logger Module
    install -d ${D}${libdir}/azureiotedge/modules/logger
    install -m 0755 ${B}/modules/logger/liblogger.so ${D}${libdir}/azureiotedge/modules/logger/

    install -d ${D}${includedir}/azureiotedge/modules/logger
    install -m 0644 ${S}/modules/logger/inc/*.h ${D}${includedir}/azureiotedge/modules/logger

    install -d ${D}${exec_prefix}/src/azureiotedge/modules/logger/src
    install -d ${D}${exec_prefix}/src/azureiotedge/modules/logger/inc
    install -m 0644 ${S}/modules/logger/src/*.c ${D}${exec_prefix}/src/azureiotedge/modules/logger/src/
    install -m 0644 ${S}/modules/logger/inc/*.h ${D}${exec_prefix}/src/azureiotedge/modules/logger/inc/
    install -m 0755 ${WORKDIR}/logger-module.sh ${D}${exec_prefix}/src/azureiotedge/modules/logger/build.sh

    # Simulated Device Module
    install -d ${D}${libdir}/azureiotedge/modules/simulated_device
    install -m 0755 ${B}/modules/simulated_device/libsimulated_device.so ${D}${libdir}/azureiotedge/modules/simulated_device/

    install -d ${D}${includedir}/azureiotedge/modules/simulated_device
    install -m 0644 ${S}/modules/simulated_device/inc/*.h ${D}${includedir}/azureiotedge/modules/simulated_device

    install -d ${D}${exec_prefix}/src/azureiotedge/modules/simulated_device/src
    install -d ${D}${exec_prefix}/src/azureiotedge/modules/simulated_device/inc
    install -m 0644 ${S}/modules/simulated_device/src/*.c ${D}${exec_prefix}/src/azureiotedge/modules/simulated_device/src/
    install -m 0644 ${S}/modules/simulated_device/inc/*.h ${D}${exec_prefix}/src/azureiotedge/modules/simulated_device/inc/
    install -m 0755 ${WORKDIR}/simulated-device-module.sh ${D}${exec_prefix}/src/azureiotedge/modules/simulated_device/build.sh

    # Modbus Module
    install -d ${D}${libdir}/azureiotedge/modules/modbus_read
    install -m 0755 ${B}/modules/modbus_read/libmodbus_read.so ${D}${libdir}/azureiotedge/modules/modbus_read/

    install -d ${D}${includedir}/azureiotedge/modules/modbus_read
    install -m 0644 ${S}/modules/modbus_read/inc/*.h ${D}${includedir}/azureiotedge/modules/modbus_read

    # SQLite Module
    install -d ${D}${libdir}/azureiotedge/modules/sqlite
    install -m 0755 ${B}/modules/sqlite/libsqlite.so ${D}${libdir}/azureiotedge/modules/sqlite/

    install -d ${D}${includedir}/azureiotedge/modules/sqlite
    install -m 0644 ${S}/modules/sqlite/inc/*.h ${D}${includedir}/azureiotedge/modules/sqlite

    # Azure Functions Sample
    install -d ${D}${datadir}/azureiotedge/samples/azure_functions
    install -m 0755 ${B}/samples/azure_functions_sample/azure_functions_sample ${D}${datadir}/azureiotedge/samples/azure_functions/azure_functions
    install -m 0644 ${S}/samples/azure_functions_sample/src/azure_functions_lin.json ${D}${datadir}/azureiotedge/samples/azure_functions/azure_functions.json

    install -d ${D}${exec_prefix}/src/azureiotedge/samples/azure_functions/src
    install -m 0644 ${S}/samples/azure_functions_sample/src/*.c ${D}${exec_prefix}/src/azureiotedge/samples/azure_functions/src/
    install -m 0644 ${S}/samples/azure_functions_sample/src/azure_functions_lin.json ${D}${exec_prefix}/src/azureiotedge/samples/azure_functions/src/azure_functions.json
    install -m 0755 ${WORKDIR}/azure-functions-sample.sh ${D}${exec_prefix}/src/azureiotedge/samples/azure_functions/build.sh

    # Dynamically Add Module Sample
    install -d ${D}${datadir}/azureiotedge/samples/dynamically_add_module
    install -m 0755 ${B}/samples/dynamically_add_module_sample/dynamically_add_module_sample ${D}${datadir}/azureiotedge/samples/dynamically_add_module/dynamically_add_module
    install -m 0644 ${S}/samples/dynamically_add_module_sample/src/links_lin.json ${D}${datadir}/azureiotedge/samples/dynamically_add_module/links.json
    install -m 0644 ${S}/samples/dynamically_add_module_sample/src/modules_lin.json ${D}${datadir}/azureiotedge/samples/dynamically_add_module/modules.json

    install -d ${D}${exec_prefix}/src/azureiotedge/samples/dynamically_add_module/src
    install -m 0644 ${S}/samples/dynamically_add_module_sample/src/*.c ${D}${exec_prefix}/src/azureiotedge/samples/dynamically_add_module/src/
    install -m 0644 ${S}/samples/dynamically_add_module_sample/src/links_lin.json ${D}${exec_prefix}/src/azureiotedge/samples/dynamically_add_module/src/links.json
    install -m 0644 ${S}/samples/dynamically_add_module_sample/src/modules_lin.json ${D}${exec_prefix}/src/azureiotedge/samples/dynamically_add_module/src/modules.json
    install -m 0755 ${WORKDIR}/dynamically-add-module-sample.sh ${D}${exec_prefix}/src/azureiotedge/samples/dynamically_add_module/build.sh

    # Hello World Sample
    install -d ${D}${datadir}/azureiotedge/samples/hello_world
    install -m 0755 ${B}/samples/hello_world/hello_world_sample ${D}${datadir}/azureiotedge/samples/hello_world/hello_world
    install -m 0644 ${S}/samples/hello_world/src/hello_world_lin.json ${D}${datadir}/azureiotedge/samples/hello_world/hello_world.json

    install -d ${D}${exec_prefix}/src/azureiotedge/samples/hello_world/src
    install -m 0644 ${S}/samples/hello_world/src/*.c ${D}${exec_prefix}/src/azureiotedge/samples/hello_world/src/
    install -m 0644 ${S}/samples/hello_world/src/hello_world_lin.json ${D}${exec_prefix}/src/azureiotedge/samples/hello_world/src/hello_world.json
    install -m 0755 ${WORKDIR}/hello-world-sample.sh ${D}${exec_prefix}/src/azureiotedge/samples/hello_world/build.sh

    # Native Module Host Sample
    install -d ${D}${datadir}/azureiotedge/samples/native_module_host
    install -m 0755 ${B}/samples/native_module_host_sample/native_host_sample ${D}${datadir}/azureiotedge/samples/native_module_host/native_host
    install -m 0755 ${B}/samples/native_module_host_sample/native_gateway ${D}${datadir}/azureiotedge/samples/native_module_host/native_gateway
    install -m 0644 ${S}/samples/native_module_host_sample/src/native_host_sample_lin.json ${D}${datadir}/azureiotedge/samples/native_module_host/native_host.json

    install -d ${D}${exec_prefix}/src/azureiotedge/samples/native_module_host/src
    install -m 0644 ${S}/samples/native_module_host_sample/src/*.c ${D}${exec_prefix}/src/azureiotedge/samples/native_module_host/src/
    install -m 0644 ${S}/samples/native_module_host_sample/src/native_host_sample_lin.json ${D}${exec_prefix}/src/azureiotedge/samples/native_module_host/src/native_host.json
    install -m 0755 ${WORKDIR}/native-module-host-sample.sh ${D}${exec_prefix}/src/azureiotedge/samples/native_module_host/build.sh

    # Proxy Sample
    install -d ${D}${datadir}/azureiotedge/samples/proxy
    install -m 0755 ${B}/samples/proxy_sample/proxy_sample ${D}${datadir}/azureiotedge/samples/proxy/proxy
    install -m 0755 ${B}/samples/proxy_sample/proxy_sample_remote ${D}${datadir}/azureiotedge/samples/proxy/proxy_remote
    install -m 0644 ${S}/samples/proxy_sample/src/proxy_sample_lin.json ${D}${datadir}/azureiotedge/samples/proxy/proxy.json

    install -d ${D}${exec_prefix}/src/azureiotedge/samples/proxy/src
    install -m 0644 ${S}/samples/proxy_sample/src/*.c ${D}${exec_prefix}/src/azureiotedge/samples/proxy/src/
    install -m 0644 ${S}/samples/proxy_sample/src/proxy_sample_lin.json ${D}${exec_prefix}/src/azureiotedge/samples/proxy/src/proxy.json
    install -m 0755 ${WORKDIR}/proxy-sample.sh ${D}${exec_prefix}/src/azureiotedge/samples/proxy/build.sh

    # Simulated Device Cloud Upload Sample
    install -d ${D}${datadir}/azureiotedge/samples/simulated_device_cloud_upload
    install -m 0755 ${B}/samples/simulated_device_cloud_upload/simulated_device_cloud_upload_sample ${D}${datadir}/azureiotedge/samples/simulated_device_cloud_upload/simulated_device_cloud_upload
    install -m 0644 ${S}/samples/simulated_device_cloud_upload/src/simulated_device_cloud_upload_lin.json ${D}${datadir}/azureiotedge/samples/simulated_device_cloud_upload/simulated_device_cloud_upload.json

    install -d ${D}${exec_prefix}/src/azureiotedge/samples/simulated_device_cloud_upload/src
    install -d ${D}${exec_prefix}/src/azureiotedge/samples/simulated_device_cloud_upload/inc
    install -m 0644 ${S}/samples/simulated_device_cloud_upload/src/*.c ${D}${exec_prefix}/src/azureiotedge/samples/simulated_device_cloud_upload/src/
    install -m 0644 ${S}/samples/simulated_device_cloud_upload/inc/*.h ${D}${exec_prefix}/src/azureiotedge/samples/simulated_device_cloud_upload/inc/
    install -m 0644 ${S}/samples/simulated_device_cloud_upload/src/simulated_device_cloud_upload_lin.json ${D}${exec_prefix}/src/azureiotedge/samples/simulated_device_cloud_upload/src/simulated_device_cloud_upload.json
    install -m 0755 ${WORKDIR}/simulated-device-cloud-upload-sample.sh ${D}${exec_prefix}/src/azureiotedge/samples/simulated_device_cloud_upload/build.sh

    # Modbus Sample
    install -d ${D}${datadir}/azureiotedge/samples/modbus
    install -m 0755 ${B}/samples/modbus_sample/modbus_sample ${D}${datadir}/azureiotedge/samples/modbus/modbus
    install -m 0644 ${S}/samples/modbus_sample/src/modbus_lin.json ${D}${datadir}/azureiotedge/samples/modbus/modbus.json

    install -d ${D}${exec_prefix}/src/azureiotedge/samples/modbus/src
    install -m 0644 ${S}/samples/modbus_sample/src/*.c ${D}${exec_prefix}/src/azureiotedge/samples/modbus/src/
    install -m 0644 ${S}/samples/modbus_sample/src/modbus_lin.json ${D}${exec_prefix}/src/azureiotedge/samples/modbus/src/modbus.json
    install -m 0755 ${WORKDIR}/modbus-sample.sh ${D}${exec_prefix}/src/azureiotedge/samples/modbus/build.sh

    # SQLite Sample
    install -d ${D}${datadir}/azureiotedge/samples/sqlite
    install -m 0755 ${B}/samples/sqlite_sample/sqlite_sample ${D}${datadir}/azureiotedge/samples/sqlite/sqlite
    install -m 0644 ${S}/samples/sqlite_sample/src/sqlite_lin.json ${D}${datadir}/azureiotedge/samples/sqlite/sqlite.json

    install -d ${D}${exec_prefix}/src/azureiotedge/samples/sqlite/src
    install -m 0644 ${S}/samples/sqlite_sample/src/*.c ${D}${exec_prefix}/src/azureiotedge/samples/sqlite/src/
    install -m 0644 ${S}/samples/sqlite_sample/src/sqlite_lin.json ${D}${exec_prefix}/src/azureiotedge/samples/sqlite/src/sqlite.json
    install -m 0755 ${WORKDIR}/sqlite-sample.sh ${D}${exec_prefix}/src/azureiotedge/samples/sqlite/build.sh

    # .NET Core Binding
    if [ -e ${DOTNET_LIB_DIR} ]; then
        install -d ${D}${libdir}/azureiotedge/bindings/dotnetcore
            install -m 0755 ${DOTNET_LIB_DIR}/libdotnetcore.so ${D}${libdir}/azureiotedge/bindings/dotnetcore/
    fi
}

RDEPENDS_${PN} = "\
    glib-2.0 \
    curl \
"
FILES_${PN} += "\
    ${libdir}/*.so \
"

RDEPENDS_${PN}-dev += "\
    azure-iot-sdk-dev \
    nanomsg-dev \
    glib-2.0-dev \
"
FILES_${PN}-dev += "\
    ${includedir}/azureiotedge \
"

FILES_${PN}-dbg += "\
    ${libdir}/azureiotedge/bindings/dotnetcore/.debug \
    ${libdir}/azureiotedge/modules/azure_functions/.debug \
    ${libdir}/azureiotedge/modules/hello_world/.debug \
    ${libdir}/azureiotedge/modules/identitymap/.debug \
    ${libdir}/azureiotedge/modules/iothub/.debug \
    ${libdir}/azureiotedge/modules/logger/.debug \
    ${libdir}/azureiotedge/modules/simulated_device/.debug \
    ${libdir}/azureiotedge/modules/modbus_read/.debug \
    ${libdir}/azureiotedge/modules/sqlite/.debug \
    ${datadir}/azureiotedge/samples/azure_functions/.debug \
    ${datadir}/azureiotedge/samples/dynamically_add_module/.debug \
    ${datadir}/azureiotedge/samples/proxy/.debug \
    ${datadir}/azureiotedge/samples/hello_world/.debug \
    ${datadir}/azureiotedge/samples/native_module_host/.debug \
    ${datadir}/azureiotedge/samples/simulated_device_cloud_upload/.debug \
    ${datadir}/azureiotedge/samples/modbus/.debug \
    ${datadir}/azureiotedge/samples/sqlite/.debug \
"

FILES_${PN}-modules = "\
    ${libdir}/azureiotedge/modules/azure_functions/libazure_functions.so \
    ${libdir}/azureiotedge/modules/hello_world/libhello_world.so \
    ${libdir}/azureiotedge/modules/identitymap/libidentity_map.so \
    ${libdir}/azureiotedge/modules/iothub/libiothub.so \
    ${libdir}/azureiotedge/modules/logger/liblogger.so \
    ${libdir}/azureiotedge/modules/simulated_device/libsimulated_device.so \
"

FILES_${PN}-modules-src = "\
    ${exec_prefix}/src/azureiotedge/modules \
"

RDEPENDS_${PN}-samples += "azure-iot-edge-modules"
FILES_${PN}-samples = "\
    ${datadir}/azureiotedge/samples/azure_functions/* \
    ${datadir}/azureiotedge/samples/dynamically_add_module/* \
    ${datadir}/azureiotedge/samples/hello_world/* \
    ${datadir}/azureiotedge/samples/native_module_host/* \
    ${datadir}/azureiotedge/samples/proxy/* \
    ${datadir}/azureiotedge/samples/simulated_device_cloud_upload/* \
"

FILES_${PN}-samples-src = "\
    ${exec_prefix}/src/azureiotedge/samples/azure_functions \
    ${exec_prefix}/src/azureiotedge/samples/dynamically_add_module \
    ${exec_prefix}/src/azureiotedge/samples/hello_world \
    ${exec_prefix}/src/azureiotedge/samples/native_module_host \
    ${exec_prefix}/src/azureiotedge/samples/proxy \
    ${exec_prefix}/src/azureiotedge/samples/simulated_device_cloud_upload \
"

FILES_${PN}-module-modbus = "\
    ${libdir}/azureiotedge/modules/modbus_read/*.so \
"

RDEPENDS_${PN}-samples-modbus += "\
    azure-iot-edge-modules \
    azure-iot-edge-module-modbus \
"
FILES_${PN}-samples-modbus = "\
    ${datadir}/azureiotedge/samples/modbus/* \
"

FILES_${PN}-samples-src-modbus = "\
    ${exec_prefix}/src/azureiotedge/samples/modbus \
"

FILES_${PN}-module-sqlite = "\
    ${libdir}/azureiotedge/modules/sqlite/*.so \
"

RDEPENDS_${PN}-samples-sqlite += "\
    azure-iot-edge-modules \
    azure-iot-edge-module-sqlite \
    azure-iot-edge-module-modbus \
"
FILES_${PN}-samples-sqlite = "\
    ${datadir}/azureiotedge/samples/sqlite/* \
"

FILES_${PN}-samples-src-sqlite = "\
    ${exec_prefix}/src/azureiotedge/samples/sqlite \
"

FILES_${PN}-dotnetcore = "\
    ${libdir}/azureiotedge/bindings/dotnetcore/*.so \
"

RRECOMMENDS_azure-iot-edge-dev[nodeprrecs] = "1"

INSANE_SKIP_${PN} += "rpaths"
INSANE_SKIP_${PN}-modules += "rpaths"
INSANE_SKIP_${PN}-module-modbus += "rpaths"
INSANE_SKIP_${PN}-module-sqlite += "rpaths"
INSANE_SKIP_${PN}-samples += "rpaths libdir"
INSANE_SKIP_${PN}-samples-modbus += "rpaths"
INSANE_SKIP_${PN}-samples-sqlite += "rpaths"
INSANE_SKIP_${PN}-dotnetcore += "rpaths"
