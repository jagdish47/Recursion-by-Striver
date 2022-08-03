#include<iostream>
using namespace std;


void infiniteRecursion(int x){

    cout<< x << endl;
    infiniteRecursion(1);
}



int main(){

    infiniteRecursion(1);
    return 0;
}



// When a function call itself called Recursion until a Specified Condition is met.
//A specified Condition where function stops called BASE CASE or BASE CONDITION.

// In above problem it's an infinite Recursion because there is no condition where the function stops, so function keep calling itself


