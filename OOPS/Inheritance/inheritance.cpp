#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
    string color;
    void eat(){
        cout << "eats..." << endl;
    }
    void breathes(){
        cout << "breathes..." << endl;
    }
};

// class Fish : public Animal{ //if you dont mention public or private or protected - by default it becomes private
// public: 
//     int fins;

//     void swim(){
//         cout << "swims" << endl;
//     }
// };

class Fish : protected Animal { //can only access inside the derived class, not even in main. Calling eat(); here runs it in main. You cant call it directly in main. 
    //putting private here, wont make a difference, But changing the access modifiers to private in Animal wont let you access anything. even if its public here
public: 
    int fins;

    void swim(){
        eat();
        cout << "swims" << endl;
    }
};

int main(){
    Fish f1;
    f1.fins = 3;
    

    cout << f1.fins << endl;
    f1.swim();
    // f1.eat();
    // f1.breathes();
    return 0;
}