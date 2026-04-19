#include<iostream>
#include<list>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;

public:
    Queue() {
        head = tail = NULL;
    }

    void push(int data) { //enqueue
        Node* newnode = new Node(data);

        if(head == NULL){
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }

    }

    void pop() {
        if(head == NULL){
            cout << "empty queue" << endl;
        }

        Node* temp = head;

        head = head->next;
        delete temp;
    }

    int front() {
        return head->data;
    }

    bool empty(){
        return head == NULL;
    }

    void display(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};


int main() {
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.display();

    q.pop();

    q.display();

    cout << q.front() << endl;

    return 0;
}