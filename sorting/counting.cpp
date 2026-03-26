#include<climits>
#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void countSort(int *arr, int n){
    int freq[100000]; //range initially - given in the question

    int minVal = INT_MAX, maxVal = INT_MIN;

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }

    printArr(arr, n);
}

int main(){
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    countSort(arr, 8);
    return 0;
}