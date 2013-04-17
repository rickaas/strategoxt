Building StrategoXT using Java
==============================

git clone git@github.com:metaborg/strategoxt.git

cd strategoxt

git checkout java-bootstrap

cd strategoxt

cp [STRATETEGOXT.jar] .

cd syntax

git clone git@github.com:metaborg/java-front.git

cd ..

./build.sh

Building a debug version of StrategoXT using Java
=================================================

Make sure you have build the instrumentation library and the spoofax.debug runtime library

    git clone git@github.com:rickaas/strategoxt.git
    cd strategoxt
    git checkout java-bootstrap-debug
    cd strategoxt
    git clone git@github.com:metaborg/java-front.git
    cd ..
    ./build.sh
