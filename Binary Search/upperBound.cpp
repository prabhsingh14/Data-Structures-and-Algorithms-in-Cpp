#include<bits/stdc++.h>
using namespace std;

// smallest index such that arr[index] > x
int upperBound(int arr[], int x, int size){
    int low = 0;
    int high = size-1;
    int ans = size;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }

        else low = mid + 1;
    }

    return ans;
}

int main(){
    return 0;
}

/* You can also do it using STL 
ub = upper_bound(arr.begin(), arr.end(), x) - arr.begin()
*/