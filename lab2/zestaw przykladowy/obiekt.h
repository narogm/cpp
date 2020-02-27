//
// Created by Mateusz on 22.03.2019.
//

#ifndef ZESTAW_PRZYKLADOWY_OBIEKTY_H
#define ZESTAW_PRZYKLADOWY_OBIEKTY_H

#include <iostream>

using namespace std;

class Punkt{
    double x,y;

public:
    Punkt();
    Punkt(double, double);
    void operator -();
    void getValues();
    double operator[](size_t el);
    friend ostream & operator<<(ostream &wyjscie, const Punkt &punkt);
};

class Macierz{
    double mxx,myy,mzz;

public:
    Macierz();
    Macierz(double, double, double);
    void operator -= (Macierz macierz);
    void operator - (Macierz macierz);
    void operator --();
    Macierz operator --(int);
    void getValues();
    bool operator<(Macierz macierz);
    operator double();
    double getMXX() const;
    double getMYY() const;
    double getMZZ() const;
    friend Macierz operator*(Macierz &m, int val);
};

ostream & operator << (ostream &wyjscie, const Punkt &punkt);
Macierz operator*(Macierz &m, int val);
Macierz operator*(const int &val,const Macierz &m);

#endif //ZESTAW_PRZYKLADOWY_OBIEKTY_H
