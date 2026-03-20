#include<stdio.h>

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
}

void insertion(int *arr, int n){
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
    printArr(arr, n);
}

int main(){
    int arr[5] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    insertion(arr, 5);
    return 0;
}