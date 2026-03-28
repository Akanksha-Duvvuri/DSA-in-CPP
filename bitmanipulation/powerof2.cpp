#include<iostream>
using namespace std;

int poweroftwo(int n){
    if(!(n & (n-1))){
        cout << "is a power of 2";
        return 1;
    } else {
        cout << "not a power of 2";
        return 0;
    }
    cout << endl;
}

int main(){
    poweroftwo(16);
    return 0;
}