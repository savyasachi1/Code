#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){
    int a=0,b,c=1,sum=0;
    // cout<<"abc";
    while(n/pow(5,c)>0){
        b=n/pow(5,c);
        sum+=b;
        c++;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the number of factorial : ";
    cin>>n;
    int result=fact(n);
    cout<<result;
}