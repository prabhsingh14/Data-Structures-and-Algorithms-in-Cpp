#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void nextPermutations(vector<int>& nums){
    int size = nums.size();
    int index = -1;

    // Step-1: Find first decreasing element from the end
    for(int i = size-2; i >= 0; i--){
        if(nums[i] < nums[i+1]){
            index = i;
            break;
        }
    }

    // If no such element is found, reverse the entire array
    if(index == -1){
        std::reverse(nums.begin(), nums.end());
        return;
    }

    // Step-2: Find the element just larger than nums[index]
    for(int i = size-1; i >= 0; i--){
        if(nums[i] > nums[index]){
            swap(nums[i], nums[index]);
            break;
        }
    }

    // Rev the element to the right of the index
    reverse(nums.begin() + index + 1, nums.end());
}

int main(){

    return 0;
}