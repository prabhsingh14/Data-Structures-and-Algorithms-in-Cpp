// Find the smallest divisor given a threshold
#include<bits/stdc++.h>
using namespace std;

int sumByD(vector<int>& arr, int divisor){
    int sum = 0;

    for(int i = 0; i < arr.size(); i++) sum += ceil((double)arr[i]/(double)divisor);

    return sum;
}

int smallestDivisor(vector<int>& arr, int threshold){
    if(arr.size() >  threshold) return -1;
    
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());

    while(low <= high){
        int mid = (low + high)/2;

        if(sumByD(arr, mid) <= threshold) high = mid - 1;
        else low = mid + 1;
    }

    return low;
}

int main(){
    return 0;
}