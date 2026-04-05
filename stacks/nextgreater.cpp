#include<iostream>
#include<stack>
#include<vector>
using namespace std;

//very similar to the stock span problem

void nextgreater(vector<int> arr, vector<int> ans) { //TC = O(n) where n is the size of the initial vecotr or array
    stack<int> s;

    int idx = arr.size() - 1;
    ans[idx] = -1; //last one will always have -1 as theres no other element to its right
    s.push(arr[idx]);

    for(idx-=1; idx>=0; idx--) {
        int curr = arr[idx];

        while(!s.empty() && s.top() <= curr) { //while its not empty or top is lesser than the current then pop them
            s.pop();
        }
        

        if(s.empty()) { //if the stack is empty and you want to add the next element - then uska index -1 hoga
            ans[idx] = -1;
        } else {
            ans[idx] = s.top();  //otherwise say 3 is there in the stack as the top value, and you want to add 1, then the next greater of 1 is 3
        }

        s.push(curr);
    }

    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main() {
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans = {0, 0, 0, 0, 0};

    nextgreater(arr, ans);
    return 0;
}