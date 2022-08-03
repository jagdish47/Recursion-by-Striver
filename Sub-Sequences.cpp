#include<iostream>
#include<vector>
using namespace std;


void subsequence(int ind, vector<int> &ds, int arr[], int n){

    if(ind == n){

        for(auto pr : ds){
            cout<<pr<<" ";
        }

        if(ds.size() == 0){
            cout<<"{}";
        }

        cout<<endl;
        
        return;
    }

    ds.push_back(arr[ind]);
    subsequence(ind+1, ds, arr, n);

    ds.pop_back();
    subsequence(ind+1, ds, arr, n);
}


int main(){

    int arr[] = {3, 2, 1};
    int n = *(&arr + 1) - arr;

    vector<int> ds;
    subsequence(0, ds, arr, n);

}





