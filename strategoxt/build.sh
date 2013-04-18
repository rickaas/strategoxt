#!/bin/sh

LIBDSLDI="../../dist-libdsldi"
LIBDSLDI_ARGS="-lib $LIBDSLDI"
THIRDPARTY="../../thirdparty"
LOGGING_ARGS="-lib $THIRDPARTY -logger de.pellepelster.ant.statistics.AntStatisticsLogger"

ANT_OPTS="-Xss8m -Xmx1024m -server -XX:+UseParallelGC -XX:MaxPermSize=256m" ant -lib . $LIBDSLDI_ARGS $LOGGING_ARGS "$@"
