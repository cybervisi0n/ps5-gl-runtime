#!/bin/bash
meson setup build_debug --cross-file=$PS5_PAYLOAD_SDK/toolchain/prospero.ini \
	-Dbuildtype=debug
