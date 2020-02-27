//
// Created by Mateusz on 11.04.2019.
//

#ifndef ZAD_Z_ZAJEC_OSOBA_H
#define ZAD_Z_ZAJEC_OSOBA_H

#include <iostream>
#include "Data.h"

using namespace std;

namespace lab4{

    class Osoba{
    protected:
        string imie, nazwisko;
        Data rok_ur;
    public:
        Osoba(const string &_imie, const string &_nazwisko, const Data &_data);
        virtual ~Osoba(){}
        virtual string opis() const;
        virtual double wyplata() const = 0;
        virtual bool zapisz(std::ostream & os) const;
        virtual bool wczytaj(std::istream & is);
    };

}

#endif //ZAD_Z_ZAJEC_OSOBA_H
