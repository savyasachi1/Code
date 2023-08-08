#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[]= { 2, 5, 4, 7, 5, 3, 8 ,1, 2, 5, 5, 3, 9};
    int n = sizeof(arr)/sizeof(int);
    int count = 0;
    unordered_map<int , int> mp;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]){
            continue;
        }else{
            count++;
            mp[arr[i]]++;
        }
    }
    cout<<count;
}