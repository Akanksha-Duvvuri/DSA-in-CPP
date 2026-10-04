// question - max no of activities that can be performed by a single person (person can do one at a time)

// start = [1, 3, 0, 5, 8, 5]
// end = [2, 4, 6, 7, 9, 9]

// select a0, a1, a3, a4 = so answer = 4

//more free time - more activities = pick the activities that end early

//1. sort activities based on end time, 2. how do you check if activities overlap? first activity end time > second activity ka start time

// non overlap - lst end <= 2nd start

#include<iostream>
#include<vector>
using namespace std;

int maxActivities(vector<int> start, vector<int> end){
    //sort on end time, //select A0
    cout << "selecting A0\n"; 
    int count = 1;
    int currEndTime = end[0]; //end time of activity A0

    for(int i=1; i<start.size(); i++){
        if(start[i] >= currEndTime) {
            cout << "selecting A" << i << endl;
            count++;
            currEndTime = end[i];
        }
    }

    return count;
}

int main(){
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    
    cout << maxActivities(start, end) << endl;
    return 0;
}