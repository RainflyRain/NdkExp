#include <jni.h>
#include "StringDemo.h"
#include "Demo.cpp"

extern "C" JNIEXPORT jstring

JNICALL
Java_com_friean_ndkexp_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    string hello = "Hello from C++";

    Demo *demo = new Demo();
    demo->StringTest();
    demo->VectorTest();
    demo->MapTest();

    return env->NewStringUTF(hello.c_str());
}



