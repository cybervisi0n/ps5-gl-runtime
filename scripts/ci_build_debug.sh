#!/bin/bash

git submodule update --init --recursive
./scripts/download_dependencies.sh

# Build Debug
./setup_build_meson_debug.sh
meson compile -C build_debug
./scripts/package_lib.sh build_debug ps5-gl-runtime_debug
