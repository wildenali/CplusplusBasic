#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    fstream myFile;
    int hasil;
    
    myFile.open("ap_01_Binary_File_data.bin", ios::in | ios::binary);
    myFile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));

    cout << "besar integer = " << sizeof(hasil) << endl;
    cout << hasil << endl;

    return 0;

}