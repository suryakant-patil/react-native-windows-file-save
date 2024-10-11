#include <jni.h>
#include "react-native-inv-file-saver.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_invfilesaver_InvFileSaverModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return invfilesaver::multiply(a, b);
}
