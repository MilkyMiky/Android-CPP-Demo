#include <jni.h>
#include <string>
#include <iostream>
#include <android/log.h>

#define APPNAME "My Application"

using namespace std;

void test();

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_user_myapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    int i = 0;
    to_string(i);
    test();
    string hello = "Hello from C++ ! " + to_string(i);
    return env->NewStringUTF(hello.c_str());
}


void test() {
    __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "TEST");
}