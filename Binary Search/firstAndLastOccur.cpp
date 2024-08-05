#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int x, int size){
    int low = 0;
    int high = size-1;
    int ans = size;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }

        else low = mid + 1;
    }

    return ans;
}

int upperBound(vector<int>& arr, int x, int size){
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

pair<int,int>firstAndLastOccur(vector<int>& arr, int x){
    int lb = lowerBound(arr, x, arr.size());

    if((lb == arr.size()) || (arr[lb]) != x) return {-1,-1};

    return {lb, upperBound(arr,x,arr.size()) - 1};
}

int main(){
    return 0;
}