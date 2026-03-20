#include <iostream>
using namespace std;

// void revArr(int *arr, int n){
//     for(int i= n - 1 ; i>=0; i--){
//         cout << arr[i] << " "; 
//     }
// }

// int main(){
//     int arr[] = {1,2,3,4,5};

//     revArr(arr, 5);
//     cout << endl;
//     return 0;
// }



//SC = O(1) - no extra space used - optimised
//TC = O(n} - constants are ignored - runs n/2 times


void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n - 1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;


        start++;
        end--; 
    }

    printArr(arr, n);


    return 0;
}