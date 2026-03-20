#include<stdio.h>

void printArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int *arr, int start, int end){
    int pivot = arr[end];
    int idx = start - 1;

    for(int j = start; j < end; j++){
        if(arr[j] <= pivot){
            idx++;
            int temp = arr[idx];
            arr[idx] = arr[j];
            arr[j] = temp;
        }
    }

    idx++;
    int temp = arr[idx];
    arr[idx] = arr[end];
    arr[end] = temp;

    return idx;
}

void quicksort(int *arr, int start, int end){
    if(start < end){
        int pivotIdx = partition(arr, start, end);
        quicksort(arr, start, pivotIdx - 1);
        quicksort(arr, pivotIdx + 1, end);
    }
}

int main(){
    int arr[6] = {12, 31, 35, 8, 32, 17};
    int n = sizeof(arr) / sizeof(int);

    quicksort(arr, 0, n - 1);
    printArr(arr, n);

    return 0;
}