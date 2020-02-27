//
// Created by Mateusz on 10.04.2019.
//

#ifndef ZESTAW_PRZYKLADOWY_POJAZDSILNIKOWY_H
#define ZESTAW_PRZYKLADOWY_POJAZDSILNIKOWY_H

#include "Pojazd.h"

class PojazdSilnikowy : public Pojazd{
protected:
    float pojemnosc;
    int moc_km;
public:
    PojazdSilnikowy(const Osoba &_wlasciciel, int _przebieg, float _pojemnosc, int _moc_km);
//    float pobierzPojemnosc();
//    std::string opis() const; /// zwraca napis z wszystkimi atrybutami (np. "wlasciciel: Jan Kowalski 1970, przebieg: 120000")
    virtual float mocKW() const;
//    bool zapisz(std::ostream & os) const;
//    bool wczytaj(std::istream & is);
};

#endif //ZESTAW_PRZYKLADOWY_POJAZDSILNIKOWY_H
