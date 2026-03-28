#include<iostream>
#include<string>
using namespace std;

class Student {  //also used to club properties and methods together
    string name;
    float cgpa;

public:
    //methods 
    void getPercentage(){
        cout << (cgpa * 10) << "% \n";
    }

    //setters - as name and cgpa are private, you can use setters to indirectly assign values to it
    void setName(string nameVal) {
        name = nameVal;
    }

    void setCGPA(float cgpaVal){
        cgpa = cgpaVal;
    }

    //getters - get the value from the setters
    string getName(){
        return name;
    }

    float getCGPA(){
        return cgpa;
    }
};


int main(){ 
    Student s1;
    s1.setName("akanksha");
    s1.setCGPA(9.2);

    cout << s1.getName() << endl;
    cout << s1.getCGPA() << endl;
    return 0;
}