#include <iostream>
#include <string>

using namespace std;

int main() {

    // char kata[5] = {'m','o','b','i','l'};
    // array char tidak bisa kita tamba, fiks karena array

    string kata("cat");
    cout << kata << endl;

    string data;
    cout << "Masukan kata : " << endl;
    cin >> data;
    cout << "data yang dimasukan adalah : " << endl;
    cout << data << endl;

    return 0;

}