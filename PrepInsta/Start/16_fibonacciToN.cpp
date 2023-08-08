#include<iostream>
using namespace std;

int main()
{
    int n, prev=0, curr=1, sum;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"0 1 ";
    for( int i = 2;i<n;i++){
        sum = prev + curr;
        prev = curr;
        curr = sum;
        cout<<sum<<" ";
    }
    return 0;
}