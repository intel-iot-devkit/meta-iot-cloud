#!/usr/bin/env bash

set -e

# Folders Location
PWD="$(pwd)"
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
ROOT_DIR="${DIR}/.."
WORKSPACE_DIR="${ROOT_DIR}/workspace"
META_JAVA_MASTER_DIR="${WORKSPACE_DIR}/meta-java-master"
DOWNLOAD_DIR="${WORKSPACE_DIR}/download"
BSP_DIR="${WORKSPACE_DIR}/bsp"
BSP_DEVKIT_DIR="${BSP_DIR}/devkit"
BSP_DEVKIT_EDISON_DIR="${BSP_DEVKIT_DIR}/edison"

# Create workspace directory if missing
if [ ! -d "${WORKSPACE_DIR}" ]; then mkdir ${WORKSPACE_DIR}; fi
# Create download directory if missing
if [ ! -d "${DOWNLOAD_DIR}" ]; then mkdir ${DOWNLOAD_DIR}; fi
# Download and unzip meta-java-master patch if missing
if [ ! -d "${META_JAVA_MASTER_DIR}" ]; then
  if [ ! -d "${DOWNLOAD_DIR}/meta-java-master.zip" ]; then
    cd ${DOWNLOAD_DIR}
    wget http://git.yoctoproject.org/cgit/cgit.cgi/meta-java/snapshot/meta-java-master.zip;
    cd ${PWD}
  fi
  unzip -qq -o ${DOWNLOAD_DIR}/meta-java-master.zip -d ${WORKSPACE_DIR};
fi
# Create bsp directory if missing
if [ ! -d "${BSP_DIR}" ]; then mkdir ${BSP_DIR}; fi
# Create devkit directory if missing
if [ ! -d "${BSP_DEVKIT_DIR}" ]; then mkdir ${BSP_DEVKIT_DIR}; fi
# Download and unzip iot-devkit src if missing
if [ ! -d "${BSP_DEVKIT_EDISON_DIR}" ]; then
  if [ ! -d "${DOWNLOAD_DIR}/iot-devkit-yp-poky-edison-20160606.zip" ]; then
    cd ${DOWNLOAD_DIR}
    wget http://iotdk.intel.com/src/3.5/edison/iot-devkit-yp-poky-edison-20160606.zip;
    cd ${PWD}
  fi
  unzip -qq -o ${DOWNLOAD_DIR}/iot-devkit-yp-poky-edison-20160606.zip -d ${BSP_DEVKIT_EDISON_DIR}
  mv ${BSP_DEVKIT_EDISON_DIR}/iot-devkit-yp-poky-edison-20160606/* ${BSP_DEVKIT_EDISON_DIR}
  mv ${BSP_DEVKIT_EDISON_DIR}/build_edison ${BSP_DEVKIT_EDISON_DIR}/build
  rm -fr ${BSP_DEVKIT_EDISON_DIR}/iot-devkit-yp-poky-edison-20160606/

  # Patch edison-image.bb
  EDISON_IMAGE_BB="${BSP_DEVKIT_EDISON_DIR}/poky/meta-intel-edison/meta-intel-edison-distro/recipes-core/images/edison-image.bb"
  sed -i '/IMAGE_INSTALL += "iotkit-comm-js"/d'  ${EDISON_IMAGE_BB}
  sed -i '/IMAGE_INSTALL += "iotkit-comm-c-dev"/d' ${EDISON_IMAGE_BB}
  echo "IMAGE_INSTALL += \"azure-iot-gateway-sdk\"" >> ${EDISON_IMAGE_BB}
  # Patch ant-native_1.8.1.bb
  rm ${BSP_DEVKIT_EDISON_DIR}/poky/meta-java/recipes-core/ant/ant-native_1.8.1.bb
  cp ${META_JAVA_MASTER_DIR}/recipes-core/ant/ant-native_1.8.1.bb \
     ${BSP_DEVKIT_EDISON_DIR}/poky/meta-java/recipes-core/ant/ant-native_1.8.1.bb
  # Patch icedtea7-native_2.1.3.bb
  rm ${BSP_DEVKIT_EDISON_DIR}/poky/meta-java/recipes-core/icedtea/icedtea7-native_2.1.3.bb
  cp ${META_JAVA_MASTER_DIR}/recipes-core/icedtea/icedtea7-native_2.1.3.bb \
     ${BSP_DEVKIT_EDISON_DIR}/poky/meta-java/recipes-core/icedtea/icedtea7-native_2.1.3.bb
  # Patch openjdk-7-03b147/fix-checksums.patch
  rm ${BSP_DEVKIT_EDISON_DIR}/poky/meta-java/recipes-core/icedtea/openjdk-7-03b147/fix-checksums.patch
  cp ${META_JAVA_MASTER_DIR}/recipes-core/icedtea/openjdk-7-03b147/fix-checksums.patch \
     ${BSP_DEVKIT_EDISON_DIR}/poky/meta-java/recipes-core/icedtea/openjdk-7-03b147/fix-checksums.patch
  # Patch  bacnet-stack_0.8.2.bb
  BACNET_STACK_BB="${BSP_DEVKIT_EDISON_DIR}/poky/meta-intel-iot-devkit/recipes-connectivity/bacnet-stack/bacnet-stack_0.8.2.bb"
  BACNET_STACK_BB_OLD_URL="http://sourceforge.net/projects/bacnet/files/bacnet-stack/bacnet-stack-\${PV}/bacnet-stack-\${PV}.tgz"
  BACNET_STACK_BB_NEW_URL="https://svwh.dl.sourceforge.net/project/bacnet/bacnet-stack/bacnet-stack-0.8.2/bacnet-stack-0.8.2.tgz"
  sed -i "s,${BACNET_STACK_BB_OLD_URL},${BACNET_STACK_BB_NEW_URL},g" ${BACNET_STACK_BB}
  # Patch sanity.conf for root users
  if [ "$(whoami)" == "root" ]; then
    SANITY_CONF="${BSP_DEVKIT_EDISON_DIR}/poky/meta/conf/sanity.conf"
    sed -i '/INHERIT += "sanity"/d' ${SANITY_CONF};
  fi

  # Configure conf/bblayers.conf
  BUILD_BBLAYERS="${BSP_DEVKIT_EDISON_DIR}/build/conf/bblayers.conf"
  # Add meta-iot-cloud layers
  echo "BBLAYERS += \"${ROOT_DIR}\"" >> ${BUILD_BBLAYERS}
  # Remove azure-iot-gateway-sdk-java target
  echo "PACKAGECONFIG_pn-azure-iot-gateway-sdk = \"bluetooth\"" >> ${BUILD_BBLAYERS}

  cd ${PWD}
fi
