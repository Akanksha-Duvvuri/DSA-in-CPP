#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "enter the size of the array = ";
    cin >> size;

    int array[size];
    int n = sizeof(array)/sizeof(int);

    cout << "enter the elements of the array = ";
    for(int i=0; i<n;i++){
        cin >> array[i];
    }

    for(int i=0; i<n;i++){
        cout << array[i] << " ";
    }

    cout << endl;
    return 0;
}