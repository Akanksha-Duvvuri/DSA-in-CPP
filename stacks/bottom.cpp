#include<iostream>
#include<stack>
using namespace std;

//TC = O(n)

void pushbottom(stack<int> &s, int val) {   //they are automatically call by value so you need to add & for making it call by reference

    if(s.empty()) {
        s.push(val);  //push at top = push at bottom
        return;
    }

    int temp = s.top();
    s.pop();
    pushbottom(s, val);
    s.push(temp);
}


int main() {    
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    pushbottom(s, 4);
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
    return 0;
}