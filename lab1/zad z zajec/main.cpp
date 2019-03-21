#include <iostream>
#include <cmath>
#include <sstream>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

class Punkt{
    float x,y,z;
    static int licznik;

public:
    Punkt() : x{0.0f}, y{0.0f}, z{0.0f} { licznik++;}
    Punkt(float x,float y,float z=0) : x{x}, y{y}, z{z} { licznik++;}
    float getX();
    void changeX(float newValue);
    double getDistance(Punkt punkt);
    void wypisz();
    static int getLicznik();
    void wczytaj(istream &is);
    void zapisz(ostream &os);
};

int Punkt::licznik=0;

float Punkt::getX() {
    return x;
}

void Punkt::changeX(float newValue) {
    x = newValue;
}

double Punkt::getDistance(Punkt punkt) {
    return sqrt(pow(x-punkt.x,2) + pow(y-punkt.y,2) + pow(z-punkt.z,2));
}

void Punkt::wypisz() {
    cout << x << "," << y << "," << z << endl;
}

int Punkt::getLicznik() {
    return licznik;
}

void Punkt::wczytaj(istream &is) {
    string record;
    cout<<"\nPodaj wartosc\n";
    getline(is,record);
    vector <string> results;
    string value;
    for(int i=0; i < record.length(); i++){
        if(record[i] == ','){
            results.push_back(value);
            value = "";
        }
        else if( record[i] != '[' && record[i] != ']'){
            value += record[i];
        }
    }
    results.push_back(value);
    x = stof(results[0]);
    y = stof(results[1]);
    z = stof(results[2]);
}

void Punkt::zapisz(ostream &os) {
    os << '[' << fixed << setprecision(4)<< x << ',' << y << ','  << z << ']';
}

int main() {
    Punkt punkt1;
    Punkt punkt2{1.0,2.0};
    Punkt punkt3{2.0,1.0,3.0};

    punkt1.wypisz();
    cout << punkt2.getX() << endl;
    punkt3.changeX(1.5);
    cout << punkt3.getX() << endl;
    cout << punkt1.getDistance(punkt2) << endl;
    cout << punkt1.getLicznik() << endl;

    istream &is = cin;
    punkt2.wczytaj(is);
    ostream &os = cout;
    punkt2.zapisz(os);

    return 0;
}