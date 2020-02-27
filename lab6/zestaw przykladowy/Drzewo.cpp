//
// Created by Mateusz on 25.05.2019.
//

#include <iostream>
#include "Drzewo.h"

using namespace std;

static string gatunki[] = {"dab", "orzech", "wierzba", "klon"};

Drzewo::Drzewo() {
    gatunek = gatunki[rand()%4];
    srednica = float(rand()%200+1)/100;
    wiek = rand()%100+1;
}

string Drzewo::getKlucz() const {
    return gatunek + to_string(wiek);
}

bool Drzewo::operator==(const Drzewo &other) const {
    return getKlucz() == other.getKlucz();
}

void Drzewo::display() const {
    cout << gatunek << " " << wiek << " " << srednica << endl;
}

bool Drzewo::operator<(const Drzewo &other) const {
    if(getKlucz() == other.getKlucz()){
        cout << "Dwa takie same drzewa! -> ";
        display();
    }
    return getKlucz() < other.getKlucz();
}

