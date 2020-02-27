//
// Created by Mateusz on 28.05.2019.
//

#include "Osoba.h"
using namespace std;

static const string imiona[] = {"Mateusz", "Pawel", "Wojciech", "Jakub"};
static const string nazwiska[] = {"Kowalski", "Nowak"};

Osoba::Osoba() {
    imie = imiona[rand()%4];
    nazwisko = nazwiska[rand()%2];
    rok_urodzenia = rand()%61+1950;
}

string Osoba::getKlucz() const {
    return imie+nazwisko;
}

bool Osoba::operator==(const Osoba &osoba) const {
    return getKlucz() == osoba.getKlucz();
}

bool Osoba::operator<(const Osoba &osoba) const {
    if(getKlucz() == osoba.getKlucz()){
        cout << "Dwie takie same osoby -> " << getKlucz() << endl;
    }
    return getKlucz() < osoba.getKlucz();
}

void Osoba::display() const {
    cout << imie << " " << nazwisko << " " << rok_urodzenia << endl;
}
