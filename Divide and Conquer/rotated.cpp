#include<iostream>
#include<algorithm>
using namespace std;

//not using normal binary search because its not completely sorted - USE BS ONLY WHEN THE WHOLE ARRAY IS PROPERLY SORTED
//given an array which was sorted in ascending order initially, is rotated about a pivot. Now find the index of the targer element say 0

//by linear search - O(n)

//use modified binary search - O(logn)

int search(int *arr, int st, int end, int target) {
    if(st > end) {
        return -1;
    }

    int mid = (st + end) / 2;
    
    if(arr[mid] == target) {
        return mid;
    } 
//although there are 4 return statements, only one of them will get called, so TC - logn
    if(arr[st] <= arr[mid]) { //L1
        if(arr[st] <= target && target < arr[mid]) {
            return search(arr, st, mid - 1, target);
        } else {
            return search(arr, mid+1, end, target);
        }
    } else {
        if(arr[mid] <= target && target < arr[end]) {
            return search(arr, mid+1, end, target);
        } else {
             return search(arr, st, mid - 1, target);
        }
    }
}

int main() {
    int arr[7] = {4, 5, 6, 7, 0, 1, 2}; //rotated about 2
    int n = sizeof(arr) / sizeof(int);

    cout << "idx: " << search(arr, 0, n-1, 0) << endl;
    return 0;
}