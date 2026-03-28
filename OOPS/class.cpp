#include<iostream>
using namespace std;

class Student {  //also used to club properties and methods together
    //properties
private:
    string name;

public:
    float cgpa;

    //methods 
    void getPercentage(){
        cout << (cgpa * 10) << "% \n";
    }
};

class User {
    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout << "deleting account" << endl;
    }

    void editBio(string newBio) {
        bio = newBio;
    }
};

int main(){
    Student s1; //object 
    cout << sizeof(s1) << endl; //gets some space allocated in the memory
    s1.cgpa = 9.8;
    cout << s1.cgpa << endl;
    s1.getPercentage();
    // s1.name = "akanksha";

    // cout << s1.name << endl; //error as its private
    return 0;
}