#include<iostream>
using namespace std;

int main(){
    int e;
    int s;
    int m;

    cout<<"Enter English Marks: ";
    cin>>e;

    cout<<"Enter Science Marks: ";
    cin>>s;

    cout<<"Enter Math Marks: ";
    cin>>m;

    int avg = (e+s+m) / 3;

    cout<<"the average marks are: " <<avg << endl;

    return 0;
}