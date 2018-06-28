LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# 要生成的库的名称，此处名称为ndk-demo，则生成的文件为libndk-demo.so
# 在加载时则需要使用ndk-demo名称
LOCAL_MODULE    := ndk-demo
# 指定要编译的源码
# 由于源码所在目录为main/cpp，与Android.mk所在的main/jni不同
# 此处使用../cpp/*.cpp来指定
LOCAL_SRC_FILES := ../cpp/*.cpp

# 指定要编译生成的库的类型
# 如果要生成动态链接库（so文件），则类型为BUILD_SHARED_LIBRARY
# 如果要生成静态链接库（a文件），则类型为BUILD_STATIC_LIBRARY
# 具体参考https://developer.android.com/ndk/guides/android_mk?hl=zh-cn
include $(BUILD_SHARED_LIBRARY)
