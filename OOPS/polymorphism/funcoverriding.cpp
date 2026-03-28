#include<iostream>
#include<string>
using namespace std;

//parent and child both have a function show(), through inheritance. 

//But both of the functions have a different implementation
 
//so when you create a child class - it gets decided during run time whether the parent show() function or the child show() function should run. 

//if theres an object created - child, then the show() of the child will only run and therefore the parent function gets overridden. 

class Parent {
public: 
    void show(){
        cout << "parent class show" << endl;
    }
};

class Child : public Parent {
public: 
    void show() {
        cout << "child class show" << endl;
    }
};

int main(){
    Child c1;

    c1.show();

    return 0;
}