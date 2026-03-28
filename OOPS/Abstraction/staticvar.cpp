#include<iostream>
#include<string>
using namespace std;

// void counter() {
//     static int count = 0;
//     count++;
//     cout << "count: " << count << endl;
// }

class Example {
public:
    static int x; //declaration - class ka variable not for an object. Now all the diff classes can manipulate this variable 
};

int Example::x = 0; //initialisation

int main(){
    // counter();
    // counter();
    // counter();

    Example e1;
    Example e2;
    Example e3;
    
    cout << e1.x++ << endl;

    cout << e2.x++ << endl;

    cout << e3.x++ << endl;
    return 0;
}