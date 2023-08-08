#include<iostream>
using namespace std;

int sumDigit(int num){
    int digit, sum=0;
    while(num!=0){
        digit = num%10;
        sum+=digit;
        num=num/10;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int sum = sumDigit(num);
    if(num%sum==0)
        cout<<"It is a Harshad Number";
    else
        cout<<"It is not a Harshad Number";
    return 0;
}
/*
A Harshad number is a positive integer that is 
divisible by the sum of the digits of the integer. 
It is also called the Niven number.

For Example : 153
Sum of digits = 1 + 5 + 3 = 9

153is divisible by 9 so 153 is a Harshad Number.
*/