#include<iostream>
#include<string>
#include<vector>
using namespace std;

//method 1 - bruteforce, get all subarrays and get the sum of each one and check which satisfies. BUT TC - O(n^2)

//method 2 - 2 pointer approach - linear sum

vector<int> pairSum(vector<int> arr, int target){
    int st = 0, end = arr.size() - 1;
    int currSum = 0;
    vector<int> ans;

    while(st < end){  //cant be  <= as they both have to be unique values. 
        currSum = arr[st] + arr[end];

        if(currSum == target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        } else if(currSum > target){
            end--;
        } else {
            st++;
        }
    }

    return ans;
}

int main(){
    vector<int> vec = {2, 7, 11, 15};
    // int target = 9;

    vector<int> ans = pairSum(vec, 9);

    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}