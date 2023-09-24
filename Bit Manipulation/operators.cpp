#include<iostream>
using namespace std;

int main()
{
    int a=5, b=8, c=7;
    int andop = a&b&c;
    int orop = a|b;
    int xorop = a^b;
    cout<<andop<<endl<<orop<<endl<<xorop;
    return 0;
}