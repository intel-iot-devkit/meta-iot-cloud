sysroot_stage_all_append () {
    # Fix CMake configs
    sed -i 's#${exec_prefix}#\${_IMPORT_PREFIX}#g' ${SYSROOT_DESTDIR}${exec_prefix}/cmake/azure_iot_sdks*
}
