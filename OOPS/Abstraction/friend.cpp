#include<iostream>
#include<string>
using namespace std;

class A {
    string secret = "secret data";
    friend class B;
    friend void revealSecret(A &obj);
};  

class B { // B becomes a friend class of A  - only B will have access to A's data, not the other way around. 
public: 
    void showSecret(A &obj){ //takes an A class ka object and tries to print its secret
        cout << obj.secret << endl;
    }
};

void revealSecret(A &obj){ //friend function 
    cout << obj.secret << endl;
}

int main(){
    A a;
    B b;

    // b.showSecret(a);

    revealSecret(a);
    return 0;
}