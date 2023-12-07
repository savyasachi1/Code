#include<iostream>
#include<cmath>
using namespace std;

bool func(int num){
    int count=0; 
    int temp = num;
    int temp2 = num;
    while(temp>0){
        count++;
        temp/=10;
    }
    int sum=0;
    while(temp2>0){
        int digit = temp2%10;
        sum+=pow(digit,count);
        count--;
        temp2/=10;
    }
    if(num==sum)
        return true;
    return false;
}

int main()
{
    int num=415;
    cout<<func(num);
    return 0;
}