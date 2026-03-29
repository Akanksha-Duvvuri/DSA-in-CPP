#include<iostream>
using namespace std;

int tiling(int n) { //2xn
    if(n == 0 || n == 1) return 1;

    // //vertical
    // int vertical = tiling(n-1);

    // //horizontal
    // int horizontal = tiling(n-2);

    // return vertical + horizontal;

    return tiling(n-1) + tiling(n-2);
}


int main() {
    cout << tiling(3) << endl;
    return 0;
}