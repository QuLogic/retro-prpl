feature = get_option('silc')

summary({'SILC': feature}, section : 'Protocols')

if not feature.allowed()
  subdir_done()
endif

silc_dep = dependency('silcclient', required: false, disabler: true)

if silc_dep.found()
  if silc_dep.version().version_compare('>= 1.1') or \
      cc.check_header('silcmime.h', dependencies: silc_dep)
    cfg.set('HAVE_SILCMIME_H', true)
  endif
endif

silc_prpl = shared_library('silc',
  'buddy.c',
  'chat.c',
  'ft.c',
  'ops.c',
  'pk.c',
  'silc.c',
  'util.c',
  'wb.c',
  include_directories: toplevel_inc,
  dependencies: [silc_dep, libpurple_dep, glib_dep, ws2_32_dep],
  install: true,
  install_dir: plugin_dir,
)

subdir('pixmaps')
