#include<iostream>
using namespace std;

class Node {
public: 
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public: 
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;  
            head = newNode;
        }
    }
};


void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;  
    }

    cout << "NULL" << endl;
}

//floyds cycle finding algorithm
bool isCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            cout << "Cycle exists" << endl;
            return true;
        }
    }
    
    cout << "Cycle doesn't exist" << endl;
    return false;
}

void removeCycle(Node* head) {
    //detect cycle-- 
    Node *slow = head;
    Node *fast = head;
    bool isCycle = false;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;


        if(slow == fast) {
            cout << "cycle exists" << endl;
            isCycle = true;
            break;
        }
    }

    if(!isCycle) {
        cout << "cycle doesnt exist" << endl;
        return;
    }

    //now step 2 - make slow as head and update fast++

    slow = head;

    if(slow == fast) { //full cycle - special case (tail connected to head)

        while(fast->next != slow) {
            fast = fast->next;
        }

        fast->next = NULL;

    } else {
        Node* prev = fast;
        while(slow != fast) {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL;
    }
}

int main() {
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.tail->next = ll.head;

    removeCycle(ll.head);
    print(ll.head);

    return 0;
}