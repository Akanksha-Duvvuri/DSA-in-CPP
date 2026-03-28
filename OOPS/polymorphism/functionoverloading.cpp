#include<iostream>
#include<string>
using namespace std;

//basically here, there are two functions with the same NAME but different parameters. While calling the function in main - it depends on the paramater entered. Say an integer param - then the one with the int gets executed and if its a string, then the one with the string gets executed. - COMPILE TIME POLYMORPHISM. 

//function overloading - SAME NAME OF THE FUNCTION, DIFFERENT FUNCTIONS. 

class Print {
public:
    void show(int x) {
        cout << x << endl;
    }

    void show(string str){
        cout << str << endl;
    }
};

int main(){
    Print obj1;
    obj1.show(25);
    obj1.show("hello");
    return 0;
}