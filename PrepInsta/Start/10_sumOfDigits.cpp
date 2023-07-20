#include<iostream>
using namespace std;

int sum(int sum, int num){
    return num+sum;
}

int main(){
    int num;
    cout<<"Enter the  number : ";
    cin>>num;
    int ans=0,digit;
    for(int i=num;i>0;i=i/10){
        digit=i%10;
        // cout<<digit<<" ";
        ans=sum(ans,digit);
    }
    cout<<ans;
}