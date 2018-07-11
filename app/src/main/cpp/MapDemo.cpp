//
// Created by Fly on 2018/7/11.
//

#include "MapDemo.h"
#include "Public.h"
#include <sstream>

MapDemo::MapDemo() {}

MapDemo::~MapDemo() {}

void MapDemo::InitMap() {
    map<string,string> mMap;
    for (int i = 0; i < 10; ++i) {
        stringstream sst;
        sst<<"hello"<<i;
        mMap.insert(map<string,string>::value_type(sst.str(),"ask"));
    }

    for (map<string,string>::iterator iter = mMap.begin();iter != mMap.end();++iter) {
        LOG("@app 222 = %s%s",iter->first.c_str(),iter->second.c_str());
    }
}