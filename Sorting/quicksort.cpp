#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& array, int low, int high){
    int pivot = array[low];
    int start = low;
    int end = high;

    while(start < end){
        while(array[start] <= pivot && start <= high - 1){
            start++;
        }

        while(array[end] > pivot && end >= low + 1){
            end--;
        }

        if(start < end) swap(array[start], array[end]);
    }

    swap(array[low], array[end]);
    
    return end;
}

void quickSort(vector<int>& array, int low, int high){
    if(low < high){
        int partitionIndex = partition(array, low, high);
        quickSort(array, low, partitionIndex-1);
        quickSort(array, partitionIndex+1, high);
    }
}

int main(){

    return 0;
}