#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

// bagusnya pake auto ini pada misalnya di template
template<typename T, typename U>
T max(T a, U b){
    return (a > b) ? a : b;
} 

int main(){

    int a = 29;
    string b = "test";
    double c = 63.35;
    float d = 88.21f;
    auto e = max(c,a);

    cout << a << typeid(a).name() << endl;
    cout << b << typeid(b).name() << endl;
    cout << c << typeid(c).name() << endl;
    cout << d << typeid(d).name() << endl;
    cout << e << typeid(e).name() << endl << endl;

    return 0;
}

/* NOTE
kalau tidak support c++11, pasti error
cara compilenya adalah begini

g++ -std=c++11 av_01_auto.cpp -o av_01_auto

*/