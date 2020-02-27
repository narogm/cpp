#ifndef ZAD_Z_ZAJEC_LIB_H
#define ZAD_Z_ZAJEC_LIB_H

#include <iostream>

using namespace std;

class Data{
    int dzien, miesiac;
public:
    Data(int dz = 1, int ms =1) : dzien{dz}, miesiac{ms} {};
    friend ostream &operator<<(ostream &wyjscie, const Data &data);
};

class Terminarz{
    Data *daty;
    int size;
    int counter;
public:
    Terminarz(int size=6);
    Terminarz(const Terminarz &term);
    Terminarz(Terminarz &&term);
    ~Terminarz();

    int get_counter() const;
    Terminarz &operator=(const Terminarz &term);
    Terminarz &operator=(Terminarz &&term);
    void add(const Data &data);
    friend ostream &operator<<(ostream &wyjscie, const Terminarz &term);
};

ostream &operator<<(ostream &wyjscie, const Terminarz &term);
ostream &operator<<(ostream &wyjscie, const Data &data);

#endif //ZAD_Z_ZAJEC_LIB_H
