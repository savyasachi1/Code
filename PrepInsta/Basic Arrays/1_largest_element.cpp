#include<iostream>
using namespace std;

pair<int, int> findmax(int* arr, int n){
    int maxi=arr[0];
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(maxi<arr[i]){
            maxi=arr[i];
            index=i;
        }
    }
    return make_pair(maxi,index+1);
}

int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<int, int> p = findmax(arr, n);
    cout<<"The maximum element is "<<p.first<<" at index "<<p.second;
}