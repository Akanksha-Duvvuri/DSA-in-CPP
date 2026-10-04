#include<iostream>
#include<vector>
using namespace std;

int fractional(vector<int> val, vector<int> wt, int w){
    int n = val.size();

    vector<pair<double, int>> ratio[n, make_pair(0.0, 0)]; //along with the ratio - store index asw

    for(int i=0; i<n; i++){
        double r = val[i]/(double)wt[i];
    }
}


int main() {
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};

    int w = 50;

    return 0;
}