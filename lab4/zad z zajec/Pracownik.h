//
// Created by Mateusz on 11.04.2019.
//

#ifndef ZAD_Z_ZAJEC_PRACOWNIK_H
#define ZAD_Z_ZAJEC_PRACOWNIK_H

#include <iostream>
#include "Osoba.h"

using namespace std;

namespace lab4{
    class Pracownik : public Osoba{
    protected:
        double pensja;
    public:
        Pracownik(const string &_imie, const string &_nazwisko, const Data &_data, double _pensja);
        virtual ~Pracownik(){}
        virtual string opis() const;
        virtual double wyplata() const;
        virtual bool zapisz(std::ostream & os) const;
        virtual bool wczytaj(std::istream & is);
    };
}

#endif //ZAD_Z_ZAJEC_PRACOWNIK_H
