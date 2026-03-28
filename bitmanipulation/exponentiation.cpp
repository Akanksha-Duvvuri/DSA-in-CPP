#include<iostream>
using namespace std;

//TC for normal exponentiation - say 3^5 = 3*3*3 -- TC - O(n)

//TC for fast exponentiation - O(logn) by using bit manipulation

void fastexpo(int x, int n){
    int ans = 1;

    while(n > 0){
        int lastBit = n & 1;
        if(lastBit){ //if last bit is one, then multiply.
            ans*=x;
        }
        x*=x;
        n = n >> 1; //last bit for the next loop
    }

    cout << ans << endl;
}

int main(){
    fastexpo(3, 5);
    return 0;
}