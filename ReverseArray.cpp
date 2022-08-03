#include <iostream>
using namespace std;



// Method - 1
// int reverseArray(int arr[], int start, int end)
// {

//     if(start >= end){
//         return 0;
//     }

//     else{
//         swap(arr[start], arr[end]);

//         reverseArray(arr, start+1, end-1);
//     }
// }





// Method-2
// void reverseSinglePointer(int arr[], int start, int end){

//     if(start > end){
//         return;
//     }


//     reverseSinglePointer(arr ,start+1, end);
//     cout<<arr[start]<<" ";

// }




// Method - 3

void reverse(int arr[], int start, int end){

    if(start >= end/2){
        return;
    }

    swap(arr[start], arr[end-start-1]);

    reverse(arr, start+1, end);
}

int main()
{

    int arr[] = {50, 20, 10, 5, 1};
    int size = *(&arr + 1) - arr;
    int start = 0;

    // reverseArray(arr, start, size-1);  //method -1
    // reverseSinglePointer(arr, start, size-1); //method-2
    reverse(arr, start, size);



    for(int i = 0; i < size; i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}