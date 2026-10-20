#!/bin/bash

git submodule update --init --recursive
./scripts/download_dependencies.sh

# Build Release
./setup_build_meson_release.sh
meson compile -C build_release
./scripts/package_lib.sh build_release ps5-gl-runtime_release
