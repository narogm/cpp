#include <iostream>

#include "Data.h"
#include "Osoba.h"
#include "Pracownik.h"
#include "Kierownik.h"
#include "Stazysta.h"

using namespace std;
using namespace lab4;

int main() {
    cout <<"Tworzenie dat\n";
    Data *d1 = new Data(1,1,2000);
    Data *d2 = new Data(2,2,2010);
    cout << (*d2);
    d2->setDzien(5);
    d2->zapisz(cout);
    Data *d3 = new Data(3,3,2015);
//    d3->wczytaj(cin);
//    cout << (*d3);
    d3->setDzien(15);
    cout << d3->getDzien();

    cout <<"\nOsoby:\n";
    Osoba *pracownik1 = new Pracownik("Jan","Kowalski",(*d1),5000);
    Osoba *kierownik1 = new Kierownik("Adam","Nowak",(*d2),6000,2000);
    Osoba *stazysta = new Stazysta("Ewa","Nowak",(*d1),2500,(*d3));

    cout <<"\nPracownik:\n";
    cout << pracownik1->opis();
    cout << "Wyplata " << pracownik1->wyplata() << endl;
    pracownik1->wczytaj(cin);
    pracownik1->zapisz(cout);

    cout <<"\nKierownik:\n";
    cout << kierownik1->opis();
    cout << "Wyplata " << kierownik1->wyplata() << endl;
    kierownik1->wczytaj(cin);
    kierownik1->zapisz(cout);

    cout <<"\nStazysta:\n";
    cout << stazysta->opis();
    cout << "Wyplata " << stazysta->wyplata() << endl;
    stazysta->wczytaj(cin);
    stazysta->zapisz(cout);
    return 0;
}