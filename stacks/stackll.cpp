#include<iostream>
#include<list>
using namespace std;

//create a stack using LL
template<class T>
class Stack {
    list<T> ll;

public: 
    void push(T val) {
        ll.push_front(val);
    }

    void pop() {
        ll.pop_front();
    }

    T top() {
        return ll.front();
    }

    bool isempty(){
        return ll.size() == 0;
    }
};

int main() {
    Stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isempty()) {
        cout << s.top() << " "; //this will cause an infinite loop without the pop function because the stack never changed
        s.pop(); //print it and then immediately remove it
    }

    cout << endl;
    return 0;
}