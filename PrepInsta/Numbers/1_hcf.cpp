#include<iostream>
using namespace std;

int findHCF(int a, int b){
    int value = 0;
    int max = 0;
    if(a>b){
        max = a;
    }
    else max = b;
    for( int i =max;i>0;i--){
        if(a%i==0 && b%i==0){
            value = i;
            break;
        }
    }
    return value;
}

int main(){
    int a, b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    cout<<"The HCF of "<<a<<" and "<<b<<" is "<<findHCF( a, b);
    return 0;
}