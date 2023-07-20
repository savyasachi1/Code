#include<iostream>
#include<string>
using namespace std;

void reverse(char *rev, char ch, int n){
    rev[n]=ch;
}

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int n=str.length();
    char *rev= new char[n+1];
    for(char ch:str){
        n--;
        reverse(rev,ch,n);
    }
    cout<<rev;
}