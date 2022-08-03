#include<iostream>
using namespace std;

bool palindromeString(string str, int start, int end){

    if(str[start] != str[end]){
        return false;
    }
    
    if(start >= end){
        return true;
    }

    

    return palindromeString(str, start+1, end-1);
}


int main(){

    string str = "abccba";
    int start = 0;
    int end = str.length() - 1;

    bool ans = palindromeString(str, start, end);

    cout<<ans;
}