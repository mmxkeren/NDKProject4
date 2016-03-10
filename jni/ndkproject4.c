#include<jni.h>
#include<string.h>

jstring Java_com_kitatolong_arie_ndkproject4_MainActivity_helloWorld(JNIEnv* env, jobject obj){
    return (*env)->NewStringUTF(env, "Hello World");
}