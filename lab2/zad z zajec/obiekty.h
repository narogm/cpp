//
// Created by Mateusz on 26.03.2019.
//

#ifndef OBIEKTY_H
#define OBIEKTY_H

#include <iostream>

using namespace std;

class Wektor;

class Macierz{
    double p11,p12,p21,p22;
public:
    Macierz(double p11=0, double p12=0, double p21=0,double p22=0): p11{p11}, p12{p12}, p21{p21}, p22{p22}{}
    void operator-();
    operator double();
    friend ostream &operator<<(ostream &wyjscie, const Macierz &macierz);
    friend void operator*(Macierz &m,const int &val);
    friend void operator*(const int &val,Macierz &m);
    Wektor operator*(const Wektor &wektor);
};

class Wektor{
    double x,y;
public:
    Wektor(double x=0, double y=0) : x{x}, y{y}{}
    void operator+(const Wektor &wektor);
    void operator+=(const Wektor &wektor);
    void operator++();
    Wektor operator ++(int);
    bool operator==(const Wektor &wektor) const;
    double operator[](size_t el) const;
    friend ostream &operator<<(ostream &wyjscie, const Wektor &wektor);
    double getX() const;
    double getY() const;
};

ostream & operator << (ostream &wyjscie, const Wektor &wektor);
void operator*(Macierz &m,const int &val);
void operator*(const int &val,Macierz &m);

#endif
