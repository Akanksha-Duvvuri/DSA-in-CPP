#include<iostream>
using namespace std;

void printArr(int arr[2][3], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << " \n";
    }
}


int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int n = 2;
    int m = 3;

    printArr(arr, 2, 3);
    return 0;
}