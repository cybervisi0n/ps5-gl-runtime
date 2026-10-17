project('ps5-gl-runtime', ['c', 'cpp'],
    default_options: {
        'default_library': 'static',
        'prefer_static':    true
    },
    meson_version: '>=1.2.0',
    version: '1.0'
)

ps5_gl_runtime_srcs = files(
    'src/egl/ps5_egl.c',
    'src/gallium/ps5/ps5_screen.c',
    #'src/platform/ps5_agc_native_runtime.c',
    'src/platform/ps5_agc_package.c',
    'src/platform/ps5_agc_runtime_backend.c'
)

ps5_gl_runtime_shared_args = [
	'-O3',
	'-std=c11',
	'-g',
	'-Wall',
	'-Wextra',
	'-ffunction-sections',
	'-fdata-sections',
	'-DHAVE_FUNC_ATTRIBUTE_PACKED=1',
    '-DHAVE_STRUCT_TIMESPEC=1',
    '-DHAVE_PTHREAD=1'
]

ps5_gl_runtime_includes = include_directories(
	'src/gallium/ps5',
    'src/platform',
    'mesa_gen',
    'psbc',
    'psbc_gen',
	'ps5-mesa/src',
    'ps5-mesa/src/mesa',
	'ps5-mesa/include',
	'ps5-mesa/src/gallium/include',
	'ps5-mesa/src/gallium/auxiliary',
    'ps5-opengnm-psbc/src'
)

ps5_gl33_defines = [
    '-DPS5_ENABLE_COMPRESSED_FALLBACK_CANDIDATE=1',
    '-DPS5_ENABLE_CORE_CONTEXT_CANDIDATE=1',
    '-DPS5_RENDER_ARENA_BYTES=0x10000000u',
    '-DPS5_ENABLE_FRAMEBUFFER_SRGB_CANDIDATE=1',
    '-DPS5_ENABLE_PACKED_FLOAT_CANDIDATE=1',
    '-DPS5_ENABLE_NARROW_TEXTURE_INTEGER_CANDIDATE=1',
    '-DPS5_ENABLE_RGB10_A2UI_CANDIDATE=1',
    '-DPS5_ENABLE_TEXTURE_RECTANGLE_CANDIDATE=1',
    '-DPS5_ENABLE_TEXTURE_1D_CANDIDATE=1',
    '-DPS5_ENABLE_OCCLUSION_QUERY_CANDIDATE=1',
    '-DPS5_ENABLE_DEPTH_CLAMP_CANDIDATE=1',
    '-DPS5_ENABLE_GLSL_330_CANDIDATE=1',
    '-DPS5_ENABLE_GLSL_400_CANDIDATE=1',
    '-DPS5_ENABLE_GLSL_410_CANDIDATE=1',
    '-DPS5_ENABLE_GLSL_420_CANDIDATE=1',
    '-DPS5_ENABLE_GLSL_430_CANDIDATE=1',
    '-DPS5_ENABLE_GLSL_440_CANDIDATE=1',
    '-DPS5_ENABLE_GLSL_450_CANDIDATE=1',
    '-DPS5_ENABLE_GLSL_460_CANDIDATE=1',
    '-DPS5_ENABLE_FP64_CANDIDATE=1',
    '-DPS5_ENABLE_VIEWPORT_ARRAY_CANDIDATE=1',
    '-DPS5_ENABLE_TEXTURE_CUBE_ARRAY_CANDIDATE=1',
    '-DPS5_ENABLE_PACKED_VERTEX_CANDIDATE=1',
    '-DPS5_ENABLE_INTEGER_VERTEX_CANDIDATE=1',
    '-DPS5_ENABLE_PACKED_DEPTH_STENCIL=1',
    '-DPS5_ENABLE_PADDED_FBO_CANDIDATE=1',
    '-DPS5_ENABLE_SOFTWARE_BLIT_CANDIDATE=1',
    '-DPS5_ENABLE_DEPTH_TEXTURE_CANDIDATE=1',
    '-DPS5_ENABLE_DYNAMIC_DEPTH_TARGET_CANDIDATE=1',
    '-DPS5_ENABLE_MSAA4_CANDIDATE=1',
    '-DPS5_ENABLE_MSAA_ARRAY_CANDIDATE=1',
    '-DPS5_ENABLE_SEAMLESS_CUBE_CANDIDATE=1',
    '-DPS5_ENABLE_GEOMETRY_CANDIDATE=1',
    '-DPS5_ENABLE_TESSELLATION_CANDIDATE=1',
    '-DPS5_ENABLE_DRAW_INDIRECT_CANDIDATE=1',
    '-DPS5_ENABLE_LAYERED_RENDER_TARGET_CANDIDATE=1',
    '-DPS5_ENABLE_MRT_CANDIDATE=1',
    '-DPS5_ENABLE_INDEPENDENT_BLEND_CANDIDATE=1',
    '-DPS5_ENABLE_DUAL_SOURCE_BLEND_CANDIDATE=1',
    '-DPS5_ENABLE_TRANSFORM_FEEDBACK_CANDIDATE=1',
    '-DPS5_ENABLE_POINT_LINE_SIZE_CANDIDATE=1',
    '-DPS5_ENABLE_POINT_COORD_CANDIDATE=1',
    '-DPS5_ENABLE_BORDER_COLOR_CANDIDATE=1',
    '-DPS5_ENABLE_TEXTURE_BUFFER_CANDIDATE=1',
    '-DPS5_ENABLE_CORE_TEXTURE_FORMATS_CANDIDATE=1',
    '-DPS5_ENABLE_CORE_RENDER_FORMATS_CANDIDATE=1',
    '-DPS5_ENABLE_SMOOTH_RASTER_CANDIDATE=1',
    '-DAGC_TRIANGLE_SUBMIT=1',
	'-DAGC_RUNTIME_PACKAGES=1'
]


ps5_gl33_lib = static_library('ps5_opengl_core33',
    pic: true,
    sources: ps5_gl_runtime_srcs,
	c_args: [
		ps5_gl_runtime_shared_args,
		ps5_gl33_defines
	],
	include_directories: ps5_gl_runtime_includes
)
