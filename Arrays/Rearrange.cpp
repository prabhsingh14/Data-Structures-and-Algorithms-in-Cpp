// Rearrange array in alternative positive and negative elements
#include<iostream>
#include<vector>
using namespace std;

vector<int>reArrange(vector<int>& nums){
    int size = nums.size();
    int posIndex = 0;
    int negIndex = 1;

    vector<int> ans(size,0);

    for(int index = 0; index < size; index++){
        if(nums[index] < 0){
            ans[negIndex] = nums[index];
            negIndex += 2;
        }

        else{
            ans[posIndex] = nums[index];
            posIndex += 2;
        }
    }

    return ans;
}

int main(){

    return 0;
}