//
// Created by Mateusz on 11.04.2019.
//

#ifndef ZAD_Z_ZAJEC_DATA_H
#define ZAD_Z_ZAJEC_DATA_H

#include <iostream>
using namespace std;

namespace lab4{

    class Data{
        int dzien,miesiac,rok;
    public:
        Data(int _dzien, int _miesiac, int _rok);
        void setDzien(int _dzien);
        int getDzien();
        bool zapisz(std::ostream & os) const;
        bool wczytaj(std::istream & is);
        string opis() const;
        friend     ostream &operator<<(ostream &wyjscie, const Data &data);
        };

    ostream &operator<<(ostream &wyjscie, const Data &data);
}

#endif //ZAD_Z_ZAJEC_DATA_H
