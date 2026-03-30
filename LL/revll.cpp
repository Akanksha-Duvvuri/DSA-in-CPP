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

    void print() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;  
        }

        cout << "NULL" << endl;
    }

    void reverse() {
        Node* curr = head;
        Node* prev = NULL;

        while(curr != NULL) {
            Node* next = curr->next;
            curr->next = prev;

            //update for next itr
            prev = curr;
            curr = next;
        }

        head = prev;
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

    ll.reverse();

    ll.print();
    return 0;
}