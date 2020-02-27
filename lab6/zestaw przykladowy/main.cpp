#include <iostream>
#include <time.h>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include "Drzewo.h"

using namespace std;

Drzewo gen(){
    static int i=1;
    auto a  =Drzewo();
    a.setWiek(i++);
    return a;
}

int main() {
    srand(time(NULL));
    vector <Drzewo> drzewa;
    for(int i=0; i<25; i++){
        drzewa.push_back(Drzewo());
    }
    for(vector<Drzewo>::iterator it = drzewa.begin(); it!= drzewa.end(); it++){
        (*it).display();
    }

    cout << "######\n\nset:\n";
    set <Drzewo> zbior(drzewa.begin(), drzewa.end());
//    for(set<Drzewo>::iterator it = zbior.begin(); it!= zbior.end(); it++){
//        (*it).display();
//    }

    cout << "######\n\nmapa:\n";
    map <string, Drzewo> mapa;
    for(int i=0; i<25; i++){
        auto a = Drzewo();
        mapa[a.getKlucz()] = a;
    }
    for(map<string, Drzewo> :: iterator it = mapa.begin(); it != mapa.end(); it++){
        it->second.display();
    }

    cout << "######\n\ngenerate:\n";
    vector<Drzewo> drz(25);
    generate(drz.begin(), drz.end(), gen);
    for(vector<Drzewo>::iterator it = drz.begin(); it!= drz.end(); it++){
        (*it).display();
    }

    cout << "######\n\nmin_element:\n";
    auto a = min_element(drz.begin(), drz.end(), [] (Drzewo &drz1, Drzewo &drz2) {
        return drz1.getSrednica() < drz2.getSrednica();
    });
    a->display();
    cout << "######\n\ncount_if:\n";
    string gat;
    cin >> gat;
    int amount = count_if(drz.begin(), drz.end(), [&gat] (Drzewo &drz) {
        return gat == drz.getGatunek();
    });
    cout << "Ilosc: " << amount << endl;

    cout << "######\n\nfor_each:\n";
    for_each(drz.begin(), drz.end(), [] (Drzewo &drz) {
        drz.increaseSrednica(0.1);
    });
    for(vector<Drzewo>::iterator it = drz.begin(); it!= drz.end(); it++){
        (*it).display();
    }

    cout << "######\n\nremove_if:\n";
    vector<Drzewo> :: iterator iter;
    iter = remove_if(drz.begin(), drz.end(), [] (Drzewo &drz) {
        return drz.getSrednica() > 1;
    });
    for(vector<Drzewo>::iterator it = drz.begin(); it!= iter; it++){
        (*it).display();
    }
    return 0;
}