feature = get_option('napster')

summary({'Napster': feature}, section : 'Protocols')

if not feature.allowed()
  subdir_done()
endif

napster_prpl = shared_library('napster',
  'napster.c',
  include_directories: toplevel_inc,
  dependencies: [libpurple_dep, glib_dep, ws2_32_dep],
  install: true,
  install_dir: plugin_dir,
)

subdir('pixmaps')
