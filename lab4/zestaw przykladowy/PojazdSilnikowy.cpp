//
// Created by Mateusz on 10.04.2019.
//

#include "PojazdSilnikowy.h"

PojazdSilnikowy::PojazdSilnikowy(const Osoba &_wlasciciel, int _przebieg, float _pojemnosc, int _moc_km) :
    Pojazd(_wlasciciel,_przebieg),
    pojemnosc(_pojemnosc),
    moc_km(_moc_km)
{}

float PojazdSilnikowy::mocKW() const {
    return 1.4*moc_km;
}

