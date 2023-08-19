#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    stack<char> s1;
    cout<<"Enter the string: ";
    // stack<char> s2;
    string str;
    // cin>>str;
    getline(cin, str);
    for(int i = 0;i<str.size();i++){
        char ch = str[i];
        s1.push(ch);
    }
    string ans;
    while(!s1.empty()){
        char ch = s1.top();
        ans.push_back(ch);
        s1.pop();
    }
    cout<<"Reversed string is: "<<ans;
    return 0;
}