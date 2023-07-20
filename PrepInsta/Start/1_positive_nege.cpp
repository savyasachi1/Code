#include<iostream>
using namespace std;

bool check(int a){
    if(a>0){
        return true;
    }
    return false;
}

int main(){
    int num;
    cout<<"Enter the number to check :";
    cin>>num;
    if(num==0){
        cout<<"The entered number is Zero";
    }
    else{
        if(check(num)){
            cout<<"Number is positive";
        }
        else{
            cout<<"Number is negative";
        }
    }
}