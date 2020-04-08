DESCRIPTION = "The extensible open source Java/OSGi IoT Edge Framework"
HOMEPAGE = "https://www.eclipse.org/kura/"
LICENSE = "EPL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=52a21f73ac77fd790dc40dc5acda0fc2"

inherit systemd update-rc.d

DEPENDS = "\
    maven-native \
    openjdk-8-native \
    unzip-native \
"

RDEPENDS_${PN} += "java2-runtime"

SRC_URI = "\
    git://github.com/eclipse/kura.git;branch=develop;tag=KURA_${PV}_RELEASE \
"

# Patches
SRC_URI += "\
    file://Remove-default-build-profiles.patch \
    file://Add-Yocto-build-profile.patch \
    file://Fix-equinox-build.patch \
    file://Disable-checksum-generation.patch \
"

# Config
SRC_URI += "\
    file://kura.properties.default \
    file://jdk.dio.properties.default \
    file://snapshot_0.xml.default \
    file://log4j.xml.default \
"

PR = "r0"

S = "${WORKDIR}/git"
B = "${WORKDIR}/${BPN}_${PV}_yocto"

KURA_MEMSIZE ?= "1024"
KURA_PROPERTIES ?= "${WORKDIR}/kura.properties.default"
KURA_DIO_PROPERTIES ?= "${WORKDIR}/jdk.dio.properties.default"
KURA_SNAPSHOT ?= "${WORKDIR}/snapshot_0.xml.default"
KURA_LOG4J_CONFIG ?= "${WORKDIR}/log4j.xml.default"


do_configure() {
    # Config
    sed -i 's|%ARCH%|${TARGET_ARCH}|g' ${S}/kura/distrib/pom.xml
    sed -i 's|%DISTRO%|${DISTRO}-${DISTRO_VERSION}|g' ${S}/kura/distrib/pom.xml
    sed -i 's|%MACHINE%|${MACHINE}|g' ${S}/kura/distrib/pom.xml
    sed -i 's|%MEMSIZE%|${KURA_MEMSIZE}|g' ${S}/kura/distrib/pom.xml
    
    if ${@bb.utils.contains('DISTRO_FEATURES','systemd','true','false',d)}; then
        sed -i 's|%SERVICE_MANAGER%|systemd|g' ${S}/kura/distrib/pom.xml
    elif ${@bb.utils.contains('DISTRO_FEATURES','sysvinit','true','false',d)}; then
        sed -i 's|%SERVICE_MANAGER%|sysv|g' ${S}/kura/distrib/pom.xml
    else
        sed -i 's|%SERVICE_MANAGER%|none|g' ${S}/kura/distrib/pom.xml
    fi
    
    # Snapshot
    sed -i 's|%MACHINE%|${MACHINE}|g' ${KURA_SNAPSHOT}
    
    # Properties
    sed -i 's|%DISTRO%|${DISTRO}|g' ${KURA_PROPERTIES}
    sed -i 's|%DISTRO_VERSION%|${DISTRO_VERSION}|g' ${KURA_PROPERTIES}
    sed -i 's|%MACHINE%|${MACHINE}|g' ${KURA_PROPERTIES}
    sed -i 's|%TARGET_SYS%|${TARGET_SYS}|g' ${KURA_PROPERTIES}
    
    # Create Yocto resources
    mkdir -p ${S}/kura/distrib/src/main/resources/yocto
    cp ${KURA_SNAPSHOT} ${S}/kura/distrib/src/main/resources/yocto/snapshot_0.xml
    cp ${KURA_DIO_PROPERTIES} ${S}/kura/distrib/src/main/resources/yocto/jdk.dio.properties
    cp ${KURA_PROPERTIES} ${S}/kura/distrib/src/main/resources/yocto/kura.properties
    cp ${KURA_LOG4J_CONFIG} ${S}/kura/distrib/src/main/resources/yocto/log4j.xml
}

do_compile() {
    export JAVA_HOME="${STAGING_LIBDIR_NATIVE}/jvm/openjdk-8-native"
    export M3_HOME="${STAGING_DIR_NATIVE}/usr/bin/maven-native"

    cd ${S}
    mvn -Dmaven.test.skip=true -f target-platform/pom.xml clean install
    mvn -Dmaven.test.skip=true -f kura/pom.xml clean install
    mvn -Dmaven.test.skip=true -f kura/distrib/pom.xml clean install

    # Populate build directory
    unzip -o ${S}/kura/distrib/target/${BPN}_${PV}_yocto.zip -d ${WORKDIR}
}

do_install() {
    install -d ${D}/${bindir}
    install -d ${D}/opt/eclipse/kura
    install -d ${D}/opt/eclipse/kura/bin
    install -d ${D}/opt/eclipse/kura/framework
    install -d ${D}/opt/eclipse/kura/plugins
    install -d ${D}/opt/eclipse/kura/user
    install -d ${D}/opt/eclipse/kura/user/snapshots
    install -d ${D}/opt/eclipse/kura/user/security
    
    # License
    install -m 0644 ${B}/*.html ${D}/opt/eclipse/kura/

    # Startup Scripts
    install -m 0755 ${B}/bin/*.sh ${D}/opt/eclipse/kura/bin
    ln -s /opt/eclipse/kura/bin/start_kura.sh ${D}${bindir}/kura

    # Framework
    install -m 0644 ${B}/framework/* ${D}/opt/eclipse/kura/framework/

    # Plugins
    install -m 0644 ${B}/plugins/*.jar ${D}/opt/eclipse/kura/plugins/

    # User
    install -m 0644 ${B}/user/log4j.xml ${D}/opt/eclipse/kura/user/
    install -m 0644 ${B}/user/kura_custom.properties ${D}/opt/eclipse/kura/user/
    install -m 0644 ${B}/user/security/cacerts.ks ${D}/opt/eclipse/kura/user/security/
    install -m 0644 ${B}/user/snapshots/*.xml ${D}/opt/eclipse/kura/user/snapshots/

    # Systemd Service
    install -d ${D}${systemd_unitdir}/system
    install -m 0644 ${B}/install/kura.service ${D}${systemd_unitdir}/system

    # Sysvinit Service
    install -d ${D}/${INIT_D_DIR}
    install -m 0755 ${B}/install/kura.init.yocto ${D}/${INIT_D_DIR}/kura

}

SYSTEMD_SERVICE_${PN} = "kura.service"
SYSTEMD_AUTO_ENABLE ?= "enable"
INITSCRIPT_PACKAGES = "${PN}"
INITSCRIPT_NAME_${PN} = "kura"

FILES_${PN} = "\
    ${bindir} \
    ${INIT_D_DIR} \
    ${systemd_unitdir}/system \
    /opt/eclipse/kura \
"
