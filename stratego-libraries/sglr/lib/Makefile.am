include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

nobase_data_DATA = libstratego-sglr.rtree libstratego-sglr.ctree
lib_LTLIBRARIES  = libstratego-sglr.la

libstratego_sglr_la_SOURCES = \
  libstratego-sglr.c \
  native/stratego_sglr_filter.c \
  native/stratego_sglr_config.c \
  native/stratego_sglr_parse_table.c \
  native/stratego_sglr_parse.c \
  native/position-info.c

sglrlib = \
  stratego-sglr.str \
  $(wildcard stratego/asfix/*.str) \
  $(wildcard stratego/asfix/implode/*.str) \
  $(wildcard stratego/concrete-syntax/*.str) \
  $(wildcard stratego/error-support/*.str) \
  $(wildcard stratego/sdf/*.str) \
  $(wildcard stratego/sglr/*.str)

EXTRA_DIST = \
  $(sglrlib) $(sglrlib:.str=.rtree) $(nobase_data_DATA) \
  $(wildcard native/*.h) $(wildcard native/*.c)

CLEANFILES = $(wildcard *.dep) libstratego-sglr.rtree libstratego-sglr.c $(sglrlib:.str=.rtree)

libstratego_sglr_la_CFLAGS   = $(STR_CFLAGS)
libstratego_sglr_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_sglr_la_CPPFLAGS = \
  -I $(srcdir)/native \
  -I $(srcdir)/../justsglr \
  -I $(top_srcdir)/runtime/lib \
  -I $(top_builddir)/runtime/lib/srts \
  -I $(top_srcdir)/lib/native \
  $(STRATEGO_LIB_UNINSTALLED_CFLAGS) \
  $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS) \
  $(ATERM_CFLAGS)

libstratego_sglr_la_LIBADD = \
  $(STRATEGO_XTC_UNINSTALLED_LIBS) \
  $(STRATEGO_LIB_UNINSTALLED_LIBS) \
  $(STRATEGO_RUNTIME_UNINSTALLED_LIBS) \
  $(top_builddir)/sglr/justsglr/libjustsglr.la \
  $(ATERM_LIBS)

STRCFLAGS = \
  $(STRATEGO_XTC_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_LIB_UNINSTALLED_STRCFLAGS) \
  -I $(srcdir)

libstratego-sglr.rtree libstratego-sglr.c : $(sglrlib:.str=.rtree)
	@$(STRC_UNINSTALLED) -c --library -i stratego-sglr.rtree -o libstratego-sglr.rtree \
          --C-include "\"stratego_sglr.h\"" -O 2 --verbose 1 $(STRCFLAGS)
	rm libstratego-sglr.str

libstratego-sglr.ctree : $(sglrlib:.str=.rtree)
	@$(STRC_UNINSTALLED) -c -F --library -i stratego-sglr.rtree -o libstratego-sglr.ctree \
          -O 1 --verbose 1 $(STRCFLAGS)
