#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;
    cout<<str<<endl;
    sort(str.begin(),str.end());
    cout<<str<<endl;
}