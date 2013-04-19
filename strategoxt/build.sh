#!/bin/sh

LIBDSLDI="../../dist-libdsldi"
LIBDSLDI_ARGS="-lib $LIBDSLDI"

ANT_OPTS="-Xss8m -Xmx2048m -server -XX:+UseParallelGC -XX:MaxPermSize=512m" ant -lib . $LIBDSLDI_ARGS "$@"
