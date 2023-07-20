#include<iostream>
using namespace std;

int check(int a, int b){
    if (a>b){
        return a;
    }
    return b;
}

int main(){
    int a, b, c;
    cout<<"Enter the three numbers : ";
    cin>>a>>b>>c;
    cout<<check(check(a,b),c);
}