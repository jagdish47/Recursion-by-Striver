// Print N to 1



#include<iostream>
using namespace std;

void upto(int n){

    if(n == 0){
        return;
    }

    cout<<n<<endl;
    upto(n-1);
}

int main(){
    
    int n;

    cout<<"upto : ";
    cin>>n;

    upto(n);
}