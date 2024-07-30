#include<iostream>
using namespace std;

// In bubble sort, the largest element gets placed at its right sorted position first.

void bubbleSort(int array[], int size){
    for(int index = size - 1; index >= 0; index++){
        int didSwap = 0;

        for(int pointer = 0; pointer <= size - 1; pointer++){
            if(array[pointer] > array[pointer + 1]){
                int temp = array[pointer + 1];
                array[pointer + 1] = array[pointer];
                array[pointer] = temp;

                didSwap = 1;
            }
        }

        if(didSwap == 0) break;
    }
}

/*int main(){

    return 0;
}*/