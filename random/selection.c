#include<stdio.h>

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

void selection(int *arr, int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printArr(arr, n);
}

int main(){
    int n;
    int arr[] = {5, 1, 56, 13, 36, 12, 19};
    n = sizeof(arr) / sizeof(int); 

    selection(arr, n);
    return 0;
}