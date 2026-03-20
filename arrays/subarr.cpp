#include<iostream>
using namespace std;

void subArr(int *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            //cout << "(" << arr[i] << "," << arr[j] << ") ";
            cout << "(";
            for(int k=i; k<=j; k++){
                cout << arr[k] << " ";
            }
            cout << ") , ";
        }
        cout << endl;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;


    subArr(arr, n);
    return 0;
}