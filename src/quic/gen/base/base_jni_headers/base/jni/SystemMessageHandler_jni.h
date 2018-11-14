// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/SystemMessageHandler

#ifndef org_chromium_base_SystemMessageHandler_JNI
#define org_chromium_base_SystemMessageHandler_JNI

#include <jni.h>

#include "base/android/jni_generator/jni_generator_helper.h"

// Step 1: forward declarations.
JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_base_SystemMessageHandler[];
const char kClassPath_org_chromium_base_SystemMessageHandler[] =
    "org/chromium/base/SystemMessageHandler";

// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_base_SystemMessageHandler_clazz = 0;
#ifndef org_chromium_base_SystemMessageHandler_clazz_defined
#define org_chromium_base_SystemMessageHandler_clazz_defined
inline jclass org_chromium_base_SystemMessageHandler_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_base_SystemMessageHandler,
      &g_org_chromium_base_SystemMessageHandler_clazz);
}
#endif

// Step 2: method stubs.

static void DoRunLoopOnce(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller,
    jlong messagePumpDelegateNative,
    jlong messagePumpNative,
    jlong delayedScheduledTimeTicks);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_base_SystemMessageHandler_nativeDoRunLoopOnce(JNIEnv* env,
    jobject jcaller,
    jlong messagePumpDelegateNative,
    jlong messagePumpNative,
    jlong delayedScheduledTimeTicks) {
  return DoRunLoopOnce(env, base::android::JavaParamRef<jobject>(env, jcaller),
      messagePumpDelegateNative, messagePumpNative, delayedScheduledTimeTicks);
}

static void DoIdleWork(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller,
    jlong messagePumpDelegateNative,
    jlong messagePumpNative);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_base_SystemMessageHandler_nativeDoIdleWork(JNIEnv* env,
    jobject jcaller,
    jlong messagePumpDelegateNative,
    jlong messagePumpNative) {
  return DoIdleWork(env, base::android::JavaParamRef<jobject>(env, jcaller),
      messagePumpDelegateNative, messagePumpNative);
}

static base::subtle::AtomicWord
    g_org_chromium_base_SystemMessageHandler_scheduleWork = 0;
static void Java_SystemMessageHandler_scheduleWork(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_base_SystemMessageHandler_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, org_chromium_base_SystemMessageHandler_clazz(env),
      "scheduleWork",
"("
")"
"V",
      &g_org_chromium_base_SystemMessageHandler_scheduleWork);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_base_SystemMessageHandler_scheduleDelayedWork = 0;
static void Java_SystemMessageHandler_scheduleDelayedWork(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong delayedTimeTicks,
    jlong millis) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_base_SystemMessageHandler_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, org_chromium_base_SystemMessageHandler_clazz(env),
      "scheduleDelayedWork",
"("
"J"
"J"
")"
"V",
      &g_org_chromium_base_SystemMessageHandler_scheduleDelayedWork);

     env->CallVoidMethod(obj.obj(),
          method_id, delayedTimeTicks, millis);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_base_SystemMessageHandler_removeAllPendingMessages = 0;
static void Java_SystemMessageHandler_removeAllPendingMessages(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_base_SystemMessageHandler_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, org_chromium_base_SystemMessageHandler_clazz(env),
      "removeAllPendingMessages",
"("
")"
"V",
      &g_org_chromium_base_SystemMessageHandler_removeAllPendingMessages);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_base_SystemMessageHandler_create
    = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_SystemMessageHandler_create(JNIEnv* env, jlong
    messagePumpDelegateNative,
    jlong messagePumpNative) {
  CHECK_CLAZZ(env, org_chromium_base_SystemMessageHandler_clazz(env),
      org_chromium_base_SystemMessageHandler_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, org_chromium_base_SystemMessageHandler_clazz(env),
      "create",
"("
"J"
"J"
")"
"Lorg/chromium/base/SystemMessageHandler;",
      &g_org_chromium_base_SystemMessageHandler_create);

  jobject ret =
env->CallStaticObjectMethod(org_chromium_base_SystemMessageHandler_clazz(env),
          method_id, messagePumpDelegateNative, messagePumpNative);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

#endif  // org_chromium_base_SystemMessageHandler_JNI