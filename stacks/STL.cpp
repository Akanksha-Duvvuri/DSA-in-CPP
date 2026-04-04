#include<iostream>
#include<list>
#include<stack>
using namespace std;

//manually creating the LL
template<class T>
class Node {
public: 
    T data;
    Node* next;

    Node(T val) {
        data = val;
        next = NULL;
    }
};

//create a stack using LL
template<class T>
class Stack {
    Node<T>* head;

public: 
    Stack() {
        head = NULL;
    }
    void push(T val) {
        Node<T>* newNode = new Node<T>(val);

        if(head == NULL) {
            head = newNode; //no need of tail in this case - as it is a stack
        }else {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop() {
        Node<T>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    T top() {
        return head->data;
    }

    bool isempty(){
        return head == 0;
    }
};

int main() {
    stack<int> s;  //usually when you implement using STL use all small letters - like stack.
    //but when you implement using classes you use Stack

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.empty()) { //property of stack - empty
        cout << s.top() << " "; 
        s.pop(); 
    }

    cout << endl;
    return 0;
}