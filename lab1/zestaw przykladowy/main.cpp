#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

class Data{

    int d,m,r;
    static int lata;

public:
    Data() : d{1}, m{1}, r{2000}{lata += r;};
    Data(int, int ,int);
    int get_year();
    void add_year();
    bool is_earlier(Data data);
    void wypisz();
    static int get_lata();
    void zapisz(ostream &os);
    void wczytaj(istream &is);
};

int Data::lata = 0;

Data::Data(int dzien, int miesiac, int rok = 2000) : d{dzien}, m{miesiac}, r{rok}{
    if(miesiac > 12){
        d=1;
        m=1;
        r=2000;
    } //else{
    //d=dzien;
    //m = miesiac;
    //r = rok;
    // }
    lata += r;
}

int Data::get_lata(){
    return lata;
}

int Data::get_year() {
    return r;
}

void Data::add_year() {
    r++;
}

bool Data::is_earlier(Data data) {
    if(r < data.r) return true;
    else if(r > data.r) return false;
    else if(m < data.m) return true;
    else if(m > data.m) return false;
    else return d < data.d;
}

void Data::wypisz(){
    cout << setw(2) << setfill('0') << d << "-" << setw(2) << setfill('0') << m << "-" << r << endl;
}

void Data::wczytaj(istream &is) {
    stringstream ss;
    ss << is.rdbuf();
    string record = ss.str();
    vector <int> result;
    int value=0;
    for(int i=0;i<record.length();i++){
        if(record[i] != '-'){
            value = value*10 + record[i]-48;
        }else{
            //cout<<value<<endl;
            result.push_back(value);
            value = 0;
        }
    }
    result.push_back(value);
    d = result[0];
    m = result[1];
    r = result[2];
}

void Data::zapisz(ostream &os) {

}

int main(){

    //Data data1;
    //cout << data1.get_year() << endl;
    Data data2{20,13,1999};
    data2.wypisz();
    //cout << data1.get_lata() <<endl;
    //cout << data1.is_earlier(data2);
//    string record;
//    cin>>record;
//    vector <int> result;
//    int value=0;
//    for(int i=0;i<record.length();i++){
//        if(record[i] != '-'){
//            value = value*10 + record[i]-48;
//        }else{
//            //cout<<value<<endl;
//            result.push_back(value);
//            value = 0;
//        }
//    }
//    result.push_back(value);
//
//    int d = (result[0]);
//    int m = (result[1]);
//    int r = (result[2]);
    //cout << d <<m<<r<< endl;
    Data data3;
    filebuf fb;
    fb.open("test.txt",ios::in);
    istream is(&fb);
    data3.wczytaj(is);
    fb.close();
//    filebuf fb;
//    fb.open("test.txt",ios::out);
//    ostream os(&fb);
//    string test = "test";
//    os << test;
//    fb.close();
    data3.wypisz();

}