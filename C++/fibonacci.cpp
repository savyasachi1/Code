#include<iostream>
using namespace std;

int main(){
    int a=0, b=1, n, c;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

}