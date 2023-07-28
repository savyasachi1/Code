#include<iostream>
using namespace std;

int findPower(int num, int power){
    if(power==0)
        return 1;

    int a = findPower(num, power-1);
    int b= num*a;
    return b;
}

int main(){
    int num, power;
    cout<<"Enter the number and power : ";
    cin>>num>>power;

    int ans = findPower(num, power);
    cout<<ans<<endl; 
    return 0;
}