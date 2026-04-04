#include<iostream>
#include<list>
#include<iterator>
using namespace std;


void print(list<int> ll) {
    list<int>::iterator itr;
    for(itr = ll.begin(); itr != ll.end(); itr++) {
        cout << (*itr) << "->";
    }
    cout << "NULL" << endl;
}


int main() {
    list<int> ll; //similar to vector syntax

    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(3);
    ll.push_back(4);

    print(ll);
    // cout << "size of the LL: " << ll.size() << endl;

    // cout << "head of the LL: " << ll.front() << endl;
    // cout << "tail of the LL: " << ll.back() << endl;

    // ll.pop_front();
    // print(ll);

    // ll.pop_back();
    // print(ll);

    list<int>::iterator itr = ll.begin();
    advance(itr, 3); //iterator, to which position
    ll.insert(itr, 1, 7); //iterator, how many, element to insert

    print(ll);

    return 0;
}