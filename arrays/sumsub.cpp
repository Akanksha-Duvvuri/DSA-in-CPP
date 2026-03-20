#include <climits>
#include <iostream>
// #include<limits.h>
using namespace std;

void sumSub(int *arr, int n){
    int maxSum = INT_MIN; //always initialise it - otherwise its gonna return some garbage value

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum+= arr[k];
            }
            cout << sum << ",";
            maxSum = max(maxSum, sum); //compares maxSum and sum and stores the max of both in maxSum ---> min also exists
        }

        cout << endl;
    }
    cout << endl;
    cout << "Maximum sum is : " << maxSum << endl;
}

int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    sumSub(arr, n);

    return 0;
}