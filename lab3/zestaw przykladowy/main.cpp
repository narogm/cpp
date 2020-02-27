#include "lib.h"

#include <iostream>

using namespace std;

int main() {
    Osoba os1{"Mateusz", 1998};
    Osoba os2{"Pawel", 2000};
    cout << os1 << os2 << "\ngrupy:\n";
    Osoba os3("wojtek", 1999);

    Grupa grupa(10);

    try {
        grupa.add(os1);
        grupa.add(os2);
        Grupa grupa_kopia(grupa);
        grupa.add(os3);
        cout << grupa << "kopia:\n" << grupa_kopia;
        Grupa grupa_przeniesienie(move(grupa));
        cout << "orginal:\n" << grupa << "przeniesienie:\n" << grupa_przeniesienie;
        cout << "\n\n\n";
        Grupa grupa_operator_kopia = grupa_kopia;
        grupa_operator_kopia.add(os3);
        cout<< "sprawdzenie operatorow\n" << grupa_kopia << grupa_operator_kopia;

        Grupa grupa_operator_przeniesienie = move(grupa_przeniesienie);
        cout << "\noperator przeniesienia\n" << grupa_przeniesienie << "---\n" << grupa_operator_przeniesienie << "---\n";
    }
    catch(string w) {
        cout << "Wyjatek: " << w;
    }


    return 0;
}