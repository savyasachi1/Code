#include<iostream>
#include<unordered_map>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    string s = "savyasachi is a good boy";
    map<char, int> mp;
    for( int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    map<char, int> :: iterator it = mp.begin();
    while(it!=mp.end()){
        cout<<it->first<<"  "<<it->second<<endl;
        it++;
    }
    return 0;
}