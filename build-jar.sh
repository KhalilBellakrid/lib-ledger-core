#!/bin/bash
set -eo pipefail

CURRENT_DIR=$PWD

DOCKER_NAME=lib-core-cmake
INTERFACE_GEN_DIR=$CURRENT_DIR/tools/generate_interfaces.sh
MACOS_BUILD_DIR=$CURRENT_DIR/../lib-ledger-core-build
LINUX_BUILD_DIR=$CURRENT_DIR/../lib-ledger-core-build-linux
# LINUX_SRC_DIR=$CURRENT_DIR/../lib-ledger-core-linux
JAR_BUILD_DIR=$CURRENT_DIR/../build-jar

function gen_interface()
{
  rm -v -rf $CURRENT_DIR/api
  bash $INTERFACE_GEN_DIR
}

function clean_src()
{
  rm -v -rf $CURRENT_DIR/core/lib/secp256k1/include/
  rm -v -rf $CURRENT_DIR/core/lib/secp256k1/lib/
  rm -v -rf $CURRENT_DIR/core/lib/secp256k1/tmp/
  rm -v -rf $CURRENT_DIR/core/lib/secp256k1/src
}


# Copy the source to a new dir, since building on macos pollute the src folder
# cp -v -R $CURRENT_DIR $LINUX_SRC_DIR

# Build dylib
function build_dylib()
{
  clean_src
  rm -rf -v $MACOS_BUILD_DIR
  mkdir -v $MACOS_BUILD_DIR
  cd $MACOS_BUILD_DIR
  cmake -DTARGET_JNI=ON $CURRENT_DIR
  make -j 8
  cd $CURRENT_DIR
}

# Build so
function build_so()
{
  clean_src
  rm -rf -v $LINUX_BUILD_DIR
  mkdir -v $LINUX_BUILD_DIR
  DOCKER_WORK_DIR=/workspace
  DOCKER_SRC_DIR=$DOCKER_WORK_DIR/lib-ledger-core
  DOCKER_BUILD_DIR=$DOCKER_WORK_DIR/lib-ledger-core-build
  DOCKER_BUILD_SCRIPT=$DOCKER_SRC_DIR/build-jar-linux.sh
  docker run -t -e LINUX_SRC_DIR=$DOCKER_SRC_DIR -e LINUX_BUILD_DIR=$DOCKER_BUILD_DIR --name $DOCKER_NAME \
    -v $LINUX_BUILD_DIR:$DOCKER_BUILD_DIR -v $CURRENT_DIR:$DOCKER_SRC_DIR rikorose/gcc-cmake \
    bash $DOCKER_BUILD_SCRIPT
}

# Build jar
function build_jar()
{
  gen_interface
  rm -v -rf $JAR_BUILD_DIR
  mkdir -v $JAR_BUILD_DIR
  JAVA_API_DIR=$CURRENT_DIR/api/core/java
  SCALA_API_DIR=$CURRENT_DIR/api/core/scala
  RESOURCE_DIR=$JAR_BUILD_DIR/src/main/resources/resources/djinni_native_libs

  mkdir -v -p $RESOURCE_DIR

  cp -v $JAVA_API_DIR/* $JAR_BUILD_DIR
  cp -v $SCALA_API_DIR/* $JAR_BUILD_DIR

  if [ "$1" = "mac" ]; then
    cp -v $MACOS_BUILD_DIR/core/src/libledger-core.dylib $RESOURCE_DIR
  elif [ "$1" = "linux" ]
  then
    docker cp $DOCKER_NAME:$DOCKER_BUILD_DIR/core/src/libledger-core.so $RESOURCE_DIR
  elif [ "$1" = "all" ]
  then
    cp -v $MACOS_BUILD_DIR/core/src/libledger-core.dylib $RESOURCE_DIR
    docker cp $DOCKER_NAME:$DOCKER_BUILD_DIR/core/src/libledger-core.so $RESOURCE_DIR
  fi

  cd $JAR_BUILD_DIR
  sbt package
  cd $CURRENT_DIR
}

# cleanup
function cleanup()
{
  clean_src
  docker rm -f $DOCKER_NAME
}

if [ "$1" = "mac" ]; then
  build_dylib
  build_jar
  cleanup
elif [ "$1" = "linux" ]
then
  build_so
  build_jar
  cleanup
elif [ "$1" = "all" ]
then
  build_dylib
  build_so
  build_jar
  cleanup
else
  echo "commands:"
  echo "  'mac': build jar with only dylib"
  echo "  'linux': build jar with only so"
  echo "  'all': build jar with so and dylib"
fi
