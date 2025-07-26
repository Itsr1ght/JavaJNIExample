#!/bin/sh

function build(){

    if [ ! -d "build" ]; then
	mkdir -p build
    fi

    # building and adding to build files
    javac -h build -d build src/JniExample.java

    # compiling cpp files
    g++ -fPIC -shared -o build/libnative_hello.so -I$JAVA_HOME/include -I$JAVA_HOME/include/linux -Ibuild jni/jniClass.cpp 

}

function run(){
    java -cp build -Djava.library.path=build/ --enable-native-access=ALL-UNNAMED JniExample
}

if [ $1 == "build" ]; then
    build
fi

if [ $1 == "run" ]; then
    build
    run
fi
