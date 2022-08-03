#include<iostream>
using namespace std;

int count = 0;


void countRecursion(){
    
    if(count == 10){
        return;
    }

    count++;
    cout<<count<<endl;

    countRecursion();


}


int main(){
    countRecursion();

}


// here we have given a condition (base condition) to stop the function 
// base condition always have return statement

// whenever return statememt comes function execution will stops(come out form function)
