#!/bin/bash

git submodule update --init --recursive
./scripts/download_dependencies.sh
./setup_build_meson.sh
meson compile -C build
