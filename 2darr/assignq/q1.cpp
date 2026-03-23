#include<iostream>
using namespace std;

int printnum(int arr[][3], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 7){
                cout << "(" << i << "," << j << ")" << "\n";
            }
        }
    }
    cout << endl;
    return -1;
}

int main(){
    int arr[2][3] = {{4,7,8}, {8,8,7}};

    printnum(arr, 2, 3);
    return 0;
}