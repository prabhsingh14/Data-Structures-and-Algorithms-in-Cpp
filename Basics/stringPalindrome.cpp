#include<iostream>
using namespace std;

// A string is said to be palindrome if the reverse of the string is the same as the string.

bool palindrome(string str, int index){
    if(index >= str.length()/2) return true;

    if(str[index] != str[str.length() - index - 1]) return false;

    return palindrome(str, index+1);
}

/*int main(){

    return 0;
}*/