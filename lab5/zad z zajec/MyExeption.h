//
// Created by Mateusz on 21.05.2019.
//

#ifndef ZAD_Z_ZAJEC_MYEXEPTION_H
#define ZAD_Z_ZAJEC_MYEXEPTION_H

#include <iostream>
using namespace std;

class MyException{
    string desc;
public:
    MyException(string _desc) : desc(_desc){}
    string getDesc() const{ return desc;}
};


#endif //ZAD_Z_ZAJEC_MYEXEPTION_H
