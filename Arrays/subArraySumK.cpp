#include<bits/stdc++.h>
using namespace std;

int subArraySum(vector<int>& nums, int k){
    unordered_map<int,int> preSumMap;
    int sum = 0;
    int count = 0;

    preSumMap[0] = 1;

    for(int index = 0; index < nums.size(); index++){
        sum += nums[index];

        if(preSumMap.find(sum - k) != preSumMap.end()) count += preSumMap[sum-k];
        
        preSumMap[sum]++;
    }

    return count;
}

int main(){
    return 0;
}