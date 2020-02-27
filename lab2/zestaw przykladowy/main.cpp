#include <iostream>
#include "obiekt.h"

using namespace std;

int main() {

    Punkt pkt1;
    Punkt pkt2{2,5};

    pkt2.operator-();
    pkt2.getValues();

    Macierz m1{1,2,-3};
    Macierz m2{2,5,1};

    --m2;
    m2--;
    m2.getValues();
    Macierz m3 = m2*3;
    cout << "po mnozeniu\n";
    m2.getValues();
    m3.getValues();
    cout << "----\n";

    m1-=m2;
    m1.getValues();
    m1-m2;
    m1.getValues();
//    cout << m1.getDet() << endl;
//    cout << m2.getDet() << endl;
    cout << (m2<m1) << endl;
    cout << "abc\n";
    cout << pkt1;
    cout << pkt2[0];
    cout << "\n\n\n\n\n\n";
    cout << (double)m2 << endl;
    m2.getValues();
    Macierz m4 = 3*m2;
    m3.getValues();
    return 0;
}