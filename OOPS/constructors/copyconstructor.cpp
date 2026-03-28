#include<iostream>
#include<string>
using namespace std;

class Car {
public: 
    string name;
    string color;

    Car(string name, string color){
        this->name = name;
        this->color = color;
    }

    Car(Car &original){
        cout << "copying..." << endl;
        name = original.name;
        color = original.color;
    }

};

int main(){
    Car c1("porsche 911", "black");

    Car c2(c1); //copy of c1
    cout << c2.name << endl;
    cout << c2.color << endl; //another constructor gets created automatically and that is called. You can create oee manually also. 
    return 0;
}