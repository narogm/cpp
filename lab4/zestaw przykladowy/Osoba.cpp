#include "Osoba.h"
#include <iostream>

using namespace std;

Osoba::Osoba(const std::string &_imie, const std::string &_nazwisko, int _rok_ur):
    imie(_imie),
    nazwisko(_nazwisko),
    rok_ur(_rok_ur)
{
}

void Osoba::ustawImie(const std::string &im) {
    imie = im;
}

std::string Osoba::pobierzImie() const {
    return imie;
}

bool Osoba::zapisz(std::ostream &os) const {
    os<<imie<<" "<<nazwisko<<" "<<rok_ur<<endl;
    return true;
}

bool Osoba::wczytaj(std::istream &is) {

    is >> imie >> nazwisko >> rok_ur;
    return true;
//    std::string s = "scott>=tiger>=mushroom";
//    std::string delimiter = ">=";
//
//    size_t pos = 0;
//    std::string token;
//    while ((pos = s.find(delimiter)) != std::string::npos) {
//        token = s.substr(0, pos);
//        std::cout << token << std::endl;
//        s.erase(0, pos + delimiter.length());
//    }
//    std::cout << s << std::endl;




//    string record;
//    cout<<"\nPodaj wartosc\n";
//    getline(is,record);
//    vector <string> results;
//    string value;
//    for(int i=0; i < record.length(); i++){
//        if(record[i] == ','){
//            results.push_back(value);
//            value = "";
//        }
//        else if( record[i] != '[' && record[i] != ']'){
//            value += record[i];
//        }
//    }
//    results.push_back(value);
//    x = stof(results[0]);
//    y = stof(results[1]);
//    z = stof(results[2]);

    return false;
}

ostream &operator<<(ostream &wyjscie, const Osoba &osoba) {
    return wyjscie << osoba.imie<< " " << osoba.nazwisko << endl;
}