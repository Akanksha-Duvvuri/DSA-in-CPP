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

    int searchitr(int key) {
        Node* temp = head;
        int idx = 0;

        while(temp != NULL) {
            if(temp->data == key) {
               return idx;
            }

            temp = temp->next;
            idx++;
        }

        return -1;
    }

    int helper(Node* temp, int key) {
        if(temp == NULL) {
            return -1;
        }

        if(temp->data == key) {
            return 0;
        }

        int idx = helper(temp->next, key);

        if(idx == -1) {
            return -1;
        }

        return idx + 1; //check video for explanation

    }

    int searchRec(int key) {
        return helper(head, key);
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

    cout << ll.searchitr(2) << endl;
    cout << ll.searchRec(2) << endl;
    return 0;
}