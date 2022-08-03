// Print name 5 times

#include<iostream>
using namespace std;

void printName(int count){

    if(count == 0){
        return;
    }

    cout<<"Jagdish Kumawat"<<endl;
    
    printName(count-1);

}

int main(){
    int count = 5;
    printName(count);
    return 0;
}