#include<iostream>
using namespace std;

// Brute force approach-
// Copy the elements of the input array from the last to another array

void printArray(int array[], int size){
    cout<<"The reversed array is: "<<endl;
    
    for(int index = 0; index < size; index++){
        cout<<array[index]<<" ";
    }
}

/*void reverseArray(int array[], int size){
    // Create another array
    int ans[size];

    // Traverse the array and insert elements to ans from the last of the input array
    for(int index = 0; index < size; index++){  
        ans[size - index - 1] = array[index];
    }

    printArray(array, size);
}*/

// Better approach- Use two pointer approach to swap start and end index elements
void reverseArray(int array[], int size){
    int start = 0;
    int end = size - 1;

    for(int index = 0; index < size; index++){
        swap(array[start], array[end]);
        // recursive - reverseArray(array, start+1, end-1);
        start++;
        end--;
    }

    printArray(array, size);
}

/*int main(){

    return 0;
}*/