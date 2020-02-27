#include <iostream>
#include "obiekty.h"

using namespace std;

int main() {

    Wektor w1;
    Wektor w2{2,4};
    Wektor w3{1,3};
    cout << w1;
    cout << w2;
    w2+w3;
    cout<<w2;
    w1+=w3;
    cout<<w1;
    w1++;
    ++w1;
    cout<<"po inkrementacji " << w1;
    cout<< (w1==w2)<< endl;
    cout<<w1[0]<<endl;

    cout<<"\nmacierze\n";
    Macierz m1;
    Macierz m2{1,2,3,4};
    cout << m1;
    cout << m2;
    -m2;
    m2*2;
    2*m2;
    cout << m2;

    Macierz m3{1,2,3,4};
    cout<<"-------\n\n";
    cout<< w1;
    cout<<m3;
    Wektor w5 = m3*w1;
    cout << w5;

    return 0;
}