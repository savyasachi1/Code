#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int sum=0;
    // int arr[]=stoi(str);
    for(auto ch:str){
        sum+=(int(ch)-int('0'));
    }
    cout<<sum;
}