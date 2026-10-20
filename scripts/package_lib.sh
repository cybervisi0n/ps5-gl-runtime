#!/bin/bash

# usage: package_lib.sh builddir packagedirname

BuildDir=$1
PackageDirName=$2

ar -t $BuildDir/libps5_opengl_core33.a | xargs ar rvs $BuildDir/libps5_opengl_core33.a.new && mv -v $BuildDir/libps5_opengl_core33.a.new $BuildDir/libps5_opengl_core33.a;

mkdir -p $BuildDir/$PackageDirName/lib
cp $BuildDir/libps5_opengl_core33.a $BuildDir/$PackageDirName/lib
