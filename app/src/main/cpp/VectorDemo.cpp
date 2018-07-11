//
// Created by Fly on 2018/7/11.
//

#include "VectorDemo.h"
#include <sstream>
#include "Public.h"

VectorDemo::VectorDemo() {}

VectorDemo::~VectorDemo() {}


void VectorDemo::VectorInit() {
    vector<string> mVector;
    for (int i = 0; i < 10; ++i) {
        stringstream sst;
        sst<<"vector:"<<i;
        mVector.push_back(sst.str());
    }

    int count = mVector.size();
    for (int i = 0; i <count; ++i) {
        LOG("@app000 = %s",mVector[i].c_str());
    }

    for (vector<string>::iterator iter = mVector.begin();iter != mVector.end();++iter) {
        LOG("@app111 = %s",(*iter).data());
    }
}