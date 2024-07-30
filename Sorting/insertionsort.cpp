#include<iostream>
using namespace std;

void insertionSort(int array[], int size){
    for(int index = 0; index <= size - 1; index++){
        int pointer = index;

        while(pointer > 0 && array[pointer-1] > array[pointer]){
            swap(array[pointer-1], array[pointer]);
        }
    }
}

/*int main(){
    return 0;
}*/