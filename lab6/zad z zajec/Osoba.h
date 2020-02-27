//
// Created by Mateusz on 28.05.2019.
//

#ifndef ZAD_Z_ZAJEC_OSOBA_H
#define ZAD_Z_ZAJEC_OSOBA_H

#include <iostream>
using namespace std;

class Osoba{
    string imie, nazwisko;
    int rok_urodzenia;
public:
    Osoba();
    string getKlucz() const;
    bool operator==(const Osoba &osoba) const;
    void display() const;
    bool operator<(const Osoba &osoba) const;
    int getRokUrodzenia(){ return rok_urodzenia;}
    string getNazwisko(){ return nazwisko;}
};

#endif //ZAD_Z_ZAJEC_OSOBA_H
