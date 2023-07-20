// pointer as function arguments - call by reference

#include<iostream>
using namespace std;

void increment(int *p, int a){
    *p=(*p)+5;
    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;
    a++;
    cout<<a<<endl;
}

int main()
{
    int a=10;
    increment(&a,a);
    cout<<a;
}