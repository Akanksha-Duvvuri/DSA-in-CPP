#include<iostream>
#include<vector>
using namespace std;

int main(){
    // // vector<int> vec1 = {1,2,3,4};
    // vector<int> vec2(10, -1);
    // cout << vec2.size() << endl;


    // for(int i=0; i<vec2.size(); i++){
    //     cout << vec2[i] << " ";
    // }
    // cout << endl;

    vector<int> vec = {1, 2, 3, 4};

    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;


    vec.push_back(5);  //adding in the end of the vector. Use pop_back to remove the last element

    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);

    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.pop_back();
    vec.pop_back();
    vec.pop_back();

    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
    return 0;
}