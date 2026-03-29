#include<iostream>
using namespace std;

void binaryst(int n, int lastplace, string ans){
    if(n == 0) {
        cout << ans << endl;
        return;
    }

    if(lastplace != 1){
        binaryst(n-1, 0, ans + '0');
        binaryst(n-1, 1, ans + '1');
    } else {
        binaryst(n-1, 0, ans + '0');
    }
}

int main() {
    binaryst(3, 0, "");
    return 0;
}