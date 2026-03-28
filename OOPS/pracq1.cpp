#include<iostream>
#include<string>
using namespace std;

//create a user class with properties : id pvt, username public and password private.
//its id should be initialised in a parametised constructor and should have a getter and setter for password.

class User {

private:
    int id;
    string password;

public: 
    string username;

    User(int id){
        cout << "constructor is called, objects loading..." << endl;
        this->id = id;
    }

     void setID(int id){
        this->id = id;
    }

    void setPassword(string password){
        this->password = password;
    }

    string getPassword(){
        return password;
    }

    int getID(){
        return id;
    }
};

int main(){
    User u1(1);

    cout << "user id: " << u1.getID() << endl;
    return 0;
}