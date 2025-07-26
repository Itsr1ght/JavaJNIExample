#include "JniClass.h"
#include <jni.h>
#include <iostream>
#include <string>

JNIEXPORT void JNICALL Java_JniClass_print_1hello(JNIEnv *env, jobject jclass){
    std::cout << "Hello World" << std::endl; 
}


JNIEXPORT void JNICALL Java_JniClass_print_1name(JNIEnv *env, jobject jclass, jstring jname){
    std::string name = (*env).GetStringUTFChars(jname, NULL);
    std::cout << "Hello" << " " << name << std::endl;
}
