#include<iostream>
#include<stack>
using namespace std;

//without any extra space
//TC - O(n)

void pushbottom(stack<int> &s, int val) { 

    if(s.empty()) {
        s.push(val);  
        return;
    }

    int temp = s.top();
    s.pop();
    pushbottom(s, val);
    s.push(temp);
}

void reverse(stack<int> &s) { //HAVE TO PASS BY REF OTHERWISE THE CHANGES WONT REFLECT ****************
    if(s.empty()) {
        return;
    }

    int temp = s.top();
    s.pop();
    reverse(s);
    pushbottom(s, temp);
}

void print(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);


    reverse(s);
    print(s);

    return 0;
}