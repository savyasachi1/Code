#include<iostream>
using namespace std;

long long findPower(int num, int power){
    if(power==0)
        return 1;

    long long a = findPower(num, power-1);
    long long b= num*a;
    return b;
}

int main(){
    int num, power;
    cout<<"Enter the number and power : ";
    cin>>num>>power;

    long long ans = findPower(num, power);
    cout<<ans<<endl; 
    return 0;
}