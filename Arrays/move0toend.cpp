#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZeros(int size, vector<int>& nums){
    int point1 = -1;

    // Place the pointer at 0
    for(int index = 0; index < size; index++){
        if(nums[index] == 0){
            point1 = index;
            break;
        }
    }

    // Array has not a single 0
    if(point1 == -1) return nums;

    // Swapping
    for(int next = point1+1; next < size; next++){
        if(nums[next] != 0){
            swap(nums[next], nums[point1]);
            point1++;
        }
    }

    return nums;
}

int main(){

    return 0;
}