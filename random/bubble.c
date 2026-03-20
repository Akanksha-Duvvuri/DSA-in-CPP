#include<stdio.h>

int printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

//bubble sort is when you compare adjacent elements and push the largest to the very end
int bubble(int *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){ //n - 1 - i because as it pushes the largest elements to the end, part to sort becomes shorter
            if(arr[j+1] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printArr(arr, n);
}

int main(){
    int n;
    int arr[] = {1, 5, 56, 13, 36, 12, 19};
    n = sizeof(arr) / sizeof(int); 

    bubble(arr, n);
    return 0;
}