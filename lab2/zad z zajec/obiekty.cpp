//
// Created by Mateusz on 26.03.2019.
//

#include "obiekty.h"
#include <iostream>

using namespace std;

void Wektor::operator++() {
    x++;
    y++;
}

Wektor Wektor::operator++(int) {
    Wektor kopia = (*this);
    x++;
    y++;
    return kopia;
}

bool Wektor::operator==(const Wektor &wektor) const {
    return x == wektor.x && y == wektor.y;
}

double Wektor::operator[](size_t el) const {
    if(el != 0 && el != 1){
        cout << "odwolanie do punktu poza zakres\n";
        exit(1);
    }
    return (el == 0) ? x : y;
}

void Wektor::operator+(const Wektor &wektor) {
    x += wektor.x;
    y += wektor.y;
}

void Wektor::operator+=(const Wektor &wektor) {
    x += wektor.x;
    y += wektor.y;
}

Macierz::operator double() {
    return p11*p22 - p12*p21;
}

void Macierz::operator-() {
    p11 = -p11;
    p12 = -p12;
    p21 = -p21;
    p22 = -p22;
}

ostream &operator<<(ostream &wyjscie, const Macierz &macierz) {
    return wyjscie << "[" <<macierz.p11 << " " << macierz.p12 << endl << " " << macierz.p21 << " " << macierz.p22<<"]\n";
}

ostream &operator<<(ostream &wyjscie, const Wektor &wektor) {
    return wyjscie<< wektor.x << "  "<<wektor.y<<endl;;
}

double Wektor::getX() const {
    return x;
}

double Wektor::getY() const {
    return y;
}

void operator*(Macierz &m, const int &val) {
    m.p11 *= val;
    m.p12 *= val;
    m.p21 *= val;
    m.p22 *= val;
}

void operator*(const int &val, Macierz &m) {
    m.p11 *= val;
    m.p12 *= val;
    m.p21 *= val;
    m.p22 *= val;
}

Wektor Macierz::operator*(const Wektor &wektor) {
    double new_x = wektor.getX() * p11 + wektor.getY() * p12;
    double new_y = wektor.getX() * p21 + wektor.getY() * p22;
    return Wektor{new_x, new_y};;
}
