#include<iostream>
using namespace std;


void findEven(int n){

    if(n < 0){
        return;
    }

    findEven(n-1);

    if(n % 2 == 0){
        cout<<n<<" ";
    }
}


int main(){

    int n;

    cout<<"number : ";
    cin>>n;

    findEven(n);

    return 0;
}