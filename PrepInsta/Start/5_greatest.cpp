#include<iostream>
using namespace std;

bool check(int a, int b){
    if(a>b)
        return true;
    return false;
}

int main(){
    int a, b;
    cout<<"Enter the numbers to check :";
    cin>>a>>b;
    if(a==b)
        cout<<"They are equal";
    else
    {
        if(check(a,b))
            cout<<"a is greater";
        else
            cout<<"b is greater";
    }
}