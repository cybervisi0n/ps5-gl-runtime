#!/bin/bash

ar -t build/libps5_opengl_core33.a | xargs ar rvs build/libps5_opengl_core33.a.new && mv -v build/libps5_opengl_core33.a.new build/libps5_opengl_core33.a;

mkdir -p build/pkg
cp build/libps5_opengl_core33.a build/pkg