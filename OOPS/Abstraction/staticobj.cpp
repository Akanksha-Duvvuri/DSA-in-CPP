#include<iostream>
#include<string>
using namespace std;

class Example {
public:
    Example() {
        cout << "constructor" << endl; //object gets created
    }

    ~Example(){
        cout << "destructor" << endl; //object gets deleted
    } 
};

int main(){
    int a = 0;
    if(a == 0){
        static Example e1;
        }

    cout << "code ending" << endl; //code ends
    return 0;
}

//without static- 
// constructor
// destructor
// code ending

//with static - 
// constructor
// code ending
// destructor