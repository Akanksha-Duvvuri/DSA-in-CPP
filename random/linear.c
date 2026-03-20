#include<stdio.h>

int linear(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    int arr[] = {1, 5, 9, 13, 3, 12, 19};
    n = sizeof(arr) / sizeof(int); 

    int result = linear(arr, n, 12);
    printf("%d", result);
    return 0;
}