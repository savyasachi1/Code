#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    char* strnew= new char[str.length()+1];
    for(auto ch: str){
        if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
            cout<<ch;
        }
    }
}