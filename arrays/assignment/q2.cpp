#include<iostream>
using namespace std;

int rotated(int *arr, int n, int target){
    for(int i=0; i<n; i++){
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(int);

    cout << rotated(arr, 7, 10) << endl;
    return 0;
}