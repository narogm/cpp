//
// Created by Mateusz on 22.03.2019.
//
#include <iostream>
#include "obiekt.h"
using namespace std;

Punkt::Punkt() : x{0}, y{0} {}
Punkt::Punkt(double x, double y) : x{x}, y{y} {}
void Punkt::getValues(){
    cout << x << "  " << y << endl;
}
void Punkt::operator-() {
    x = -x;
    y = -y;
}

ostream &operator<<(ostream &wyjscie, const Punkt &punkt) {
    return wyjscie<< punkt.x << "  "<<punkt.y<<endl;;
}

double Punkt::operator[](size_t el) {
    if(el != 0 && el != 1){
        cout << "odwolanie do punktu poza zakres\n";
        exit(1);
    }
    return (el == 0) ? x : y;
}

Macierz::Macierz() : mxx{0},myy{0},mzz{0} {}
Macierz::Macierz(double x, double y, double z) : mxx{x},myy{y},mzz{z} {}

void Macierz::operator-=(Macierz macierz) {
    mxx -= macierz.mxx;
    myy -= macierz.myy;
    mzz -= macierz.mzz;
}

void Macierz::operator-(Macierz macierz) {
    mxx -= macierz.mxx;
    myy -= macierz.myy;
    mzz -= macierz.mzz;
}
void Macierz::operator--() {
    mxx -= 1;
    myy -= 1;
    mzz -= 1;
}

void Macierz::getValues() {
    cout << mxx << "  " << myy << "  " << mzz << endl;
}

Macierz Macierz::operator--(int) {
    Macierz kopia = (*this);
    --mxx;
    --myy;
    --mzz;
    return kopia;
}

Macierz operator*(Macierz &m, int val) {
//    m.mxx *= val;
//    m.myy *= val;
//    m.mzz *= val;
    return Macierz{m.getMXX()*val,m.getMYY()*val,m.getMZZ()*val};
}

Macierz operator*(const int &val, const Macierz &m){
    return Macierz{m.getMXX()*val,m.getMYY()*val,m.getMZZ()*val};
}

Macierz::operator double() {
    return 111.222 + mxx;
}

bool Macierz::operator<(Macierz macierz) {
    return (double) *this < (double) macierz;
}


double Macierz::getMXX() const {
    return mxx;
}

double Macierz::getMYY() const{
    return myy;
}

double Macierz::getMZZ() const {
    return mzz;
}



