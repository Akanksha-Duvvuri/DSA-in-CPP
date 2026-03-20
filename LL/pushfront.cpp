#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void print(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }


    void insert(int val, int pos){
        Node* newNode = new Node(val);

        Node *temp = head;
        for(int i=0; i<pos-1; i++){
            if(temp == NULL){
                cout << "position is invalid";
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next; 
        temp->next = newNode;
    }
};

int main(){
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(10);
    ll.push_front(15);

    ll.insert(9, 2);

    ll.print();

    return 0;
}