feature = get_option('myspace')

summary({'MySpace': feature}, section : 'Protocols')

if not feature.allowed()
  subdir_done()
endif

math = cc.find_library('m', required: false)

myspace_prpl = shared_library('myspace',
  'markup.c',
  'message.c',
  'myspace.c',
  'session.c',
  'user.c',
  'zap.c',
  include_directories: toplevel_inc,
  dependencies: [libpurple_dep, glib_dep, math, ws2_32_dep],
  install: true,
  install_dir: plugin_dir,
)

subdir('pixmaps')
