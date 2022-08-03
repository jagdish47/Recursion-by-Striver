#include<iostream>
#include<vector>
using namespace std;

bool flag = false;
void subsequenceSum(int ind, vector<int> &ds, int s, int sum, int arr[], int n){

    if(ind == n){
        if(s == sum && flag == false){
            flag = true;
            for(auto pr : ds){
                cout<<pr<<" ";
            }
        }
        return;
    }


    ds.push_back(arr[ind]);
    s+=arr[ind];

    subsequenceSum(ind+1, ds, s, sum, arr, n);
    s-=arr[ind];

    ds.pop_back();
    subsequenceSum(ind+1, ds, s, sum, arr, n);
}

int main(){
    int arr[] = {1, 2, 3};
    int n = *(&arr + 1) - arr;

    int sum = 5;
    vector<int> ds;

    subsequenceSum(0, ds, 0, sum, arr, n);
    return 0;

}