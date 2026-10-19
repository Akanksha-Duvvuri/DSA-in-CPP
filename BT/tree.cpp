#include<iostream> //includes the library needed for inp and output
#include<vector> //includes the library that lets you use vector 
#include<queue>
using namespace std; //c++ std lubrary names normally use the prefic std::


class Node { //Node is an individual element of a tree, defines a class for a node - a class ia a blueprint for creating objects 
public:  //public means the members can be accessed from outside the class
    int data;
    Node* left;
    Node* right;

    Node(int data) { //constructor 
        this->data = data; //copies the value passed to the contructor into the nodes member variable
        left = right = NULL;
    }
};

static int idx = -1;

// TC = O(n) = where n is the side of the tree vector 

Node* buildTree(vector<int> nodes) {
    idx++;

    if(nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);

    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);

    cout << root->data << " ";
}

void levelorder(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*>Q;
    Q.push(root);
    Q.push(NULL);

    while(!Q.empty()) {
        Node* curr = Q.front();
        Q.pop();

        if(curr == NULL){
            cout << endl;
            if(Q.empty()){
                break;
            }
            Q.push(NULL);
        } else {
             cout << curr->data << " ";
            if(curr->left != NULL){
                Q.push(curr->left);
            }

            if(curr->right != NULL){
                Q.push(curr->right);
            }
        }
    }
}

int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node* root = buildTree(nodes);

    cout << "root = " <<root->data << endl;


    preorder(root);
    cout << endl;

    inorder(root);
    cout << endl;

    postorder(root);
    cout << endl;


    levelorder(root);
    return 0;
}