#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main()
{
    string str1="savyasachi";
    string str2="chisavyasa";
    map<char, int> mp1;
    map<char, int> mp2;
    for(int i=0;i<str1.length();i++){
        mp1[str1[i]]++;
    }
    for(int i=0;i<str2.length();i++){
        mp2[str2[i]]++;
    }
    if(mp1==mp2)
        cout<<"!! Anagram !!";
    else
        cout<<"!! No Anagram !!";

    return 0;
}