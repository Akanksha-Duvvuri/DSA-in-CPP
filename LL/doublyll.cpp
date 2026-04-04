#include<iostream>
using namespace std;

class Node {
public: 
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        prev = next = NULL;
    }
};

class doublylist {
public: 
    Node* head;
    Node* tail;

    doublylist() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val); //dynamic memory alloc

        if(head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void pop_front() {
        Node* temp = head;
        head = head->next; //making the 2nd node as head and now temp is the first node that we want to pop

        if(head != NULL) {
            head->prev = NULL; //now the head is the 2nd node as we updated it
        }

        temp->next = NULL;
        delete temp;
    }

    void printlist() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    doublylist dl;

    dl.push_front(1);
    dl.push_front(2);
    dl.push_front(3);
    dl.push_front(4);
    
    dl.printlist();

    dl.pop_front();

    dl.printlist();
    return 0;
}