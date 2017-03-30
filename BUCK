cxx_library(
  name = 'common',
  header_namespace = '',
  exported_headers = subdir_glob([
    ('source/common', 'unicode/**/*.h'),
  ]),
  headers = subdir_glob([
    ('source/common', '*.h'),
  ]),
  srcs = glob([
    'source/common/**/*.cpp',
    'source/common/**/*.c',
  ]),
  compiler_flags = [
    '-DU_COMMON_IMPLEMENTATION',
  ],
)

cxx_library(
  name = 'i18n',
  header_namespace = '',
  exported_headers = subdir_glob([
    ('source/i18n', '**/*.h'),
  ]),
  srcs = glob([
    'source/i18n/**/*.cpp',
    'source/i18n/**/*.c',
  ]),
  compiler_flags = [
    '-DU_I18N_IMPLEMENTATION',
  ],
  deps = [
    ':common',
  ],
)

cxx_library(
  name = 'extra',
  header_namespace = '',
  exported_headers = subdir_glob([
    ('source/extra', '**/*.h'),
  ]),
  srcs = glob([
    'source/extra/**/*.cpp',
    'source/extra/**/*.c',
  ], 
  excludes = glob([
    'source/extra/**/*test.cpp',
  ])),
  compiler_flags = [
    '-DUNISTR_FROM_CHAR_EXPLICIT=explicit', 
    '-DUNISTR_FROM_STRING_EXPLICIT=explicit',
  ],
  deps = [
    ':common',
    ':i18n',
  ],
)

cxx_library(
  name = 'io',
  header_namespace = '',
  exported_headers = subdir_glob([
    ('source/io', '**/*.h'),
  ]),
  srcs = glob([
    'source/io/**/*.cpp',
    'source/io/**/*.c',
  ]),
  compiler_flags = [
    '-DU_IO_IMPLEMENTATION',
  ],
  deps = [
    ':common',
    ':i18n',
  ],
)

cxx_library(
  name = 'icu4c',
  visibility = [
    'PUBLIC',
  ],
  exported_deps = [
    ':common',
    ':i18n',
    ':extra',
    ':io',
  ],
)
