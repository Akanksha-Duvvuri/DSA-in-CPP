#include<stdio.h>

int largest(int *arr, int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
    // return -1;
}

int main(){
    int n;
    int arr[] = {1, 5, 9, 13, 3, 12, 19};
    n = sizeof(arr) / sizeof(int); 

    // printf("%d", n);
    int result = largest(arr, n);
    printf("the largest of the array is: %d \n", result);
    return 0;
}