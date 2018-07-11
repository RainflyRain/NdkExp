//
// Created by Fly on 2018/7/11.
//
#include <iostream>
#include "ClassDemo.h"
#include "Public.h"

class A{

private:
    int i;

public:
    A(){ LOG("@app = %s","调用没有参数的构造函数"); }
    A(int a):i(a){ LOG("@app = %s","调用有一个参数的构造函数") }
    ~A(){LOG("@app = 成员变量为:%d调用析构函数",i)}
};



ClassDemo::ClassDemo() {}


ClassDemo::~ClassDemo() {}

/**
 *   调用没有参数的构造函数
 *   调用有一个参数的构造函数
 *   调用有一个参数的构造函数
 *   调用有一个参数的构造函数
 *
 *   成员变量为:3调用析构函数
 *   成员变量为:2调用析构函数
 *   成员变量为:1调用析构函数
 *   成员变量为:-85705568调用析构函数
 *
 *   说明：
 *   四种情况：
 *   1、等同于 A a0 = A();调用不带参数的构造方法
 *   2、等同于 A a1 = A(1);调用带一个参数的构造方法
 *   3、同2
 *   4、在堆内存中动态开辟空间创建对象，需要手动释放内存。前三种为栈中创建对象，系统自动回收
 *
 *   此外：
 *   delete 只是释放内存空间，p 未置空前，仍指向原来的地址，所以需要置空
 *   如果构造函数由多个，且有默认参数，可能出现不知道调用那个构造函数错误
 *
 */
void ClassDemo::InitClass() {
    A a0;
    A a1(1);
    A a2 = A(2);
    A *p = new A(3);
    delete p;
    p = NULL;
}