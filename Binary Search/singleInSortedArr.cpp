#include<bits/stdc++.h>
using namespace std;

// all elements appear twice, except one. Find that
int singleInSortedArray(int arr[], int size){
    if(size == 1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[size-1] != arr[size-2]) return arr[size-1];

    /*(even,odd) - element is on the right half, eliminate the left half
    (odd,even) - element is on the left half, eliminate the right half
    evenEle = oddEle*/

    int low = 1;
    int high = size - 2;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid + 1]) return arr[mid];

        // (even,odd)
        if((mid % 2 == 1 && arr[mid] == arr[mid-1]) || (mid % 2 == 0 && arr[mid] == arr[mid+1]))
            // eliminate the left half
            low = mid + 1;

        else high = mid - 1;
    }

    return -1;
}

int main(){
    return 0;
}