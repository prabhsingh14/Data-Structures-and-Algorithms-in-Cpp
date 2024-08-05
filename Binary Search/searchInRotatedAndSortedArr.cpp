#include<bits/stdc++.h>
using namespace std;

int searchInRotatedAndSorted(int arr[], int size, int target){
    int low = 0;
    int high = size - 1;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == target) return mid;

        // Identify the sorted part, and then perform the check
        if(arr[low] <= arr[mid]){ // left sorted
            if(arr[low] <= target && target <= arr[mid]) high = mid - 1;
            else low = mid + 1;
        }

        // right sorted
        else{
            if(arr[mid] <= target && target <= arr[high]) low = mid + 1;
            else high = mid - 1;
        }
    }

    return -1; // element not found
}

int main(){
    return 0;
}