#include<iostream>
using namespace std;

long long powerOfNum(int n, int p){
    if(p==0)
        return 1;
    
    return n*powerOfNum(n, p-1);
}

int main(){
    int num, power;
    cout<<"Enter the number and power :";
    cin>>num>>power;
    cout<<powerOfNum(num, power);
    return 0;
}