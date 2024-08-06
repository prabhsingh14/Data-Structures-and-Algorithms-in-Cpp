#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>& vec){
    int maxi = INT_MIN;

    for(int i = 0; i < vec.size(); i++) maxi = max(maxi, vec[i]);
    return maxi;
}

int calculateTotalHours(vector<int>& vec, int hourly){
    int totalHours = 0;

    for(int i = 0; i < vec.size(); i++) totalHours += ceil((double)vec[i]/(double)hourly);

    return totalHours;
}

int minRateToEatBananas(vector<int>& vec, int h){
    // h - max time to eat all bananas
    int low = 1;
    int high = findMax(vec);

    while(low <= high){
        int mid = (low + high)/2;
        int totalHours = calculateTotalHours(vec, mid);

        if(totalHours <= h) high = mid - 1;
        else low = mid + 1;
    }

    return low;
}

int main(){
    return 0;
}