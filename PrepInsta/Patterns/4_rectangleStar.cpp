#include<iostream>
using namespace std;

int main()
{
    int l, b;
    cout<<"Enter length and breadth: ";
    cin>>l>>b;
    for( int i=0;i<b;i++){
        for( int j = 0;j<l;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}