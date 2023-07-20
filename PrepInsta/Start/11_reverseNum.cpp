#include<iostream>
using namespace std;

int newNum(int num, int previous){
    return (previous*10)+num;
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int revNum=0;
    for(int i=num;i>0;i=i/10){
        revNum=newNum(i%10,revNum);
    }
    cout<<revNum;
}