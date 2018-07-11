//
// Created by Fly on 2018/7/11.
//

#include "StringDemo.h"
#include "VectorDemo.h"
#include "MapDemo.h"
#include "ClassDemo.h"

class Demo{
public:
    Demo(){}

    ~Demo(){}

    void StringTest(){
        StringDemo *stringDemo = new StringDemo();
        char *src = const_cast<char *>("hello");
        string result = stringDemo->GetCStyleString(src,123,12.30f);
        string result2 = stringDemo->GetCPlusStyleString("fei",123,432.23f);
    }

    void VectorTest(){
        VectorDemo *vectorDemo = new VectorDemo();
        vectorDemo->VectorInit();
    }

    void MapTest(){
        MapDemo *mapDemo = new MapDemo();
        mapDemo->InitMap();
    }

    void ClassTest(){
        ClassDemo *classDemo = new ClassDemo();
        classDemo->InitClass();
    }
};