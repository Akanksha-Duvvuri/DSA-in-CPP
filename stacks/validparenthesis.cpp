#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool isValid(string str) { //TC - O(n) - n is the length of the opening string and SC = O(n)
    stack<char> s;


    for(int i=0; i<str.size(); i++) {
        char ch = str[i];
        if(ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        } else { //closing 
            if(s.empty()){
                return false;
            } 


            //match
            int top = s.top();
            if((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']')) {
                s.pop();
            } else {
                return false;
            }
        }
    }

    // if(s.empty()) {
    //     return true;
    // } else {
    //     false;
    // }

    return s.empty(); //if true - returns true and if false returns false
}

int main() {
    string str1 = "([}])"; //invalid
    string str2 ="([{}])"; //valid

    cout << isValid(str1) << endl;
    cout << isValid(str2) << endl;
    return 0;
}