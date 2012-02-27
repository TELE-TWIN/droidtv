#!/bin/sh
# droidtv/res-srv/build_mumudvb.sh
# Compiles mumudvb for Android
# Make sure you have ANDROID_NDK defined in .bashrc or .bash_profile

API=8
SRC_DIR="`pwd`/mumudvb"
TARGET_FILE="`pwd`/../res/raw/mumudvb_1_6_1b.bin"
INSTALL_DIR="`pwd`/../bin"
INCLUDE_DIR="`pwd`/include"

cd $SRC_DIR

export PATH="$ANDROID_NDK/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/:$PATH"
export SYS_ROOT="$ANDROID_NDK/platforms/android-$API/arch-arm/"
export CC="arm-linux-androideabi-gcc --sysroot=$SYS_ROOT"
export LD="arm-linux-androideabi-ld"
export AR="arm-linux-androideabi-ar"
export RANLIB="arm-linux-androideabi-ranlib"
export STRIP="arm-linux-androideabi-strip"

mkdir -p $INSTALL_DIR
./configure --host=arm-eabi --prefix=$INSTALL_DIR LIBS="-lc -lgcc" CFLAGS="-I$INCLUDE_DIR"

echo "#undef malloc" >> src/config.h
echo "#undef realloc" >> src/config.h

make
make install

cp $INSTALL_DIR/bin/mumudvb $TARGET_FILE

exit 0
