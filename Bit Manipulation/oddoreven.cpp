#include<iostream>
using namespace std;

void oddOrEven(int n){
    if(!(n & 1)){   // if n&1 = 1, that means not of it is 0 - false - odd
        cout << "even\n";
    } else {
        cout << "odd\n";
    }
}

int main(){
    oddOrEven(5);
    oddOrEven(4);
    return 0;
}