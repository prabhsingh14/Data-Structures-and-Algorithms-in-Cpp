#include<bits/stdc++.h>
using namespace std;

int LCS(vector<int>& nums){
    int longest = 1;
    unordered_set<int> st;

    if(nums.size() == 0) return 0;

    for(int index = 0; index < nums.size(); index++)
        st.insert(nums[index]);

    for(auto iter : st){
        if(st.find(iter-1) == st.end()){
            int count = 1;
            int x = iter;

            while(st.find(x+1) != st.end()){
                x += 1;
                count += 1;
            }

            longest = max(longest, count);
        }
    }

    return longest;
}

int main(){
    return 0;
}