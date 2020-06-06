cmake_minimum_required(VERSION 3.12)
project(Test_JNI)

set(CMAKE_CXX_STANDARD 14)

add_library(hah SHARED  jni_md.h jni.h Hello.h testJNI.cpp)
