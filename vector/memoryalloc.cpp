#include<iostream>
using namespace std;

void funcArr(){
    int size;
    cin >> size;

    int *ptr = new int[size]; //allocate during run time

    int x = 1;
    for(int i=0; i<size; i++){
        ptr[i] = x;
        cout << ptr[i] << " ";
        x++;
    }
    cout << endl;

    delete [] ptr; //free the memory
}

int main(){
    funcArr();
    return 0;
}