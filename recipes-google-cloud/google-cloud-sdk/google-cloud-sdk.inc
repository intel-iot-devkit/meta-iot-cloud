# Only supports Python 2.x
RDEPENDS_${PN} = "\
    bash \
    python \
    python-grpcio \
"

# Default packages
PACKAGES = "\
    ${PN} \
"

do_compile[noexec] = "1"

do_configure() {
    # Disable updater
    sed -i 's|"disable_updater": false|"disable_updater": true|g' ${S}/lib/googlecloudsdk/core/config.json
}

# Remove non-arch independent dependencies
do_install_prepend() {
    rm -rf ${S}/lib/third_party/grpc
}

do_install() {
    install -d ${D}${bindir}
    install -d ${D}${libdir}/${BPN}
    install -d ${D}${sysconfdir}/bash_completion.d

    install -m 0644 ${S}/completion.bash.inc ${D}${libdir}/${BPN}
    install -m 0644 ${S}/properties ${D}${libdir}/${BPN}
    install -m 0644 ${S}/README ${D}${libdir}/${BPN}
    install -m 0644 ${S}/RELEASE_NOTES ${D}${libdir}/${BPN}
    install -m 0644 ${S}/VERSION ${D}${libdir}/${BPN}

    cp -r ${S}/.install ${D}${libdir}/${BPN}
    cp -r ${S}/bin ${D}${libdir}/${BPN}
    cp -r ${S}/data ${D}${libdir}/${BPN}
    cp -r ${S}/lib ${D}${libdir}/${BPN}
    cp -r ${S}/platform ${D}${libdir}/${BPN}

    # Symlinks
    ln -s ${libdir}/${BPN}/completion.bash.inc ${D}${sysconfdir}/bash_completion.d/gcloud
    ln -s ${libdir}/${BPN}/bin/bq ${D}${bindir}/bq
    ln -s ${libdir}/${BPN}/bin/docker-credential-gcloud ${D}${bindir}/docker-credential-gcloud
    ln -s ${libdir}/${BPN}/bin/gcloud ${D}${bindir}/gcloud
    ln -s ${libdir}/${BPN}/bin/git-credential-gcloud.sh ${D}${bindir}/git-credential-gcloud.sh
    ln -s ${libdir}/${BPN}/bin/gsutil ${D}${bindir}/gsutil
}

FILES_${PN} = "\
    ${bindir} \
    ${libdir}/${BPN} \
    ${sysconfdir}/bash_completion.d \
"
