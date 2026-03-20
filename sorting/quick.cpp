#include<iostream>
#include<algorithm>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int partition(int *arr, int start, int end){
    int idx = start - 1, pivot = arr[end];

    for(int j=start; j<end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quick(int *arr, int start, int end){
    if(start < end){
        int pivotIdx = partition(arr, start, end);


        quick(arr, start, pivotIdx - 1); //left half
        quick(arr, pivotIdx + 1, end); //right half
    }
}

int main(){
    int arr[6] = {12, 31, 35, 8, 32, 17};
    int n = sizeof(arr) / sizeof(int);

    quick(arr, 0, n - 1);
    print(arr, 6);
    return 0;
}