#! /bin/sh

LIBDSLDI="../../dist-libdsldi"
ANT_OPTS="-Xss8m -Xmx1024m -server -XX:+UseParallelGC -XX:MaxPermSize=256m" ant -lib . -lib $LIBDSLDI
