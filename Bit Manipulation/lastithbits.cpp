#include<iostream>
using namespace std;

//WAF to clear the last i bits of a number

void clearithbits(int n, int i){
    int bitMask = ~(0) << i;
    n = n & bitMask;

    cout << n << endl;
}

int main(){
    clearithbits(15, 2);
    return 0;
}