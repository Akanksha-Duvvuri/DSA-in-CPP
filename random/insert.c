#include<stdio.h>

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

void insert(int *arr, int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            int temp = arr[prev + 1];
            arr[prev + 1] = arr[prev];
            arr[prev] = temp;
            prev--;
        }
        arr[prev + 1] = curr;
    }
    printArr(arr, 6);
}

int main(){
    int arr[6] = {4, 10, 3, 29, 36, 59};
    int n = sizeof(arr) / sizeof(int);

    insert(arr, 6);
    return 0;
}