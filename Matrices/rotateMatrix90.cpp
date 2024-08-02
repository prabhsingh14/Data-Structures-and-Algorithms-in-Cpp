#include<bits/stdc++.h>
using namespace std;

void rotateMatrix90(vector<vector<int>>& matrix){
    int size = matrix.size();

    // Step-1: Transpose
    for(int row = 0; row < size - 1; row++){
        for(int col = row + 1; col < size; col++){
            swap(matrix[row][col], matrix[col][row]);
        }
    }

    // Step-2: Reverse
    for(int index = 0; index < size; index++) reverse(matrix[index].begin(), matrix[index].end());
}

int main(){
    return 0;
}