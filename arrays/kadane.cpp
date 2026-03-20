#include<climits>
#include <iostream>
using namespace std;

void kadane(int *arr, int n){
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }
    cout << maxSum << endl;
}

int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(n);

    kadane(arr, 6);
    return 0;
}