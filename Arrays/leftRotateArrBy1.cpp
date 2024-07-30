#include<iostream>
using namespace std;

void solve(int array[], int size){
    int start = array[0];

    for(int index = 0; index < size - 1; index++){
        array[index] = array[index + 1];
    }

    array[size - 1] = start;
}

int main(){

    return 0;
}