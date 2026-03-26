#include<iostream>
using namespace std;

// void multiply(int &a, int &b, int &c){
//     a *= 2;
//     b *= 2;
//     c *= 2;
// }


int main(){
    int a = 32;
    int *ptr = &a; 

    char ch = 'A';
    char &cho = ch;

    cho += a;
    *ptr += ch;  //char ptr

    cout << a << ", " << ch << endl;
    return 0;
}