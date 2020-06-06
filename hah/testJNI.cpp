//
// Created by 11027 on 2019/8/29.
//

#include "Hello.h"
#include <iostream>
#include <stdio.h>

JNIEXPORT void JNICALL Java_testJNI_get (JNIEnv *,jobject){
    printf("this is c++ print");
}