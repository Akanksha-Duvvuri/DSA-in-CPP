#include<iostream>
using namespace std;

int printsum(int arr[][3], int n, int m){
    int sum = 0;
    int row = 1;

    for(int i=0; i<m; i++){
        sum += arr[row][i];
    }

    cout << sum << endl;
    return -1;
}

int main(){
    int arr[3][3] = {{1,4,9}, {11,4,3}, {2,2,3}};

    printsum(arr, 2, 3);
    return 0;
}