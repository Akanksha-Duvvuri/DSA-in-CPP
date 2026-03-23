#include<iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m){
    int srow = 0, scol = 0;
    int erow = n-1, ecol = m-1;

    while(srow <= erow && scol <= ecol){  //<= because if we have odd number of col and rows, the middle row should also get printed 
        //top
            for(int j = scol; j<=ecol; j++ ){  
                cout << mat[srow][j] << " ";
            }
        //right
            for(int i = (srow+1); i<=erow; i++){
                cout << mat[i][ecol] << " ";
            }

        //bottom
            for(int j = ecol-1; j>= scol; j--){
                if(srow == erow) break; //already printed by top - corner case
                cout << mat[erow][j] << " ";
            }

        //left
            for(int i = erow-1; i>=srow+1; i--){
                if(scol == ecol) break; //already printed by right - corner case
                cout << mat[i][scol] << " ";
            }

            srow++; scol++;
            erow--; ecol--;
    }

    cout << endl;
}

int main(){
    int matrix[4][4] = {{1,2,3,4}, 
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};

    spiralMatrix(matrix, 4, 4);

    int matrix2[3][4] = {{1,2,3,4}, 
                        {5,6,7,8},
                        {9,10,11,12}};

    spiralMatrix(matrix2, 3, 4);

    //1 2 3 4 8 12 11 10 9 9 5 6 7 6  - 6 gets printed again wo corner case 
    return 0;
}