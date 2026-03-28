#include<iostream>
using namespace std;

int power(int n, int expo){
    if(expo == 0) return 1;
    return n * power(n, expo - 1);
}

int main(){
    cout << power(2,3) << endl;
    return 0;
}