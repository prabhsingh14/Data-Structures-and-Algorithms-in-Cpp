#include<bits/stdc++.h>
using namespace std;

int searchInRotatedAndSortedDuplicates(int arr[], int size, int target){
    int low = 0;
    int high = size - 1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] == target) return mid;

        // edge case due to duplicates
        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            low = low + 1;
            high = high - 1;
            continue;
        }

        // Identify the sorted part - left sorted
        if(arr[low] <= arr[mid]){
            if(arr[low] <= target && target <= arr[mid]) high = mid - 1;
            else low = mid + 1;
        }

        // right sorted
        else{
            if(arr[mid] <= target && target <= arr[high]) low = mid + 1;
            else high = mid - 1;
        }
    }

    return -1;
}

int main(){
    return 0;
}