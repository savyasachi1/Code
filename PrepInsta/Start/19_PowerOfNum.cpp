#include<iostream>
using namespace std;

int power(int num, int p){
    int multi = 1;
    for(int i = 0;i<p;i++){
        multi = multi * num;
    }
    return multi;
}

int main()
{
    int num, p;
    cout<<"Enter the number ans power : ";
    cin>>num>>p;
    cout<<power(num, p);
    return 0;
}