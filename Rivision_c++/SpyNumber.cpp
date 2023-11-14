#include<iostream>
using namespace std;

bool check(int num){
    int sum = 0, product = 1, digit;
    while(num>0){
        digit = num%10;
        sum+=digit;
        product*=digit;
        num/=10;
    }
    if(product==sum)
        return true;
    return false;
}

int main()
{
    int num;
    cin>>num;
    cout<<check(num);
    return 0;
}