#include<iostream>
using namespace std;

int main()
{
    int l;
    cout<<"Enter the length: ";
    cin>>l;
    for( int i=l-1;i>=0;i--){
        for(int j=0;j<l+i;j++){
            if(j<i){
                cout<<"  ";
                continue;
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}