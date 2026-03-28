#include<iostream>
#include<string>
using namespace std;

class Parent {
public: 
    virtual void hello() {
        cout << "parent hello" << endl;
    }
};

class Child : public Parent {
public: 
    void hello() { //redefine without the virtual keyword
        cout << "child hello" << endl;
    }
};

int main() {
    Child c1;
    Parent *ptr; //points to the parent object right now

    ptr = &c1; //points to the child class now - binding the parent and child classes. 
    //This binding is called RUN TIME BINDING - possible due to inheritance

    ptr->hello(); //virtual functions ka role. 
    return 0;
}