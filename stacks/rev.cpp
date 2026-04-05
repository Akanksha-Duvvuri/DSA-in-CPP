#include<iostream>
#include<stack>
#include<string>
using namespace std;


//TC - O(n) where n is the size of the string str and
//SC - O(n) - for n size of the string, we need to make a n size stack and then pop it
string reverse(string str) {
    string ans;
    stack<char> s;

    for(int i=0; i<str.size(); i++){ //push into stack
        s.push(str[i]);                 
    }

    while(!s.empty()) {  //pop them
        char top = s.top();
        ans += top;
        s.pop();              
    }

    return ans;
}

int main() {
    string str = "abcd";
    cout << reverse(str) << endl;
    return 0;
}