#include<iostream>
using namespace std;

int bruteforce(int mat[][4], int n, int m, int key){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] == key){
                cout << "("<< i << "," << j <<")"<< endl;
            }
        }
    }
    return -1;
}

bool staircase(int mat[][4], int n, int m, int key){
    int i = 0, j = m-1;
//TC - O(n+m)  
    while(i<n && j>=0){
        if(mat[i][j] == key){
            cout << "found at cell ("<< i << "," << j <<")"<< endl;
            return true;
        } else if (mat[i][j] > key){
            j--;
        } else {
            i++;
        }
    }
    cout << "key not found" << endl;
    return false;

}

int main(){
    int matrix[4][4] = {{10,20,30,40}, 
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};

    // bruteforce(matrix, 4, 4, 50);
    staircase(matrix, 4, 4, 33);

    return 0;
}