//
// Created by Mateusz on 11.04.2019.
//

#include "Data.h"

namespace lab4{
    Data::Data(int _dzien, int _miesiac, int _rok) :
    dzien(_dzien),
    miesiac(_miesiac),
    rok(_rok)
    {}

    void Data::setDzien(int _dzien) {
        dzien = _dzien;
    }

    int Data::getDzien() {
        return dzien;
    }

    bool Data::zapisz(std::ostream &os) const {
        return static_cast<bool>(os << dzien << "-" << miesiac << "-" << rok << endl);
    }

    bool Data::wczytaj(std::istream &is) {
        cout << "Podaj wartosci dla daty\n";
        is >> dzien >> miesiac >> rok;
        return static_cast<bool>(is);
    }

    ostream &operator<<(ostream &wyjscie, const Data &data) {
        return wyjscie << data.dzien<< "-" << data.miesiac << "-" << data.rok << endl;
    }

    string Data::opis() const {
        return to_string(dzien)+"-"+to_string(miesiac)+"-"+to_string(rok)+"\n";
    }
}