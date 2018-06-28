#include <jni.h>
#include <string>

extern "C"
{

JNIEXPORT jstring JNICALL
Java_com_foolchen_ndkdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT jstring JNICALL
Java_com_foolchen_ndkdemo_MainActivity_stringFromJNI2
        (JNIEnv *env, jobject /* this */) {
    return env->NewStringUTF("Hello from C++ 2");
}

}