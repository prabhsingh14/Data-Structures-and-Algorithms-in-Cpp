#include<bits/stdc++.h>
using namespace std;

int minRotatedAndSorted(int arr[], int size){
    int low = 0;
    int high = size - 1;
    int ans = INT_MAX;

    while(low <= high){
        int mid = (low + high)/2;

        // left sorted
        if(arr[low] <= arr[mid]){
            ans = min(ans, arr[low]);
            low = mid + 1;
        }

        else{
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }

    return ans;
}

// Index of min - no. of times array rotated

int main(){
    return 0;
}