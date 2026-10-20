#!/bin/bash
meson setup build_release --cross-file=$PS5_PAYLOAD_SDK/toolchain/prospero.ini \
	-Dbuildtype=release
