#include<iostream>
#include<unordered_map>
#include<iterator>
using namespace std;

int main(){
    int arr[]= { 2, 6, 4, 3, 5, 2, 5, 6, 4, 6, 4, 7, 8, 9};
    int n = sizeof(arr)/sizeof(int);
    unordered_map<int, int> mp;
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    unordered_map<int, int> :: iterator it = mp.begin();
    for(it = mp.begin();it!=mp.end();it++){
        if(it->second==1){
            cout<<it->first<<" ";
        }
    }
}