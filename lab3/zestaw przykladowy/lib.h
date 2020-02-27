#ifndef ZESTAW_PRZYKLADOWY_LIB_H
#define ZESTAW_PRZYKLADOWY_LIB_H

#include <iostream>

using namespace std;

class Osoba {
    string imie;
    int rok_ur;

public:
    Osoba(string imie = "", int rok_ur = 1970): imie{imie}, rok_ur{rok_ur}{};
    friend ostream &operator<<(ostream &wyjscie, const Osoba &osoba);
};

class Grupa {
    Osoba *lista_osob;
    int size;
    int counter;

public:
    Grupa(int size);
    Grupa(const Grupa &grupa);
    Grupa(Grupa &&grupa);
    ~Grupa();

    Grupa &operator=(const Grupa &grupa);
    Grupa &operator=(Grupa && grupa);
    void add(const Osoba &os);
    friend ostream &operator<<(ostream &wyjscie, const Grupa &grupa);
};

ostream &operator<<(ostream &wyjscie, const Grupa &grupa);
ostream &operator<<(ostream &wyjscie, const Osoba &osoba);

#endif //ZESTAW_PRZYKLADOWY_LIB_H
