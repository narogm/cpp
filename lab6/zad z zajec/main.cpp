#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <time.h>
#include <algorithm>
#include "Osoba.h"

using namespace std;

int main() {
    srand(time(NULL));

    vector <Osoba> osoby;
    for(int i=0; i<10; i++){
        osoby.push_back(Osoba());
    }
    for(vector <Osoba> :: iterator iter = osoby.begin(); iter != osoby.end(); iter++){
        iter->display();
    }

    cout << "\n#####\nset:\n";
    set <Osoba> zbior(osoby.begin(), osoby.end());

    cout << "\n#####\nmapa:\n";
    map <string, Osoba> mapa;
    for(int i=0; i<10; i++){
        auto a = Osoba();
        mapa[a.getKlucz()] = a;
    }
    for(map <string, Osoba>::iterator iter = mapa.begin(); iter != mapa.end(); iter++){
        iter->second.display();
    }

    cout << "\n#####\ngenerate:\n";
    vector<Osoba> os(20);
    generate(os.begin(), os.end(), [] () {
        auto a = Osoba();
        return a;
    });
    for(vector <Osoba> :: iterator iter = os.begin(); iter != os.end(); iter++){
        iter->display();
    }
    cout << "\n#####\nfind:\n";
    auto result = find_if(os.begin(), os.end(), [] (Osoba &osoba) -> bool {
        return osoba.getRokUrodzenia() == 2000;
    });
    if(result != os.end()){
        result->display();
    }
    else{
        cout << "Brak osoby urodzonej w 2000 roku\n";
    }

    cout << "\n#####\ncount_if:\npodaj wartosc:";
    int rok_ur;
    cin >> rok_ur;
    int amount = count_if(os.begin(), os.end(), [&rok_ur] (Osoba &osoba) {
        return rok_ur == osoba.getRokUrodzenia();
    });
    cout << "Ilosc: " << amount << endl;

    cout << "\n#####\nsort:\n";
    sort(os.begin(), os.end(), [] (Osoba &os1, Osoba &os2){
        if(os1.getRokUrodzenia() == os2.getRokUrodzenia())
            return os1.getNazwisko() < os2.getNazwisko();
        return os1.getRokUrodzenia() < os2.getRokUrodzenia();
    });
    for(vector <Osoba> :: iterator iter = os.begin(); iter != os.end(); iter++){
        iter->display();
    }

    cout << "\n#####\nunique:\n";
    sort(os.begin(), os.end(), [] (Osoba &os1, Osoba &os2){
        return os1.getNazwisko() < os2.getNazwisko();
    });
    auto it = unique(os.begin(), os.end(), [] (Osoba &os1, Osoba &os2) {
        return os1.getNazwisko() == os2.getNazwisko();
    });
    for(vector <Osoba> :: iterator iter = os.begin(); iter != it; iter++){
        iter->display();
    }
    return 0;
}