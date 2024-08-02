#include<bits/stdc++.h>
using namespace std;

// an element is said to be leader if it is greater than all elements on its right side
vector<int> leaders(int n, int arr[]){
    vector<int> ans;
    int maxi = INT_MIN;

    for(int i = n-1; i >= 0; i--){
        if(arr[i] >= maxi){
            maxi = arr[i];
            ans.push_back(arr[i]);
        }
    }

    reverse(ans.begin(), ans.end()); // need to return accordingly to question for which reverse required
}

int main(){   

    return 0;
}