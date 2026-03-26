#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str = "apna college";

    // for(int i=0; i<str.length(); i++){
    //     cout << str[i] << " ";
    // }

    for(char ch: str){  //for each loop
        cout << ch << " "; //stores each char one by one in ch and gets printed. 
    }

    cout << endl;
    return 0;
}