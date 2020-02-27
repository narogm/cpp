//
// Created by Mateusz on 29.03.2019.
//

#include "lib.h"

Grupa::Grupa(int size) {
    lista_osob = new Osoba[size];
    this->size = size;
    counter = 0;
}

Grupa::Grupa(const Grupa &grupa) : lista_osob{new Osoba[grupa.size]}, size{grupa.size}, counter{grupa.counter}{
    copy(grupa.lista_osob, grupa.lista_osob+size, lista_osob);
}

Grupa::Grupa(Grupa &&grupa) : lista_osob{grupa.lista_osob}, size{grupa.size}, counter{grupa.counter} {
    grupa.lista_osob = nullptr;
    grupa.counter = 0;
}

void Grupa::add(const Osoba &os) {
    if(counter>=size){
        string wyjatek = "Brak miejsca w tablicy\n";
        throw wyjatek;
    }
    lista_osob[counter++] = os;
}

Grupa::~Grupa() {
    delete[] lista_osob;
}

Grupa &Grupa::operator=(const Grupa &grupa) {
    lista_osob = grupa.lista_osob;
    size = grupa.size;
    counter = grupa.counter;
    return *this;
}

Grupa &Grupa::operator=(Grupa &&grupa) {
    lista_osob = grupa.lista_osob;
    size = grupa.size;
    counter = grupa.counter;
    grupa.lista_osob = nullptr;
    grupa.counter = 0;
    return *this;
}

ostream &operator<<(ostream &wyjscie, const Grupa &grupa){
    for(int i=0; i<grupa.counter; i++){
        wyjscie << grupa.lista_osob[i];
    }
    return wyjscie;
}

ostream &operator<<(ostream &wyjscie, const Osoba &osoba) {
    return wyjscie << osoba.imie << " -> " << osoba.rok_ur << endl;
}
