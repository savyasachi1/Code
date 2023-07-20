#include<iostream>
using namespace std;

bool check(int num){
    if(num%2==0){
        return true;
    }
    return false;
}

int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    if(num==0)
        cout<<"Even";
    else{
        if(check(num))
            cout<<"Even";
        else
            cout<<"Odd";
    }
}