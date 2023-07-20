#include<iostream>
using namespace std;

pair<int, int> findmin(int* arr, int n){
    int mini=arr[0];
    int index=0;
    for(int i=0;i<n;i++){
        if(mini>arr[i]){
            mini=arr[i];
            index=i;
        }
    }
    return make_pair(mini, index+1);
}

int main(){
    int n=0;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int* arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<int, int> p = findmin(arr, n);
    cout<<"The minimum element value is "<<p.first<<" at index "<<p.second<<"."; 
}