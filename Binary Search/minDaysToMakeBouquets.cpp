#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int>& arr, int day, int m, int k){
    int count = 0;
    int noOfBouq = 0;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] <= day) count++;
        else{
            noOfBouq += (count/k);
            count = 0;
        }
    }

    noOfBouq += (count/k);

    return noOfBouq >= m;
}

int garden(vector<int>& arr, int m, int k){
    long long val = m * 1LL * k * 1LL;
    if(val > arr.size()) return -1;

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i = 0; i < arr.size(); i++){
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    int low = mini;
    int high = maxi;

    while(low <= high){
        int mid = (low + high)/2;

        if(possible(arr, mid, m, k)) high = mid - 1;
        else low = mid + 1;
    }

    return low;
}

int main(){
    return 0;
}