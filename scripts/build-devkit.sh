#!/usr/bin/env bash

# Parameters
PACKAGES=${*:1}

# Folders Location
PWD="$(pwd)"
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
ROOT_DIR="${DIR}/.."
WORKSPACE_DIR="${ROOT_DIR}/workspace"
BSP_DEVKIT_EDISON_DIR="${WORKSPACE_DIR}/bsp/devkit/edison"

cd ${BSP_DEVKIT_EDISON_DIR}/poky
source oe-init-build-env ../build/

SECONDS=0
TIMEOUT=${TIMEOUT:-1800}
BITBAKE_ARGS=${BITBAKE_ARGS:--c build}
BUILD_RESULT_FILE="build_result.txt"

sh -ic "{ bitbake ${PACKAGES} ${BITBAKE_ARGS} >&3 && echo 'Success' > ${BUILD_RESULT_FILE}; \
  kill 0; } | { sleep ${TIMEOUT}; \
  kill 0; }" 3>&1 2>/dev/null

EXIT_CODE=0

if [ "$SECONDS" -ge "$TIMEOUT" ]; then
  echo "Build Timeout"
  EXIT_CODE=2;
else
  if [ ! -e "${BUILD_RESULT_FILE}" ]; then
    echo "Build Fail"
    EXIT_CODE=1;
  else
    echo "Build Success"
    EXIT_CODE=0;
  fi
fi

rm -fr ${BUILD_RESULT_FILE}
exit ${EXIT_CODE}
