#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& array, int low, int mid, int high){
    vector<int>temp;

    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(array[left] <= array[right]){
            temp.push_back(array[left]);
            left++;
        }

        else{
            temp.push_back(array[right]);
            right--;
        }
    }

    while (left <= mid) {
        temp.push_back(array[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(array[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        array[i] = temp[i - low];
    }
    
}

void mergeSort(vector<int>& array, int low, int high){
    if(low >= high) return;

    int mid = (low + high)/2;

    mergeSort(array, low, mid);
    mergeSort(array, mid+1, high);
    
    merge(array, low, mid, high);
}

int main(){

    return 0;
}