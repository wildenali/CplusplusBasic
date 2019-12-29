#include <iostream>
#include <string>

using namespace std;

int main ()
{
   int a,b;
   a = (b=3, b+2);

   cout << a << endl;

   return 0;
}

/*
penjelasanya seperti ini: Pertama variabel b akan
diberi nilai 3, kemudian nilai b (3) akan dijumlahkan 
dengan 2 sehingga variabel a bernilai 5
*/



// void printData(int val){
//     cout << val << endl;
// }

// int main(){
//     int a;
//     int b;
//     int c;
//     a = (b=4, printData(b), c=6, printData(c), (b+c));
//     cout << a << endl;

//     return 0;
// }