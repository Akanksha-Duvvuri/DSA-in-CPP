#include<iostream>
using namespace std;

void change(int param){
    param = 20;
    cout << param << endl;
}

void ref(int *ptr){
    *ptr = 20;
    cout << *ptr << endl;
}

int main(){
    int a = 10;
    // cout << &a << endl;
    // cout << *(&a) << endl;

    int *ptr = &a;

    // cout << *ptr << endl;
    // cout << ptr << endl;

    //pass by value - direct or copy sent 
    //pass by reference - changes thru address

    change(a); // a copy is sent 
    cout << a << endl;
    ref(&a);
    cout << a << endl; //no change because the stack is gone 



    return 0;
}