#include<iostream>
using namespace std;

//using arrays  

class Queue{
    int* arr;

    int size;
    int currsize; //excludes the empty space

    int f, r; //front and rear

public: 
    Queue(int size) {
        this->size = size;
        arr = new int(size);
        currsize = 0;

        f = 0;
        r = -1;
    }

    void push(int data) {
        if(currsize == size) {
            cout << "full queue" << endl;
            return;
        }

        r = (r+1) % size;
        arr[r] = data;
        currsize++;
    }

    void pop() {
        if(empty()){
            cout << "empty" << endl;
        }
        f = (f+1) % size; 
        currsize--;
    }

    int front() {
        if(empty()){
            cout << "empty" << endl;
            return -1;
        }
        return arr[f];
    }

    bool empty() {
        return currsize == 0;
    }
};

int main() {
    Queue q(4); //size of the array

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.front() << endl;

    q.pop();

    cout << q.front() << endl;

    q.push(6);

    cout << q.front() << endl;

    return 0;
}