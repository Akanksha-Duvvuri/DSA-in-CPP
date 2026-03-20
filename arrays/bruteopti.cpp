#include <climits>
#include <iostream>
// #include<limits.h>
using namespace std;

void sumSub(int *arr, int n){
    int maxSum = INT_MIN; 

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum +=  arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    // cout << endl;
    cout << "Maximum sum is : " << maxSum << endl;
}

int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    sumSub(arr, n);

    return 0;
}