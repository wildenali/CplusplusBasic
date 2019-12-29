#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    fstream myFile;
    int number = 12354;
    
    myFile.open("ap_01_Binary_File_data.bin", ios::out | ios::binary);
    myFile.write(reinterpret_cast<char*>(&number),sizeof(number));
    myFile.close();

    return 0;
}