include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/test/syn/Makefile.parse-unit
include $(wildcard *.dep)

TESTSUITES        = strategies.testsuite dynrules.testsuite comments.testsuite
PARSE_UNIT_PTABLE = StrategoForTesting.tbl

check_DATA = StrategoForTesting.tbl
CLEANFILES = StrategoForTesting.def StrategoForTesting.tbl
EXTRA_DIST = StrategoForTesting.sdf $(wildcard *.testsuite)

SDFINCLUDES = -Idef $(top_srcdir)/syn/Stratego.def
PGEN_FLAGS  = -m $*
