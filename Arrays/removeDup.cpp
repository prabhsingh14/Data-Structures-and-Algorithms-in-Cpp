#include<iostream>
using namespace std;

int removeDuplicates(int array[], int size){
    int start = 0;
    
    for(int index = 1; index < size; index++){
        if(array[start] != array[index]){
            start++;
            array[start] = array[index];
        }
    }

    return start + 1;
}

int main(){

    return 0;
}