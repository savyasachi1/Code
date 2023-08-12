#include<iostream>
using namespace std;

int main()
{
    int l, h;
    cout<<"Enter the length and height: ";
    cin>>l>>h;
    for( int i=0;i<h;i++){
        for(int j=0;j<l+i;j++){
            if(j<i){
                cout<<" ";
                continue;
            }
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}