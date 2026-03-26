#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str = "I like c++ and c++ and c++";

    cout << str.length() << endl;

    cout << str[3] << endl;
    cout << str.at(3) << endl;

    cout << str.substr(2,8) << endl;

    cout << str.find("c++", 16) << endl;
    return 0;

}