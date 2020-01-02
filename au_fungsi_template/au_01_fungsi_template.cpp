#include <iostream>
#include <string>

using namespace std;

/*
Template Fungsi adalah fungsi yang berlaku secara umum
*/

template<typename T>
void print(T data){
    cout << data << endl;
}

template<typename T>
int toInt(T data){
    return int(data);
}

template<typename T, typename U>
T max(T a, U b){
    return (a > b) ? a : b;
}

int main(){
    print(5);
    print(5.8);
    print('c');

    cout << toInt(10.101010101) << endl;
    cout << max(10, 103.5);

    print<double>(10.15);
    cout << max<double,int>(11.1, 12) << endl;

    return 0;
}