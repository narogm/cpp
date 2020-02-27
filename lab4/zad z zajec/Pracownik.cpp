//
// Created by Mateusz on 11.04.2019.
//

#include "Pracownik.h"
#include "Osoba.h"


namespace lab4{

    Pracownik::Pracownik(const string &_imie, const string &_nazwisko, const Data &_data, double _pensja):
    Osoba(_imie,_nazwisko,_data),
    pensja(_pensja)
    {}

    string Pracownik::opis() const {
        return Osoba::opis() + " pensja -> " + to_string(pensja) + "\n";
    }

    double Pracownik::wyplata() const {
        return pensja;
    }

    bool Pracownik::zapisz(std::ostream &os) const {
        Osoba::zapisz(os);
        os << pensja << endl;
        return static_cast<bool>(os);
    }

    bool Pracownik::wczytaj(std::istream &is) {
        Osoba::wczytaj(is);
        cout << "Podaj pensje\n";
        is >> pensja;
        return static_cast<bool>(is);
    }
}