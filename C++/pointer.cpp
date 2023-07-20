#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    cout<<"Value at a is "<<a<<endl;
    cout<<"Value at p is "<<p<<endl;
    cout<<"Value at p is "<<p+1<<endl;
    cout<<"Value at q is "<<q<<endl;
    cout<<"value at r is "<<r<<endl;
    cout<<"Value at q by dereferencing r "<<*r<<endl;
    cout<<"Value at p by dereferencing r "<<**r<<endl;
    cout<<"Value at a by dereferencing r "<<***r<<endl;
    cout<<"Value at p by dereferencing q "<<*q<<endl;
    cout<<"Value at a by dereferencing q "<<**q<<endl;

}