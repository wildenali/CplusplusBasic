#include <iostream>

using namespace std;

int main() {
    // variable
    int a = 5;
    cout << "address dari a : " << &a << endl;
    cout << "nilai dari a   : " << a << endl;

    // Reference &
    int &b = a;
    cout << "address dari b : " << &b << endl;
    cout << "nilai dari b   : " << b << endl << endl;

    b = 10;
    cout << "nilai dari a : " << a << endl;
    cout << "nilai dari b : " << b << endl << endl;

    a = 20;
    cout << "nilai dari a : " << a << endl;
    cout << "nilai dari b : " << b << endl << endl;
    
    cin.get();
    return 0;
}