#include<iostream>
#include<string>
using namespace std;

class Car {
    string name;
    string color;

public:

     Car(){ 
        cout << "constructor without params" << endl;
    }


    // Car(string nameValue, string colorValue){ //constructor - mostly defined in public because calling happens in the main function
    //     cout << "contructor is called, object being created...\n";
    //     name = nameValue;
    //     color = colorValue;
    // }


    Car(string name, string color){ 
        cout << "constructor with params" << endl;
        cout << "contructor is called, object being created...\n";
        this->name = name;
        this->color = color;
    }

    void start(){
        cout << "car has started" << endl;
    }

    void stop(){
        cout << "car has stopped" << endl;
    }

    //getter
    string getName(){
        return name;
    }

    string getColor(){
        return color;
    }
};


int main(){
    Car c0;
    Car c1("Porsche 911", "black");

    cout << "car name: " << c1.getName() << endl;
     cout << "car color: " << c1.getColor() << endl;
    return 0;
}