//
// Created by Fly on 2018/7/11.
//

#include "StringDemo.h"

StringDemo::StringDemo() {}

StringDemo::~StringDemo() {}

/**
 * 字符串拼接，类似printf格式化输出
 */
string StringDemo::GetCStyleString(char *str, int num, float num2) {
    char *buff = new char[strlen(str)+ sizeof(num)+ 1];
    sprintf(buff,"%s%d%f",str,num,num2);
    return buff;
}


/**
 * 字符串拼接
 */
string StringDemo::GetCPlusStyleString(string str, int num, float num2) {

    //第一种写法
    ostringstream ost;
    ost<<str<<num<<num2;
    //第二种写法
    stringstream sst;
    sst<<str<<num<<num2;
    return sst.str();
}


/**
 * string 转 char*
 */
const char* StringDemo::GetStringToChar(string str) {
    //第一种写法
    const char * result = str.data();
    //第二种写法
    result = str.c_str();
    return result;
}


/**
 * char* 转 string
 */
string StringDemo::GetCharToString(char *str) {
    string result = str;
    return result;
}


/**
 * c++11 新特性 to_string()
 */
string StringDemo::GetNewString(string str1, int num) {
    string result;
//    result = str1+to_string(num);
    return result;
}