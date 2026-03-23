#include<iostream>
using namespace std;

int diagonalSum(int mat[][4], int n, int m){    
    int sum = 0;

    //TC = 0(n^2)
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i == j){
                sum += mat[i][j];
            } else if(j == n-1-i){ //takes care of the repeated case also
                sum += mat[i][j];
            }
        }
    }
    cout << "the sum of all the diagonal elements is: " << sum << endl;
    return sum;
}

int betterTC(int mat[][4], int n, int m){
    int sum = 0;

    //TC = O(n)
    for(int i=0; i<n; i++){
        sum += mat[i][i]; //pd

        if(i != n-1-i){ //sd  -- this condition avoids the double counting 
            //basically, only add it if its not equal to i
            sum += mat[i][n-1-i];
        }
    }

    cout << sum << endl;
    return sum;
}

int main(){
    int matrix[4][4] = {{1,2,3,4}, 
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};

    diagonalSum(matrix, 4, 4);

    betterTC(matrix, 4, 4);
    return 0;
}