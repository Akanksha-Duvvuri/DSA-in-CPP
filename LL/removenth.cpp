#include<iostream>
#include<vector>
using namespace std;

class Node {
public: 

    int data;
    Node* next;
    
    Node(int val) { //constructor
        data = val;
        next = NULL;
    }

    ~Node() {
        // cout << "-Node";
        if(next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

class List {
    Node* head;
    Node* tail;

public: 
    List() {
        head = NULL;
        tail = NULL;
    }


    ~List() {
        // cout << "-list";
        if(head != NULL) {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val) {
        Node* newNode = new Node(val); //dynamic allocation - new node with int val = val

        if(head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;  
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val); //dynamic allocation - new node with int val = val

        if(head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;  
            tail = newNode;
        }
    }

    void print() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;  
        }

        cout << "NULL" << endl;
    }
    
    int getsize() {
        int size = 0;
        Node* temp = head;

        while(temp != NULL) {
            temp = temp->next;
            size++;
        }
        return size;
    }

    void removenth(int n) {
        int size = getsize();
        Node* prev = head;

        for(int i=1; i<(size-n); i++) { //stops at the node before the one which is gonna get deleted
            prev = prev->next;
        }

        prev->next = prev->next->next; 
    } 
};

int main() {
    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.print();

    ll.removenth(2);
    ll.print();
    return 0;
}