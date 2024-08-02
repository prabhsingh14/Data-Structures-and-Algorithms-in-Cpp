#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix){
    int col0 = 1;

    for(int row = 0; row < matrix.size(); row++){
        for(int col = 0; col < matrix[0].size(); col++){
            if(matrix[row][col] == 0){
                matrix[row][0] = 0;

                if(col != 0) matrix[0][col] = 0;
                else col0 = 0;
            }
        }
    }

    for(int i = 1; i < matrix.size(); i++){
        for(int j = 1; j < matrix[0].size(); j++){
            if(matrix[i][j] == 1){
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
        }
    }

    if(matrix[0][0] == 0) for(int col = 0; col < matrix[0].size(); col++) matrix[0][col] = 0;
    if(col0 = 0) for(int row = 0; row < matrix.size(); row++) matrix[row][0] = 0;
    
}

int main(){
    return 0;
}