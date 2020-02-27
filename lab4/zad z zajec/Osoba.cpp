//
// Created by Mateusz on 11.04.2019.
//

#include "Osoba.h"
#include "Data.h"

namespace lab4{

    Osoba::Osoba(const string &_imie, const string &_nazwisko, const Data &_rok_ur):
    imie(_imie),
    nazwisko(_nazwisko),
    rok_ur(_rok_ur)
    {}

    string Osoba::opis() const {
        return imie + " " + nazwisko + " " + rok_ur.opis();
    }

    bool Osoba::zapisz(std::ostream &os) const {
        return static_cast<bool>(os << imie << "-" << nazwisko << "-" << rok_ur.zapisz(os) << endl);

    }

    bool Osoba::wczytaj(std::istream &is) {
        cout << "Podaj wartosci dla osoby\n";
        is >> imie >> nazwisko;
        rok_ur.wczytaj(is);
        return static_cast<bool>(is);
    }
}
