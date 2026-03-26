#include<iostream>
#include<algorithm>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
//keep the first element fixed and compare with the rest
void selection(int *arr, int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }

    print(arr, n);
}

int main(){
    int arr[6] = {20, 3, 15, 2, 11, 50};
    int n = sizeof(arr) / sizeof(int);

    selection(arr, 6);
    return 0;
}