#include<iostream>
using namespace std;

//if 1 is there at the ith position, make it 0, if theres 0, let it be 0.

int clearithbit(int n, int i){
    int bitMask = ~(1 << i);

    return (n & bitMask);
}

int main(){
    cout << clearithbit(6, 1) << endl;
    return 0;
}