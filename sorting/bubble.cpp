#include<iostream>
#include<algorithm>
using namespace std;

void bubble(int *arr, int n){
    bool isSwap = false;
    for(int i=0; i<n-1; i++){
        for(int j=0; j< n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
    }

    if(!isSwap){   //optimised
        return;
    }

    cout << arr[n-1] << "\n";

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){
    int arr[6] = {2, 90, 45, 23, 5, 11};
    int n = sizeof(arr) / sizeof(int);

    bubble(arr, 6);
    return 0;
}