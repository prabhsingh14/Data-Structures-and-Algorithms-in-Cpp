#include<iostream>
#include<climits>
using namespace std;

long long maxSubArraySum(long long array[], int size){
    long long maxi = LLONG_MIN;
    long long sum = 0;

    for(int index = 0; index < size; index++){
        sum += array[index];

        if(sum > maxi) maxi = sum;

        if(sum < 0) sum = 0;
    }

    return maxi;
}

int main(){

    return 0;
}