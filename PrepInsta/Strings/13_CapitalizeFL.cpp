#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(i==0){
            str[0]=str[0]-'a'+'A';
            // cout<<" s ";
        }
        else if(i==str.length()-1){
            str[str.length()-1]=str[str.length()-1]-'a'+'A';
            // cout<<" l ";
        }
        else if(str[i]==' '){
            str[i+1]=toupper(str[i+1]);
            str[i-1]=toupper(str[i-1]);
            // str[i-1]=str[i-1]-'a'+'A';
            // cout<<" sp ";
        }   
    }
    cout<<str;
}