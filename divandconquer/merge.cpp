#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(int *arr, int st, int mid, int end) {
    vector<int> temp;

    int i = st;
    int j = mid + 1;

    while(i <= mid && j <= end) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
            // i++;
        } else {
            temp.push_back(arr[j++]);
            // j++
        }
    }

    while(i <= mid) {
        temp.push_back(arr[i++]);
    }

     while(j <= end) {
        temp.push_back(arr[j++]);
    }

    for(int idx = st, k = 0; idx<=end; idx++) {
        arr[idx] = temp[k++];
    }
}

void mergeSort(int *arr, int st, int end){
    if(st >= end) {
        return;
    }

    int mid = st + (end - st) / 2;  //because sometimes the value of st and end are so big that when you add them, they go out of scope 

    mergeSort(arr, st, mid); //left
    mergeSort(arr, mid+1, end); //right

    merge(arr, st, mid, end);
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

    mergeSort(arr, 0, n-1);
    printArr(arr, n);
    return 0; 
}