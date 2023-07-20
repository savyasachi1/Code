#include<iostream>
using namespace std;

int main(){
    int n, count=0;
    cout<<"enter the number\n";
    cin>>n;
    while(n!=0){
        if(n&1){
            count++;
        }
        n= n >> 1;
    }
    cout<<count;
    return 0;
}