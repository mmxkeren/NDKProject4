LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := ndkproject4
LOCAL_SRC_FILES := ndkproject4.c

include $(BUILD_SHARED_LIBRARY)