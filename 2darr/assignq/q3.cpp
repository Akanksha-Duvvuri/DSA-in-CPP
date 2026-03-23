#include<iostream>
using namespace std;

void transpose(int mat[][3], int transposed[][2], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            transposed[j][i] = mat[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int mat[2][3] = {{4,7,8}, {8,8,7}};
    int transposed[3][2];

    transpose(mat, transposed, 2, 3);
    return 0;
}