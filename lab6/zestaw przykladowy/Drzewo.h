//
// Created by Mateusz on 25.05.2019.
//

#ifndef ZESTAW_PRZYKLADOWY_DRZEWO_H
#define ZESTAW_PRZYKLADOWY_DRZEWO_H

#include <iostream>

using namespace std;

class Drzewo{
    string gatunek;
    double srednica;
    int wiek;
public:
    Drzewo();
    string getKlucz() const;
    bool operator==(const Drzewo &other) const;
    void display() const;
    bool operator<(const Drzewo &drzewo) const;
    void setWiek(int _wiek){wiek = _wiek;}
    double getSrednica(){ return srednica;}
    string getGatunek(){ return gatunek;}
    void increaseSrednica(double _value){ srednica += _value;}
};

#endif //ZESTAW_PRZYKLADOWY_DRZEWO_H
