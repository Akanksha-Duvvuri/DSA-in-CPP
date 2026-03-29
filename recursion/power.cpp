#include<iostream>
using namespace std;

int power(int n, int expo){
    if(expo == 0) return 1;
    return n * power(n, expo - 1);
}

//optimised - TC = O(logn)

int pow(int x, int n) {
    if(n == 0) {
        return 1;
    }

    int halfpow = pow(x, n/2);
    int halfpowsquare = halfpow * halfpow;

    if(n % 2 != 0){
        return x * halfpowsquare;
    }

    return halfpowsquare;
}

int main(){
    cout << power(2,3) << endl;
    cout << pow(2,5) << endl;
    return 0;
}