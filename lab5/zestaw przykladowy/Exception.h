//
// Created by Mateusz on 05.05.2019.
//

#ifndef ZESTAW_PRZYKLADOWY_EXCEPTION_H
#define ZESTAW_PRZYKLADOWY_EXCEPTION_H

#include <iostream>
using namespace std;

class Exception{
    string desc;
public:
    Exception(string _desc) : desc(_desc){}
    string getDesc() const{ return desc;}
};

#endif //ZESTAW_PRZYKLADOWY_EXCEPTION_H
