#include<iostream>
using namespace std;

int binary(int *arr, int n, int key){
   int start = 0;
   int end = n - 1;

   while(start <= end){
    int mid = (start + end) / 2;
    if(arr[mid] == key){
        return mid;
    } else if(arr[mid] > key){
        end = mid - 1;
    }else{
        start = mid + 1;
    }
   }
   return -1;
}

int main(){
    // int arr[8] = {2, 4, 10, 3, 15, 29, 35, 1};
    int arr[8] = {2, 4, 6, 10, 13, 15, 19, 27};
    int n = sizeof(arr) / sizeof(int);

    cout << binary(arr, 8, 10) << endl;
    return 0;
}