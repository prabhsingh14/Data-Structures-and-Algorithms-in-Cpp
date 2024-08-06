#include<bits/stdc++.h>
using namespace std;

int sqrt(int arr[], int size){
    int low = 1;
    int high = size;

    while(low <= high){
        int mid = (low + high)/2;
        long long square = (mid * mid);

        if(square <= mid) low = mid + 1;
        else high = mid - 1;
    }

    return high;
}