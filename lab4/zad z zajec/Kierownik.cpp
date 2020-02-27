//
// Created by Mateusz on 11.04.2019.
//

#include "Kierownik.h"

namespace lab4{

    Kierownik::Kierownik(const string &_imie, const string &_nazwisko, const Data &_data, double _pensja,
                         double _dodatek) :
                         Pracownik(_imie, _nazwisko, _data, _pensja),
                         dodatek(_dodatek)
                         {}

    double Kierownik::wyplata() const {
        return pensja+dodatek;
    }

    string Kierownik::opis() const {
        return Pracownik::opis() + "\ndodatek: " + to_string(dodatek) + "\n";
    }

    bool Kierownik::zapisz(std::ostream &os) const {
        Pracownik::zapisz(os);
        return static_cast<bool>(os << dodatek << endl);
    }

    bool Kierownik::wczytaj(std::istream &is) {
        Pracownik::wczytaj(is);
        cout << "Podaj dodatek\n";
        is >> dodatek;
        return static_cast<bool>(is);
    }
}