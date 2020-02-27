#include <iostream>
#include <string.h>
#include "list.h"

using namespace std;

string suma(const char *a, const char *b) {
    string result;
    result += a;
    result += b;
    return result;
}

template<class T>
T suma(T a, T b) {
    return a + b;
}

int main() {
    const char *a = "aaa";
    const char *b = "bbb";
    string str1 = "str1";
    string str2 = "str2";
    cout << suma(2, 1) << endl;
    cout << suma(1.5, 3.75) << endl;
    cout << suma(a, b) << endl;
    cout << suma(str1, str2) << endl;

    cout << "\n##########\nTestowanie listy\n";
    try {
        List<int> list;
        list.insert(5);
        list.insert(3);
        list.insert(1);
        cout << list;
        list.remove();
        cout << list;

        List<int> emptyList;
        emptyList.remove();
    }
    catch (MyException e) {
        cout << "Exception: " << e.getDesc() << endl;
    }

    return 0;
}