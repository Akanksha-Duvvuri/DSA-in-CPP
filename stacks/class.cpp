#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<class T> //template class
class Stack {
    vector<T> vec;

public: 

    void push(T val) {
        vec.push_back(val);
    }

    void pop() {
        if(isempty()) {
            cout << "stack is empty" << endl;
            return;
        }
        vec.pop_back();
    }

    T top() {
        // if(isempty()) {
        //     cout << "stack is empty" << endl;
        //     return -1;
        // } 
        int lastidx = vec.size() - 1;
        return vec[lastidx];
    }

    bool isempty() { //also constant time
            return vec.size() == 0;
        }
};

int main() {
    Stack<string> s; //have to specify what type of stack you want to form

    // s.push(3);
    // s.push(2);
    // s.push(1);

    s.push("me");
    s.push("with");
    s.push("learn");

    while(!s.isempty()) {
        cout << s.top() << " "; //printing the top values
        s.pop();
    }
    return 0;
}