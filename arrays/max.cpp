#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout<< "enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max = 1;
    int temp;

    for(int i=0; i<n; i++){
        if(arr[i] > arr[i+1]){
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = arr[i+1];
        }
        max =  arr[n-1];
    }

    cout << "The max is: " << max << endl;
    return 0;
}