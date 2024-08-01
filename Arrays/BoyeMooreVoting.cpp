#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums){
    int count = 0;
    int element = 0;

    for(int index = 0; index < nums.size(); index++){
        if(count == 0){
            element = nums[index];
            count++;
        }

        else if(element == nums[index]){
            count++;
        }

        else count--;
    }

    return element;
}

int main(){

    return 0;
}   