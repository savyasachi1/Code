#include<iostream>
using namespace std;

bool check(int num)
{
    if(num==2 || num==1)
    {
        return true;
    }
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(check(num))
    {
        cout<<"It is a prime number";
    }
    else
    {
        cout<<"It is not a prime number";
    }
}