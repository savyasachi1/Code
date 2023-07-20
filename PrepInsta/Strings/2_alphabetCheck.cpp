#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    if((ch>=97&&ch<=122) || (ch>=65&&ch<=90))
        cout<<"It is a alphabet";
    else 
        cout<<"It is a symbol";
}