#include<iostream>
using namespace std;

pair<int, int> findmin(int* arr, int n){
    int index=0, mini=arr[0];
    for(int i=1;i<n;i++){
        if(mini>arr[i]){
            mini=arr[i];
            index=i;
        }
    }
    return make_pair(mini, index+1);
}

pair<int, int> findmax(int* arr, int n){
    int index=0, maxi=arr[0];
    for(int i=1;i<n;i++){
        if(maxi<arr[i])
        {
            maxi=arr[i];
            index=i;
        }
    }
    return make_pair(maxi, index+1);
}

int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int* arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<int, int> pmax= findmax(arr,n);
    pair<int, int> pmin= findmin(arr,n);
    cout<<"The maximum element value is "<<pmax.first<<" at index "<<pmax.second<<"."<<endl;
    cout<<"The minimum element value is "<<pmin.first<<" at index "<<pmin.second<<"."<<endl;

}