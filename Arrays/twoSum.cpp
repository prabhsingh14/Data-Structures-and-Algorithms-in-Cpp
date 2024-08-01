#include<iostream>
#include<vector>
using namespace std;

vector<int>twoSum(vector<int>& nums, int target){
    vector<int> result;
    int size = nums.size();

    for(int start = 0; start < size; start++){
        int remaining = target - nums[start];

        for(int next = start; next < size; next++){
            if(nums[next] == remaining){
                result.push_back(start);
                result.push_back(next);
            }
        }
    }

    return result;
}

int main(){

    return 0;
}