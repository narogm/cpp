//
// Created by Mateusz on 08.04.2019.
//

#include "Pojazd.h"

Pojazd::Pojazd(const Osoba &_wlasciciel, int _przebieg) :
    wlasciciel(_wlasciciel),
    przebieg(_przebieg)
{}

Pojazd::~Pojazd() {

}

std::string Pojazd::opis() const {
    return "wlasciciel: ";
}

//float Pojazd::mocKW() const {
//    return 0;
//}

bool Pojazd::zapisz(std::ostream &os) const {
    return false;
}

bool Pojazd::wczytaj(std::istream &is) {
    return false;
}


