//
// Created by Fly on 2018/7/11.
//

#ifndef NDKEXP_STRINGDEMO_H
#define NDKEXP_STRINGDEMO_H


#include <string>
#include <cstring>
#include <sstream>
#include<cstdlib>

using namespace std;

class StringDemo {

public:

    StringDemo();

    ~StringDemo();

    string GetCStyleString(char* str, int num, float num2);

    string GetCPlusStyleString(string str,int num,float num2);

    const char* GetStringToChar(string str);

    string GetCharToString(char* str);

    string GetNewString(string str1,int num);

};


#endif //NDKEXP_STRINGDEMO_H
