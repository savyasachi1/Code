#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    for(char st : str){
        cout<<st<<" ";
    }
}