//with no extra space
//first element -> last element -> second element -> second last element -> third -> and so one
//traverse forward and backward, pick one node from each and then update the iterator / pointer

//split into halves like merge sort
// 1. split at mid
// 2. reverse 2nd part and then forward travel
// 3. now take one by one by merging 

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

};

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;  
    }

    cout << "NULL" << endl;
}

Node* splitatmid(Node* head) {
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if(prev != NULL) {
        prev->next = NULL; //breaks the LL
    }

    return slow; //slow = right head
}

Node* merge(Node* left, Node* right) {
    List ans;
    Node* i = left;
    Node* j = right;

    while(i != NULL && j != NULL) {
        if(i->data < j->data) {
            ans.push_back(i->data);
            i = i->next;
        } else {
            ans.push_back(j->data);
            j = j->next;
        }
    }


    while(i != NULL) {
        ans.push_back(i->data);
        i = i->next;
    }

    while(j != NULL) {
        ans.push_back(j->data);
        j = j->next;
    }

    return ans.head;

}

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }

    return prev; //head of rev LL
}


Node* zigzag(Node* head) {

    Node* righthead = splitatmid(head);
    Node* rightheadrev = reverse(righthead);

    //alternate merging 
    Node* left = head;
    Node* right =  rightheadrev;
    Node* tail = right;

    while(left != NULL && right !=  NULL) {
        Node* nextleft = left->next;
        Node* nextright = right->next;

        left->next = right;
        right->next = nextleft;
        tail = right;

        left = nextleft;
        right = nextright;
    }

    if(right != NULL) {
        tail->next = right;
    }

    return head;
}

int main() {
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);

    print(ll.head);

    ll.head = zigzag(ll.head);
    print(ll.head);


    return 0;
}