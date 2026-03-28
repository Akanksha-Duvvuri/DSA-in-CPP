#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
    void eat(){
        cout << "eats" << endl;
    }

    void breathe(){
        cout << "breathes" << endl;
    }
};

class Bird : public Animal {
public: 
    void fly() {
        cout << "flies" << endl;
    }
};

class Fish : public Animal {
public: 
    void swim() {
        cout << "swims" << endl;
    }
};

class Mammal : public Animal {
public: 
    void walk() {
        cout << "walks" << endl;
    }
};

int main(){
    Bird b1;
    Fish f1;
    Mammal m1;


    b1.fly();
    f1.swim();
    m1.walk();

    b1.eat();
    f1.breathe();
    m1.breathe();
    m1.eat();
    return 0;
}