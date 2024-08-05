#include<bits/stdc++.h>
using namespace std;

int peak(int arr[], int size){
    if(size == 1) return 0;
    if(arr[0] > arr[1]) return 1;
    if(arr[size-1] > arr[size-2]) return size-1;

    int low = 1;
    int high = size-2;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
        else if(arr[mid] > arr[mid-1]) low = mid + 1;
        else if(arr[mid] > arr[mid+1]) high = mid - 1;

        // if there are multiple peaks, add below line
        else low = mid + 1;
    }

    return -1;
}

int main(){
    return 0;
}