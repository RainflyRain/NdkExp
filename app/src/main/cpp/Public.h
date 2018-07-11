//
// Created by Fly on 2018/7/11.
//

#ifndef NDKEXP_PUBLIC_H
#define NDKEXP_PUBLIC_H

#include <android/log.h>

#define LOG_TAG "NdkExp"
#define State_Log      1//0:为release,1为debug

#define LOG(...) {\
    if (State_Log)\
        __android_log_print(ANDROID_LOG_INFO,LOG_TAG, __VA_ARGS__);\
}

#endif //NDKEXP_PUBLIC_H
