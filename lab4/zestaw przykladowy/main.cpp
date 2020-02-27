#include <iostream>

#include "Osoba.h"
#include "Pojazd.h"
#include "PojazdSilnikowy.h"
#include "Rower.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Osoba *osoba = new Osoba("Mateusz","Narog",1998);
    Pojazd *pojazd = new Rower((*osoba),10000,true);
    Pojazd *silnikowy = new PojazdSilnikowy((*osoba), 20000, 500, 140);
    return 0;
}