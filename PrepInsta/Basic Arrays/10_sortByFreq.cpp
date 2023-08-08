#include<iostream>
#include<map>
#include<algorithm>
#include<iterator>
using namespace std;


int main(){
    int arr[]={ 2, 5, 3, 6, 4, 8, 2, 5, 4, 7, 8, 6, 3, 2, 1};
    int n = sizeof(arr)/sizeof(int);
    map<int, int> mp;
    for( int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    map<int, int> :: iterator iter = mp.begin();
    // sort(mp.begin(), mp.end());
    while(iter!=mp.end()){
        cout<<iter->first<<" "<<iter->second<<endl;
        iter++;
    }
}