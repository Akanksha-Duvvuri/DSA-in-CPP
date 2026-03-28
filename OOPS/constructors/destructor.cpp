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
        mileage = new int; //new memory allocation - cant automatically get deallocated. Have to manually deallocate memory.  
        *mileage = *original.mileage;
    }

    ~Car () {
        cout << "deleting object..." << endl;

        if(mileage != NULL){
            delete mileage; //a garbage value gets stores so you can explicitly assign NULL to it.  
            mileage = NULL; 
        }
    }

};

int main(){
    Car c1("porsche 911", "black");
    
    cout << c1.name << endl;
    cout << c1.color << endl;
    cout << *c1.mileage << endl;
    return 0;
}