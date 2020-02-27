//
// Created by Mateusz on 11.04.2019.
//

#ifndef ZAD_Z_ZAJEC_STAZYSTA_H
#define ZAD_Z_ZAJEC_STAZYSTA_H

#include "Data.h"
#include "Osoba.h"

namespace lab4{
    class Stazysta : public Osoba{
    protected:
        double stypendium;
        Data koniec_stazu;
    public:
        Stazysta(const string &_imie, const string &_nazwisko, const Data &_data, double _stypendium, Data _koniec_stazu);
        virtual string opis() const;
        virtual double wyplata() const;
        virtual bool zapisz(std::ostream & os) const;
        virtual bool wczytaj(std::istream & is);

    };
}

#endif //ZAD_Z_ZAJEC_STAZYSTA_H
