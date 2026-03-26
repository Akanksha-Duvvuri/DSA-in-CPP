#include<iostream>
#include<algorithm>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    //sort(arr+2, arr+5);
    sort(arr, arr+n);  
    printArr(arr, n);

    cout << "\n";
    
    sort(arr, arr+n, greater<int>());  //inbuilt algo
    printArr(arr, n);

    cout << endl;
    return 0;
}