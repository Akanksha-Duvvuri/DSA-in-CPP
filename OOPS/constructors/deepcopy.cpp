#include<iostream>
#include<string>
using namespace std;

class Car {
public: 
    string name;
    string color;
    int *mileage;

    Car(string name, string color){
        this->name = name;
        this->color = color;
        mileage = new int; //dynamic allocation - heap 
        *mileage = 12;
    }

    Car(Car &original){
        cout << "copying..." << endl;
        name = original.name;
        color = original.color;
        // mileage = original.mileage;
        mileage = new int; //new memory allocation, and this goes and points there
        *mileage = *original.mileage;
    }

};

int main(){
    Car c1("porsche 911", "black");

    Car c2(c1); //copy of c1
    cout << c2.name << endl;
    cout << c2.color << endl;  
    cout << *c2.mileage << endl;

    *c2.mileage = 10;

    cout << *c1.mileage << endl;
    return 0;
}