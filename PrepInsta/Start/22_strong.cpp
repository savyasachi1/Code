#include<iostream>
using namespace std;

int factorial(int num){
    int multi = 1;
    for(int i=1;i<=num;i++){
        multi = multi * i;
    }
    return multi;
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int digit, sum=0, temp = num;
    while(temp != 0){
        digit = temp%10;
        sum = sum + factorial(digit);
        // cout<<factorial(digit)<<endl;
        temp= temp/10;
    }
    if(sum==num)
        cout<<"Strong number ";
    else
        cout<<"Not a strong number ";
    return 0;
}