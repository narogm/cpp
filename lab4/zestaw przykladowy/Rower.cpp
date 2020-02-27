//
// Created by Mateusz on 09.04.2019.
//

#include "Rower.h"

Rower::Rower(const Osoba &_wlasciciel, int _przebieg, bool _amatorski) :
    Pojazd(_wlasciciel,_przebieg),
    amatorski(_amatorski)
{}

float Rower::mocKW() const {
    return (amatorski) ? 0.3 : 0.4;
}
