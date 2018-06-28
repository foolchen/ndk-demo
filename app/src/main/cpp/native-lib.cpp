#include <jni.h>
#include <string>

#include <android/log.h>
#define TAG "NativeLog"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, TAG, __VA_ARGS__)
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)

extern "C"
{

JNIEXPORT jstring JNICALL
Java_com_foolchen_ndkdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    LOGV("stringFromJNI is called.");
    LOGD("stringFromJNI is called.");
    LOGI("stringFromJNI is called.");
    LOGW("stringFromJNI is called.");
    LOGE("stringFromJNI is called.");
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT jstring JNICALL
Java_com_foolchen_ndkdemo_MainActivity_stringFromJNI2
        (JNIEnv *env, jobject /* this */) {
    LOGV("stringFromJNI2 is called.");
    LOGD("stringFromJNI2 is called.");
    LOGI("stringFromJNI2 is called.");
    LOGW("stringFromJNI2 is called.");
    LOGE("stringFromJNI2 is called.");
    return env->NewStringUTF("Hello from C++ 2");
}

}