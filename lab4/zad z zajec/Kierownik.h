//
// Created by Mateusz on 11.04.2019.
//

#ifndef ZAD_Z_ZAJEC_KIEROWNIK_H
#define ZAD_Z_ZAJEC_KIEROWNIK_H

#include "Pracownik.h"

namespace lab4{
    class Kierownik : public Pracownik{
    protected:
        double dodatek;
    public:
        Kierownik(const string &_imie, const string &_nazwisko, const Data &_data, double _pensja, double _dodatek);
        virtual string opis() const;
        virtual double wyplata() const;
        virtual bool zapisz(std::ostream & os) const;
        virtual bool wczytaj(std::istream & is);
    };
}

#endif //ZAD_Z_ZAJEC_KIEROWNIK_H
