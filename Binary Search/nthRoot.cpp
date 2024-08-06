// Find nth root of M
#include<bits/stdc++.h>
using namespace std;

int nthRoot(int n, int M){
    if(M == 0) return 0;
    if(M == 1) return 1;

    int low = 1;
    int high = M;

    while(low <= high){
        int mid = (low + high)/2;
        double result = pow(mid,n);

        if(result == M) return mid;
        else if(result < M) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}

int main(){
    return 0;
}