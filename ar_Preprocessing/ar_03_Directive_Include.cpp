#include <iostream>
#include "ar_03_Directive_Library.h"
#include <string>

#define PI 3.14159265359

using namespace std;

int main(){
    cout << "berhasil" << endl;

    cout << "PI : " << PI << endl;
    cout << "KUADRAT : " << KUADRAT(5) << endl;
    cout << "MAX : " << MAX(10,2) << endl;
    cout << "data string : " << data << endl;

    return 0;
}