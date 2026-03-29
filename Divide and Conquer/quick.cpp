#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//pivot and partition approach. 

int partition(int *arr, int st, int end) {  //int because its returning the pivot index ka value right
    int i = st - 1;

    for(int j = st; j<end; j++){
        if(arr[j] <= arr[end]) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[end]);

    //now pivot index is i
    return i;
}

void quickSort(int *arr, int st, int end) {

    if(st >= end) {
        return;
    }

    int pivotIdx = partition(arr, st, end);

    quickSort(arr, st, pivotIdx - 1);
    quickSort(arr, pivotIdx + 1, end);
}

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[6] =  {6, 3, 7, 5, 2, 4};
    int n = sizeof(arr) / sizeof(int);

    quickSort(arr, 0, n-1);
    printArr(arr, n);
    return 0;
}