#include <iostream>
#include "lib.h"

using namespace std;

int main() {

    try {
        Data data1;
        Data data2{11, 5};
        Data data3{5, 2};
        cout << data1 << data2 << "-----\n";

        Terminarz terminarz;
        cout << "counter: " << terminarz.get_counter() << endl;
        terminarz.add(data1);
        terminarz.add(data2);
        cout << terminarz << "-----\n";

        //konstruktor kopiujacy
        Terminarz term_kopia(terminarz);
        term_kopia.add(data3);
        cout << "po kopiowaniu (konstruktor)\n";
        cout << "poczatkowy terminarz\n" << terminarz << "\nkopia\n" << term_kopia << "-----\n";

        //konstruktor przenoszacy
        Terminarz term_przeniesienie(move(term_kopia));
        cout << "konstruktor przenoszacy\n";
        cout << "poczatkowy terminarz\n" << term_kopia << "\nnowy terminarz\n" << term_przeniesienie << "-----\n";

        //operator =
        Terminarz term_oper_kopia;
        term_oper_kopia = terminarz;
        term_oper_kopia.add(data3);
        cout << "operator = \n";
        cout << "poczatkowy terminarz\n" << terminarz << "\nnowy terminarz\n" << term_oper_kopia << "-----\n";

        //przenoszacy operator =
        Terminarz term_oper_przeniesienie;
        term_oper_przeniesienie = move(terminarz);
        cout << "przenoszacy operator = \n";
        cout << "poczatkowy terminarz\n" << terminarz << "\nnowy terminarz\n" << term_oper_przeniesienie << "-----\n";

        //sprawdzenie poprawnosci wyjatku
        Terminarz term(2);
        term.add(data1);
        term.add(data2);
        term.add(data3);
    }
    catch (string w){
        cout << "wyjatek:\n" << w;
        exit(1);
    }
    return 0;
}