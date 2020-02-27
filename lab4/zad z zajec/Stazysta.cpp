//
// Created by Mateusz on 11.04.2019.
//

#include "Stazysta.h"
#include "Data.h"

namespace lab4{

    Stazysta::Stazysta(const string &_imie, const string &_nazwisko, const Data &_data, double _stypendium,
                       Data _koniec_stazu) :
                       Osoba(_imie,_nazwisko,_data),
                       stypendium(_stypendium),
                       koniec_stazu(_koniec_stazu)
                       {}

    string Stazysta::opis() const {
        return Osoba::opis() + "\nwyplata: " + to_string(stypendium) + "\n";
    }

    double Stazysta::wyplata() const {
        return stypendium;
    }

    bool Stazysta::zapisz(std::ostream &os) const {
        Osoba::zapisz(os);
        os << opis();
        koniec_stazu.zapisz(os);
        return static_cast<bool>(os);
    }

    bool Stazysta::wczytaj(std::istream &is) {
        Osoba::wczytaj(is);
        cout << "Podaj wartosci stypendium\n";
        is >> stypendium;
        koniec_stazu.wczytaj(is);
        return static_cast<bool>(is);
    }
}