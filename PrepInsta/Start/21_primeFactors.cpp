#include<iostream>
using namespace std;

bool isPrime(int num){
    for(int i = 2;i<num;i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int temp = num;
    for(int i=2;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
            num = num/i;
            i--;
        }
    }
    return 0;
}