#include<iostream>
using namespace std;

//get the bit at position i in the number n

int getith(int n, int i){
    int bitMask = 1 << i;

    if(!(n & bitMask)){ //meanign, if n & bitmask - non zero - false - so return 0
        return 0;
    } else {
        return 1;
    }
}

//or (n >> i) & 1 - same thing as above

int main(){
    cout << getith(6, 2) << endl;
    return 0; 
}