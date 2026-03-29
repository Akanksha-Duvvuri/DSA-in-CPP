#include<iostream>
using namespace std;

int countsetbits(int n){
    int count = 0;

    while(n > 0){
        int lastdig = n & 1;
        count += lastdig;

        n = n >> 1;
    }

    cout << count << endl;
    return count;
}

int main(){
    countsetbits(7);
    return 0;
}