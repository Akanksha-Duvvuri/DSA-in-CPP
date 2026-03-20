#include<iostream>
using namespace std;

int binSearch(int *arr, int n, int key){
    int start = 0, end = n - 1;

    while(start < n){
        int mid = (start + end) / 2;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] < key){
            start = mid + 1;
        } else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] =  {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cout << "enter the element you want to find: ";
    cin >> key;

    int result = binSearch(arr, n, key);

    if(result != -1){
        cout<< "element found at index: " << result << endl;
    } else{
        cout << "element not found" << endl;
    }
    return 0;
}