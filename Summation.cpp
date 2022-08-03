#include<iostream>
using namespace std;

    int sum = 0;

int summation(int n){


    if(n == 0){
        return sum;
    }

    sum = sum + n;

    return summation(n-1);
}

int main(){

    int n;

    cout<<"summation upto : ";
    cin>>n;

    int ans = summation(n);

    cout<<ans;

    return 0;
}