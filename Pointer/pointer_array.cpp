#include<iostream>
using namespace std;

int main()
{
    int a[]={ 2, 4, 6, 3, 8, 34, 7, 5, 7 , 1, 5};
    cout<<"address of 1st element is "<<a<<endl;
    cout<<"address of 1st element is "<<&a[0]<<endl;
    for(int i=0;i<((sizeof(a)/sizeof(int)));i++)
    {
        cout<<"address of "<<i+1<<" element is "<<a+i<<endl;
        cout<<"value of "<<i+1<<" element is "<<a[i]<<endl;
        cout<<"value of "<<i+1<<" element is "<<*(a+i)<<endl;
    }
}