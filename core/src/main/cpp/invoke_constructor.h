//
// Created by rushii on 2024-08-27.
//

#ifndef BUGCORDHOOK_INVOKE_CONSTRUCTOR_H
#define BUGCORDHOOK_INVOKE_CONSTRUCTOR_H

#include "jni.h"

bool LoadInvokeConstructorCache(JNIEnv *en, int android_version);

void UnloadInvokeConstructorCache(JNIEnv*);

bool InvokeConstructorWithArgs(JNIEnv* env, jobject instance, jobject constructor, jobjectArray args);

#endif //BUGCORDHOOK_INVOKE_CONSTRUCTOR_H
