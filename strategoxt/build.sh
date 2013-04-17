#!/bin/sh

LIBDSLDI="../../dist-libdsldi"
THIRDPARTY="../../thirdparty"
ANT_STATS_ARGS="-lib $THIRDPARTY -logger de.pellepelster.ant.statistics.AntStatisticsLogger"
ANT_OPTS="-Xss8m -Xmx1024m -server -XX:+UseParallelGC -XX:MaxPermSize=256m" ant -lib . -lib $LIBDSLDI $ANT_STATS_ARGS "$@"
