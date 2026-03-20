#include<stdio.h>

int binary(int *arr, int n, int key){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            return mid;
        } else if(key > arr[mid]){
            start = mid + 1;
        } else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    int arr[] = {1, 3, 5, 9, 12, 13, 19};
    n = sizeof(arr) / sizeof(int); 

    int result = binary(arr, n, 20);
    printf("%d", result);
    return 0;
}