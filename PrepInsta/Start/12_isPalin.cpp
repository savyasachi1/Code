#include<iostream>
using namespace std;

bool palin(int num){
    int temp = 0;
    int a = num;
    while(num!=0){
        int digit = num%10;
        temp = temp*10 +digit;
        num = num/10;
    }
    return (a==temp);
}

int main()
{
    int num;
    cin>>num;
    if(palin(num))
        cout<<"It is Palindrome ";
    else    
        cout<<"It is not a Palindrome ";
    return 0;
}