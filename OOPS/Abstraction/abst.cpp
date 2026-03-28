#include<iostream>
#include<string>
using namespace std;

//abstract class
class Shape {
public: 
    virtual void draw() = 0; //pure virtual function, abstract function
}; 

class Circle : public Shape {
public:
    void draw() {
        cout << "circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "square" << endl;
    }
};

int main(){
    Circle c1;
    Square s1;

    c1.draw();
    s1.draw();

    Shape shape1; // error as its an abstract class. 
    shape1.draw();

    return 0;
}