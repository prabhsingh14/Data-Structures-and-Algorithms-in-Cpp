#include<iostream>
using namespace std;

// In selection sort, we place the minimum element at its right position first.

void selectionSort(int array[], int size){
    for(int index = 0; index < size - 1; index++){
        // finding minimum
        int mini = index;
        for(int pointer = index + 1; pointer < size; pointer++){
            if(array[mini] > array[pointer]) mini = pointer;
        }

        // swap
        int element = array[mini];
        array[mini] = array[index];
        array[index] = element;
    }
}

/*int main(){

    return 0;
}*/