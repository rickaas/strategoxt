include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

SUBDIRS = . dynamic-rules
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

STRC=$(prefix)

pkgtestsdatadir  = $(datadir)/stratego-lib/tests
pkgtestsdata_DATA= $(wildcard *.str)

check_PROGRAMS = \
  char-test \
  collect-test \
  dir-test \
  dynamic-rules-lowlevel-test \
  dynamic-rules-highlevel-test \
  env-traversal-test \
  file-test \
  int-list-test \
  integers-test \
  io-test \
  iteration-test \
  list-basic-test \
  list-filter-test \
  list-index-test \
  list-misc-test \
  list-set-test \
  list-sort-test \
  list-zip-test \
  old-parse-options-test \
  parse-options-test \
  placeholder-test \
  posix-error-test \
  posix-file-test \
  posix-process-test \
  reals-test \
  rename-test \
  scoped-finite-map-test \
  sets-test  \
  share-test  \
  simple-traversal-test \
  strcmp-test \
  string-test \
  string-misc-test \
  substitution-test \
  tables-test \
  term-zip-test \
  time-test \
  tuple-test \
  unification-test

TESTS          	= $(check_PROGRAMS)
EXTRA_DIST     	= $(wildcard *.str)

CLEANFILES     	= $(wildcard *.dep)
BOOTCLEANFILES 	= $(wildcard *.c)

STRINCLUDES = -I $(top_srcdir)/lib/spec
AM_CPPFLAGS = $(PREFIX_CPPFLAGS)
LDADD       = $(SSL_LIBS)

NOSHARED_PREFIX_LIBS = -L$(prefix)/lib -lstratego-lib-native -lstratego-runtime -L$(ATERM)/lib -lATerm -lm
PREFIX_LIBS          = -L$(prefix)/lib -lstratego-lib -lstratego-lib-native -lstratego-runtime -L$(ATERM)/lib -lATerm -lm
PREFIX_CPPFLAGS      = -I $(prefix)/include -I $(ATERM)/include

nodist_char_test_SOURCES          = char-test.c 
nodist_collect_test_SOURCES       = collect-test.c
nodist_dir_test_SOURCES           = dir-test.c
nodist_dynamic_rules_lowlevel_test_SOURCES = dynamic-rules-lowlevel-test.c 
nodist_dynamic_rules_highlevel_test_SOURCES = dynamic-rules-highlevel-test.c 
nodist_env_traversal_test_SOURCES = env-traversal-test.c 
nodist_file_test_SOURCES          = file-test.c 
nodist_int_list_test_SOURCES      = int-list-test.c 
nodist_integers_test_SOURCES      = integers-test.c 
nodist_io_test_SOURCES            = io-test.c 
nodist_iteration_test_SOURCES     = iteration-test.c 
nodist_list_basic_test_SOURCES    = list-basic-test.c 
nodist_list_filter_test_SOURCES   = list-filter-test.c
nodist_list_index_test_SOURCES    = list-index-test.c
nodist_list_misc_test_SOURCES     = list-misc-test.c
nodist_list_set_test_SOURCES      = list-set-test.c 
nodist_list_sort_test_SOURCES     = list-sort-test.c 
nodist_list_zip_test_SOURCES      = list-zip-test.c 
nodist_parse_options_test_SOURCES = parse-options-test.c 
nodist_old_parse_options_test_SOURCES = old-parse-options-test.c 
nodist_placeholder_test_SOURCES   = placeholder-test.c 
nodist_posix_error_test_SOURCES   = posix-error-test.c 
nodist_posix_file_test_SOURCES    = posix-file-test.c 
nodist_posix_process_test_SOURCES = posix-process-test.c 
nodist_reals_test_SOURCES         = reals-test.c 
nodist_rename_test_SOURCES        = rename-test.c 
nodist_scoped_finite_map_test_SOURCES = scoped-finite-map-test.c 
nodist_sets_test_SOURCES          = sets-test.c 
nodist_share_test_SOURCES         = share-test.c
nodist_simple_traversal_test_SOURCES = simple-traversal-test.c 
nodist_strcmp_test_SOURCES        = strcmp-test.c 
nodist_string_test_SOURCES        = string-test.c 
nodist_string_misc_test_SOURCES   = string-misc-test.c 
nodist_substitution_test_SOURCES  = substitution-test.c 
nodist_tables_test_SOURCES        = tables-test.c
nodist_term_zip_test_SOURCES      = term-zip-test.c 
nodist_time_test_SOURCES          = time-test.c 
nodist_tuple_test_SOURCES         = tuple-test.c
nodist_unification_test_SOURCES   = unification-test.c