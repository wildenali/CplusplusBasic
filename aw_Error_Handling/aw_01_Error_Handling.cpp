#include <iostream>
#include <exception>

using namespace std;

// 1. syntax error
// 2. linking error
// 3. non-error
// 4. runtime error

int pembagian(int &num, int &denum){
    if(denum == 0){
        // throw overflow_error("Error: pembagi nol");
        throw "Error: Pembagi nol";
    }
    return num/denum;
}

int main(){
    int a;
    int b;
    int c;

    while(true){
        cout << "num: ";
        cin >> a;
        cout << "denum: ";
        cin >> b;

        try{
            c = pembagian(a,b);
            cout << c << endl;
        }catch(const char* e){
            cout << e << endl;
        }
    }
    
    cout << "akhir dari program" << endl;

    return 0;
}