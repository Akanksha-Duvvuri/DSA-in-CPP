#include<iostream>
#include<list>
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

int main() { //main function isnt bothered with whether youre using vector, array, list, or manual ll
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