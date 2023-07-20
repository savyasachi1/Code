#include<iostream>
#include<string>

using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    for(auto ch : str){
        if(ch==' ')
            continue;
        else
            cout<<ch;
    }
}