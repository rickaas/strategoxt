include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

check_PROGRAMS = abox2text-tests ast2text-tests

STRCFLAGS = \
  --main main-$* \
  $(BOX_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_GPP_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_UNINSTALLED_STRCFLAGS)

abox2text_tests_LDADD    = $(STRATEGO_GPP_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)
abox2text_tests_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)
ast2text_tests_LDADD     = $(STRATEGO_GPP_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)
ast2text_tests_CPPFLAGS  = $(STRATEGO_UNINSTALLED_CFLAGS)

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.pp)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

if !XT_DIST_CHECK_SOURCES
nodist_ast2text_tests_SOURCES = ast2text-tests.c
nodist_abox2text_tests_SOURCES = abox2text-tests.c
else
ast2text_tests_SOURCES = ast2text-tests.c
abox2text_tests_SOURCES = abox2text-tests.c
endif

TESTS_ENVIRONMENT = XTC_REPOSITORY=$(BUILD_REPOSITORY)
