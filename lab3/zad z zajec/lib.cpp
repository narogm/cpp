//
// Created by Mateusz on 02.04.2019.
//

#include "lib.h"

Terminarz::Terminarz(int size) {
    daty = new Data[size];
    this->size = size;
    counter = 0;
}

Terminarz::Terminarz(const Terminarz &term) {
    daty = new Data[term.size];
    size = term.size;
    counter = term.counter;
    copy(term.daty, term.daty+size, daty);
}

Terminarz::Terminarz(Terminarz &&term) {
    daty = term.daty;
    size = term.size;
    counter = term.counter;
    term.daty = nullptr;
    term.counter = 0;
}

Terminarz::~Terminarz() {
    delete[] daty;
}

Terminarz &Terminarz::operator=(const Terminarz &term) {
    size = term.size;
    delete[] daty;
    daty = new Data[size];
    copy(term.daty, term.daty+size, daty);
    counter = term.counter;
    return *this;
}

Terminarz &Terminarz::operator=(Terminarz &&term) {
    delete[] daty;
    daty = term.daty;
    size = term.size;
    counter = term.counter;
    term.daty = nullptr;
    term.counter = 0;
    return *this;
}

void Terminarz::add(const Data &data) {
    if(counter>=size){
        string wyjatek = "Brak miejsca w tablicy\n";
        throw wyjatek;
    }
    daty[counter++] = data;
}

ostream &operator<<(ostream &wyjscie, const Data &data) {
    return wyjscie << "Data: " << data.dzien << "." << data.miesiac << endl;
}

ostream &operator<<(ostream &wyjscie, const Terminarz &term) {
    for(int i=0; i<term.counter; i++){
        wyjscie << term.daty[i];
    }
    return wyjscie;
}

int Terminarz::get_counter() const {
    return counter;
}
