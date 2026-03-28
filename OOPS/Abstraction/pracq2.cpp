#include<iostream>
#include<string>
using namespace std;

class Base {
public: 
    virtual void print() {
        cout << "Base" << endl;
    }
};

//function overriding with virtual keyword
class Derived : public Base {
public:
    void print() override {
        cout << "derived" << endl;
    }
};

int main(){
    Base* b = new Derived();
    b->print();    //run time polymorphism
    
    delete b;
    return 0;
}