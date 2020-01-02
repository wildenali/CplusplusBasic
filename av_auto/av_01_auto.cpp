#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(){

    int a = 29;
    string b = "test";
    double c = 63.35;
    float d = 88.21f;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl << endl;

    int aa = 29;
    string bb = "test";
    double cc = 63.35;
    float dd = 88.21f;

    cout << aa << typeid(aa).name() << endl;
    cout << bb << typeid(bb).name() << endl;
    cout << cc << typeid(cc).name() << endl;
    cout << dd << typeid(dd).name() << endl << endl;

    auto aaa = 29;
    auto bbb = "test";
    auto ccc = 63.35;
    auto ddd = 88.21f;

    cout << aaa << endl;
    cout << bbb << endl;
    cout << ccc << endl;
    cout << ddd << endl << endl;

    auto aaaa = 29;
    auto bbbb = "test";
    auto cccc = 63.35;
    auto dddd = 88.21f;

    cout << aaaa << typeid(aaaa).name() << endl;
    cout << bbbb << typeid(bbbb).name() << endl;
    cout << cccc << typeid(cccc).name() << endl;
    cout << dddd << typeid(dddd).name() << endl << endl;

    return 0;
}

/* NOTE
kalau tidak support c++11, pasti error
cara compilenya adalah begini

g++ -std=c++11 av_01_auto.cpp -o av_01_auto

*/