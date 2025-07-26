#include "JniClass.h"
#include <jni.h>
#include <iostream>

JNIEXPORT void JNICALL Java_JniClass_print_1hello(JNIEnv *, jobject){
    std::cout << "Hello World" << std::endl; 
}
