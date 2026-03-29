#include<iostream>
using namespace std;
//WAF to ipdate the ith bit in a number according to the given value 
//num = 7, i = 2, val = 0

void updateithbit(int n, int i, int value){
    n = n & ~(1 << i); //clear ith bit

    n = n | (value << i);

    cout << n << endl;
}

int main(){
    updateithbit(7, 2, 0);
    return 0;
}