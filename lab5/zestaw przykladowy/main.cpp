#include <iostream>
#include "bst.h"
#include "Exception.h"

using namespace std;


template <class T>
bool rowne(T a, T b, T c){
    return (a == b) and (b == c);
}

bool rowne(const char *a, const char *b,const char *c){
    cout<<"elo\n";
    return (a == b) and (b == c);
}


int main() {
    const char* a = "a";
    const char* b = "a";
    const char* c = "a";
    cout<<rowne(a,b,c)<<endl;
    cout<<rowne(1,1,1);

    cout<<"################\n";

    try {
        TreeBST<int> treeBst;
        treeBst.insert(5);
        treeBst.insert(4);
        treeBst.insert(7);
        treeBst.insert(6);
        treeBst.insert(2);

        cout<<treeBst.contains(2)<<endl;
        cout<<treeBst.contains(1)<<endl;

        treeBst.print();
        cout<<treeBst<<endl;
        treeBst.insert(2);
    }
    catch(Exception e) {
        cout<<"Exception: "<<e.getDesc()<<endl;
    }
    return 0;
}