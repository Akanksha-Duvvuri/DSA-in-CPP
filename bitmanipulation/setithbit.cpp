#include<iostream>
using namespace std;

//if 1 is there at the ith position, let it remain as 1, if theres 0, make it 1.

int setithbit(int n, int i){
    int bitMask = 1 << i;

    return (n | bitMask);
}

int main(){
    cout << setithbit(6, 3) << endl;
    return 0;
}